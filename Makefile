BASE_PATH=$(shell pwd)
SRC_PATH=${BASE_PATH}/src
BIN_PATH=${BASE_PATH}/bin

compile:
	mkdir -p ${BIN_PATH}/$(dir) && \
	cd ${SRC_PATH}/$(dir) && \
	gcc -std=c99 -Wall -Wvla -Werror -g -lm $(file).c -o ${BIN_PATH}/$(dir)/$(file)
 
run:
	cd ${BIN_PATH}/$(dir) && \
	./$(file)
 
.SILENT: compile-run
compile-run:
	make compile dir=$(dir) file=$(file) --silent && \
	make run dir=$(dir) file=$(file) --silent

clean:
	cd ${BIN_PATH} && \
	ls -A | grep -xv ".gitignore" | xargs rm -rf
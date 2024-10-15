BASE_PATH=$(shell pwd)/src
BUILD_EXTENSION=runc

compile:
	cd ${BASE_PATH}/$(dir) && \
	gcc -std=c99 -Wall -Wvla -Werror -g -lm $(file).c -o $(file).${BUILD_EXTENSION}
 
run:
	cd ${BASE_PATH}/$(dir) && \
	./$(file).${BUILD_EXTENSION}
 
.SILENT: compile-run
compile-run:
	make compile dir=$(dir) file=$(file) --silent && \
	make run dir=$(dir) file=$(file) --silent
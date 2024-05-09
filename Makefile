SOURCE=./
BUILD=build
EXECUTABLE_NAME=main
all:
	cmake -S ${SOURCE} -B ${BUILD}
	cmake --build ${BUILD} -v -j $(shell nproc)

run:
	${BUILD}/app/${EXECUTABLE_NAME}

clean:
	rm -rf ${BUILD}

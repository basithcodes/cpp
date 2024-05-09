executable=main
SOURCE=./
BUILD=build
all:
	cmake -S ${SOURCE} -B ${BUILD}
	cmake --build build -v -j $(shell nproc)

clean:
	rm -rf build

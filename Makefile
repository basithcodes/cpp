executable = main
all:
	g++ main.cpp -o build/${executable}

clean:
	rm -rf build/${executable}

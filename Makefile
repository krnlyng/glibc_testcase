
build:
	gcc -ldl -shared -fPIC test.c -o test.so
	gcc -ldl -shared -fPIC test2.c -o test2.so
	gcc -ldl main.c -o main



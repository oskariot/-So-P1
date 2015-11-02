compile: P1.c
	gcc -std=c99 -pthread P1.c -o ThreadHello
run:
	./ThreadHello
clean:
	rm ./ThreadHello

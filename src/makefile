OBJS = main.o log.o 

test: $(OBJS)
	gcc $(OBJS) -o test

main.o: main.c
	gcc -c main.c -o main.o 

log.o: log.c log.h
	gcc -c log.c -DLOG_USE_COLOR -o log.o

clean:
	rm -rf *.o test
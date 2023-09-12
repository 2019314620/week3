CC = g++
CFLAGS = -O2
TARGET = main.out
OBJS = main.o math_func.o

$(TARGET) : $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

main.o : main.cc
	$(CC) $(CFLAGS) -c $@ $<
math_func.o : math_func.cc
	$(CC) $(CFLAGS) -c $@ $<

clean :
	rm -f *.o main.out


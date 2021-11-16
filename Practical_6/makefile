$(CC)= gcc
final: temp.o mult_fun.o
	$(CC) temp.c -o remind
temp.o: temp.c 
	$(CC) -c temp.c mult_fun.h
Clean:
	rm *.o remind

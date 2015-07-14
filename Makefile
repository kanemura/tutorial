.PHONY:clean
clean:
	rm a.out-f

a.out: *.c
	gcc *.c -o $@



#all: $(MAIN)

#.c.o: gcc -c $<

#$(MAIN).o: $(MAIN).c
#	gcc -c $(MAIN).c -o $(MAIN).o

#$(MAIN): $(MAIN).o
#	gcc $(MAIN).o -o $(MAIN) 


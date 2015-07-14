MAIN	=main
SUB	=sub

.PHONY:clean
all:$(MAIN)

./bin/$(MAIN).o: ./src/$(MAIN).c
	gcc -c $< -o $@

./bin/$(SUB).o:./src/$(SUB).c
	gcc -c $< -o $@

$(MAIN): ./bin/$(MAIN).o ./bin/$(SUB).o
	gcc ./bin/$(MAIN).o ./bin/$(SUB).o -o $@

clean:
	rm $(MAIN) ./bin/$(MAIN).o ./bin/$(SUB).o

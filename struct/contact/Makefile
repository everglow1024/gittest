objects = test

all: $(objects)

test: test.o contact.o  
	gcc -o $@ $^

%.o: %.c
	gcc -c $<

.PHONY: clean
clean: 
	rm -f  *.o 

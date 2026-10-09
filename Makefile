# Makefile.


gcc_opt = -std=c99 -pedantic -Wimplicit-function-declaration -Wreturn-type -Wformat -g -c

all: project4Readme project4 project4.zip

project4.zip: Makefile project4Readme project4.h
	zip project4 Makefile project4Readme project4.h

# Compile project4 from .o files
project4: project4main.o readfile.o buildnode.o insert.o findspot.o printinstock.o printoutstock.o printitem.o project4.h
	gcc -o project4 project4main.o readfile.o buildnode.o insert.o findspot.o printinstock.o printoutstock.o printitem.o

# Create project4main.o
project4main.o: project4main.c project4.h
	gcc $(gcc_opt) -o project4main.o project4main.c

# Create readfile.o
readfile.o: readfile.c project4.h
	gcc $(gcc_opt) -o readfile.o readfile.c

# Create build_node.o
build_node.o: buildnode.c project4.h
	gcc $(gcc_opt) -o buildnode.o buildnode.c

# Create insert.o
insert.o: insert.c project4.h
	gcc $(gcc_opt) -o insert.o insert.c

# Create findspot.o
findspot.o: findspot.c project4.h
	gcc $(gcc_opt) -o findspot.o findspot.c

# Create print_in_stock.o
printinstock.o: printinstock.c project4.h
	gcc $(gcc_opt) -o printinstock.o printinstock.c

# Create print_out_stock.o
printoutstock.o: printoutstock.c project4.h
	gcc $(gcc_opt) -o printoutstock.o printoutstock.c

# Create print_item.o
printitem.o: printitem.c project4.h
	gcc $(gcc_opt) -o printitem.o printitem.c

# Create the clean command
clean:
	rm -rf *.o project4 project4.zip

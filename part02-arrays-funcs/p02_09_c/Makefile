# part02-arrays-funcs.pdf p.39

scope: scope.o func.o myscope.h
	gcc -o scope scope.o func.o

func.o: func.c myscope.h
	gcc -c func.c

scope.o: scope.c myscope.h
	gcc -c scope.c

clean:
	rm -f *.o scope

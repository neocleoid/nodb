nodb: nodb.o cache.o
	gcc -o nodb nodb.o cache.o

nodb.o: nodb.c page.h cache.h
	gcc -c nodb.c

cache.o: cache.c cache.h util.h page.h

.PHONY: clean

clean:
	-rm -rf *.o nodb.exe
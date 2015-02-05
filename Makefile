all: Safe.o
	ghc --make -no-hs-main -optc-O test.c hs_ffi.c Safe -o test

Safe.o:
	ghc -c -O Safe.hs

clean:
	rm -f Safe.o test.o test

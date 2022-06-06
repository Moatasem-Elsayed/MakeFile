#ar (1)         - create, modify, and extract from archives
#  r  			- replace existing or insert new file(s) into the archive
#  c          	- do not warn if the library had to be created
#  s          - create an archive index (cf. ranlib)
createlib:led.o
	  ar rcs libmylib.a led.o led.h

clean:
	@rm *.o
	@rm *.a
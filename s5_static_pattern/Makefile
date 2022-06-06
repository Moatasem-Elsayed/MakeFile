#1)Built-in rules 
# make -p 
#build: main.o test.o
#var2=$(file:.c=.o)
#make -r 
#
#2)threads make -j 
#3) make --debug
#
#########################################################################
include makeconfig

var2=$(file:.c=.o)
build2: $(var2)
	echo "Compile only is done"
	echo "Var2 is $(var2)"
	
#test.o:test.c
build: main.o test.o
	$(CC) $^ -o runprogram
	

build3:build2
	$(CC) $(var2) -o runprogram

.PHONY: clean
clean:
	@if [ -e $(PATH_TO_OBJECT) ]  ; \
	then \
		echo "file exist" ; \
		rm *.o ; \
		rm runprogram ; \
	fi;

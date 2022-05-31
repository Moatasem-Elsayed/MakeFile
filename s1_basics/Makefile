# what is Make ?

# - Make is a scripting tool is used for building executable 
# 	 according to commands
 
# - Make tool parse an input file " Makefile" to define rules that it will run 

# - two types of Make ( GNU Make - Borland Make)
###########################################################################

# Why we need Make ?

# to organize the compilation process
# to run our tools and scripts
# to automate the process 
# to be fully control on the outputs and its time 
#########################################################################

# is it must to be Makefile ?

#	no you can use   -f FILE, --file=FILE, --makefile=FILE
# make -f [file_name]
#########################################################################
# Basic Syntax

#1) setting rule 

# Target : prerequisites
#<tab> Recipe


#2) Define Variable

# files = main.cpp
# files += hello.cpp

#3) substitute variable 

# echo $(files)

#4) Disaple Echo 
#	Using @ ex : @echo "hello"

#5) Access Enviroment Variable
#	it is accessible ex : echo $(PATH)

#6) Access shell commands
#	example
# 		clean:
#			 @rm *.o
#			 @echo "`date` done" > log.txt

#7) Access external scripts 
#	example
# 		test:
#			python analysis.py

#########################################################################
file = test.c 

display:
	@echo $(PATH)

all: display
	gcc $(file) -o cprogram
test: 
	@python analysis.py
build:
	gcc $(file) -o test.o

clean:
	@rm *.o
	@echo "`date` done" > log.txt
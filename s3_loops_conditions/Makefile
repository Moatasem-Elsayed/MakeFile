#loops
# .remember CMAKE
#	
#	foreach(X IN LISTS A B C D E)
#    	message(STATUS "X=${X}")
#	endforeach()
###############
# 1) loop in Makefile
# 
# A -bash style
#  for i in $(LIST); do \
#		echo $$i; \
#	done
#
# B- foreach function
# $(foreach  var,list,text)
###############
#
#
# 2) if condition
#	ifeq (arg1, arg2)
# 	ifeq 'arg1' 'arg2'
# 	ifeq "arg1" "arg2"
# 	ifeq "arg1" 'arg2'
# 	ifeq 'arg1' "arg2"
#
#  ifneq (arg1, arg2)
#  ifneq 'arg1' 'arg2'
#  ifneq "arg1" "arg2"
#  ifneq "arg1" 'arg2'
#  ifneq 'arg1' "arg2"
#
# ifdef variable-name
#  bar=true
#  foo = true
#  ifdef $(foo)
#  @echo "true" 
#  endif
# ifndef variable-name

#########################################################################

#using for like bash script
LIST = one two three
loop1:
	@for i in $(LIST); do \
		echo $$i; \
	done
##################
# using foreach $(foreach  var,list,text)
list = foo bar baz
list_2 = $(foreach i,$(list),"\nWord is -$(i)")

file = test.c 
loop2:
	@echo $(list_2)
	
##################


ifeq '$(file)'  'test.c '
cond1:	 
	@echo "true"
endif 


cond2:
ifeq '$(file)'  'test.c '
		@echo "true" 
endif 

bar=true
foo = bar
cond3: 
ifdef $(foo)
	@echo "true" 
endif

##################

build: compile
	@gcc $(file) -o runprogram
compile:
	@gcc -c $(file)

.PHONY: clean
clean:
	@rm *.o
	@rm runprogram

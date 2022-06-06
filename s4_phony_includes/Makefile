#1)phony
#	avoid conflict between filename and target
#
#2) include
#3) Automatic Variables
#########################################################################
include makeconfig
build: compile
	$(CC) $(file) -o runprogram
compile:
	@$(CC) -c $(file)

.PHONY: clean
clean:
	@if [ -e $(PATH_TO_OBJECT) ]  ; \
	then \
		echo "file exist" ; \
		rm *.o ; \
		rm runprogram ; \
	fi;
info1:
	@echo "test version 1.1"
info2:
	@echo "using $(CC)"

help: info1 info2
	@echo "this is the $@"
	@echo "first prerequisite $<"
	@echo "all prerequisites $^"
	
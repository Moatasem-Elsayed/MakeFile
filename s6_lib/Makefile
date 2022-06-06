
include makeconfig

#test.o:test.c
createlib:
	@$(MAKE) -C $(LIB_PATH) $@

# -I includes 
# -L library location
# -llibname 
build: createlib
	$(CC) $(file) -I $(LIB_PATH) -lmylib -L $(LIB_PATH) -o runprogram 
	

.PHONY: clean
clean:
	@if [ -e $(PATH_TO_OBJECT) ]  ; \
	then \
		echo "file exist" ; \
		rm *.o ; \
		rm runprogram ; \
		$(MAKE) -C $(LIB_PATH) $@ ;\
	fi;

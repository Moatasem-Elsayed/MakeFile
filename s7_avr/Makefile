SRC=main.c
PROJECT_NAME=ledlbink
TARGET=main

flash: compile
	@avrdude -c usbasp -p m32 -B 0.5 -U flash:w:"${PROJECT_NAME}.hex":a

compile: $(SRC)
	@avr-gcc -mmcu=atmega32 -O0 -DF_CPU=16000000UL  -o $(TARGET).o $(SRC)
	@avr-objcopy -j .text -j .data -O ihex $(TARGET).o  $(PROJECT_NAME).hex
	@echo "Succes Compiled"

clean:
	@rm $(PROJECT_NAME).hex $(TARGET).o
	@echo "done"

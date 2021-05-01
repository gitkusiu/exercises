avr-gcc -mmcu=atmega8 -Os main.c  -o ledblink.o
avr-objcopy -j .text -j .data -O ihex  ledblink.o  ledblink.hex
avrdude -p m8 -c usbasp -U flash:w:ledblink.hex

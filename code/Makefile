# Configuración del toolchain
PREFIX ?= arm-none-eabi-

AR      := $(PREFIX)ar
AS      := $(PREFIX)as
CC      := $(PREFIX)gcc
CXX     := $(PREFIX)g++
GDB     := $(PREFIX)gdb
LD      := $(PREFIX)gcc
OBJCOPY := $(PREFIX)objcopy
OBJDUMP := $(PREFIX)objdump

# Configuración de la arquitectura
CFLAGS = -mthumb -mcpu=cortex-m4

snipets.objdump: snipets.o
	@$(OBJDUMP) -d $< > $@

snipets.o: snipets.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	-rm snipets.o snipets.objdump

.PHONY: clean


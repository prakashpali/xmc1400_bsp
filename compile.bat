
arm-none-eabi-gcc -g -Os -static -mthumb  -mcpu=cortex-m0 *.c hal\src\*.c *.S -T linker_script.ld -o main.elf -fno-exceptions -nostartfiles -Xlinker -Map=output.map

arm-none-eabi-size --format=berkeley "main.elf"

PAUSE

arm-none-eabi-gcc -S -Os -static -mthumb  -mcpu=cortex-m0 Main.c hal\src\*.c startup_XMC1400.S -T linker_script.ld -fno-exceptions -nostartfiles -Xlinker -Map=output.map>xmc1400_bsp.txt
arm-none-eabi-gcc -g -Os -static -mthumb  -mcpu=cortex-m0 Main.c hal\src\*.c startup_XMC1400.S -T linker_script.ld -o main.elf -fno-exceptions -nostartfiles -Xlinker -Map=output.map

arm-none-eabi-size --format=berkeley "main.elf"

PAUSE
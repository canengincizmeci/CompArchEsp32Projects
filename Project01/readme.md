I start serial communication at 115200 baud.
I use a short delay to ensure serial monitor is ready.
I created result variable with integer fomat and initilaze as a 0  becase we store the addition result.
And in the 7th line we have inline Xtensa Assembly block as a function named "volatile".
This function in 8th line ("movi a2,2") load 2 value into register a2
after that in the 9th  line ("movi a3,3") load 3 value into register a3.
Thus, we now have numbers in our registers to operate on.
10th line add values in a2 register and a3 register, store result in a4 register.
In the 11th line the '%0' term is result variable and we  move the result from register a4 into C variable 'result'.
12th line we store the  result in a CPU register and we assign to result.In the 13th line means there is no parameter from C.
14th line means these registers are modified by the assembly block.



THE OUTPUT ON THE SERIAL MONITOR
ts Jul 29 2019 12:21:46

rst:0x1 (POWERON_RESET),boot:0x13 (SPI_FAST_FLASH_BOOT)
configsip: 0, SPIWP:0xee
clk_drv:0x00,q_drv:0x00,d_drv:0x00,cs0_drv:0x00,hd_drv:0x00,wp_drv:0x00
mode:DIO, clock div:1
load:0x3fff0030,len:4980
load:0x40078000,len:16612
load:0x40080400,len:3500
entry 0x400805b4
2 + 3 = 5
ets Jul 29 2019 12:21:46

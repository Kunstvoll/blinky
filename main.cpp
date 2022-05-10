/* mbed Microcontroller Library
 * Copyright (c) 2019 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 */

#include "mbed.h"


// Blinking rate in milliseconds
#define BLINKING_RATE     500ms


/*#ifdef LED1
#undef LED1
#define LED1 PC_3
#endif

#ifdef LED2
#undef LED2
#define LED2 PC_2
#endif

#ifdef LED3
#undef LED3
#define LED3 PF_7
#endif*/

int main()
{
    // Initialise the digital pin LED1 as an output
    DigitalOut led_1(LED1);
    DigitalOut led_2(LED2);

    DigitalOut led_3(LED3);


    while (true) {
        led_1=!led_1;
        led_2=!led_2;
       led_3=!led_3;
        //ThisThread::sleep_for(BLINKING_RATE);
    }
}

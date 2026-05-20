/*
 * File:   main.c
 */

#include <xc.h>
#include "clcd.h"

#pragma config WDTE = OFF        // Watchdog Timer Enable bit (WDT disabled)

static void init_config(void) 
{
    init_clcd(); //port 
    
}

void main(void) 
{
    init_config();

    while (1) 
    {
        clcd_putch('AJ',LINE1(5));
        clcd_print("ATHARVA",LINE2(0));
        clcd_print("MANGESH",LINE3(0));
        clcd_print("JADHAV",LINE4(0));
    }
    
}

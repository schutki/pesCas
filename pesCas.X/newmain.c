/* 
 * File:   newmain.c
 * Author: Vlada
 *
 * Created on December 22, 2014, 9:31 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include<p24fxxxx.h>

/*
 * 
 */
int main(int argc, char** argv) {


    TRISBbits.TRISB0=0;
    while(1)
    {
        LATBbits.LATB0=~LATBbits.LATB0;
    }
    return (EXIT_SUCCESS);
}


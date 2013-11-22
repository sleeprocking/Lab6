#include <msp430.h> 
#include "move.h"
/*
 * main.c
 */

int main(void) {
    WDTCTL = WDTPW | WDTHOLD;	// Stop watchdog timer
	pulseWidthModulation();
	moveForward(49,50,250);
	stop();
	_delay_cycles(10000);
	moveBackward(50,50,250);
	stop();
	_delay_cycles(1000);
	turnLeft(50,50,50);
	stop();
	_delay_cycles(1000);
	turnRight(50,50,50);
	stop();
	_delay_cycles(1000);
	turnLeft(50,50,250);
	stop();
	_delay_cycles(1000);
	turnRight(50,50,250);
	stop();
}


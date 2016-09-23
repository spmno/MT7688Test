/*
 * example of GPIO
 *
 * Author: JoStudio
 */


#include "GPIO/gpio.h"
#include "GPIO/gpio_mmap.h"
#include <unistd.h>
#include <stdio.h>




int main() {
	int pin = 14;
/*	if ( 1 == gpio_export(pin) ) {
			if ( 1 == gpio_set_direction(pin, GPIO_OUTPUT) ) {
				gpio_write( pin, GPIO_LOW );
				sleep(1000);
			}
	}
	*/
	GPIO gpio;
	gpio.gpio_set_direction(pin, GPIO_OUTPUT);
	gpio.gpio_write(pin, GPIO_HIGH);
	sleep(1000);
	return 0;
}



/*
 * example of GPIO
 *
 * Author: JoStudio
 */


#include "GPIO/gpio.h"
#include <unistd.h>
#include <stdio.h>

void blink(int pin) {
	printf("blink GPIO %d for 10 times\n", pin);
	fflush(stdout);

	if ( 1 == gpio_export(pin) ) {
		if ( 1 == gpio_set_direction(pin, GPIO_OUTPUT) ) {
			//blink
			int value = GPIO_HIGH;
			int i;
			for ( i = 0; i < 10; i++ ) {
				printf("blink %d\n", i);
				value = (value == GPIO_HIGH) ? GPIO_LOW : GPIO_HIGH;
				gpio_write( pin, value );
				sleep(1);
			}
		}
	}
}



int main() {
	int pin = 14;
	if ( 1 == gpio_export(pin) ) {
			if ( 1 == gpio_set_direction(pin, GPIO_OUTPUT) ) {
				gpio_write( pin, GPIO_LOW );
				sleep(1000);
			}
	}
	return 0;
}



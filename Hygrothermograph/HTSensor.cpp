/*
 * HTSensor.cpp
 *
 *  Created on: 2016年9月23日
 *      Author: root
 */
#include <unistd.h>
#include <stdio.h>
#include "HTSensor.h"


#define DATA_PIN	14

float HTSensor::get_temperature()
{
	return temperature;
}

float HTSensor::get_humidity()
{
	return humidity;
}

void HTSensor::start_work()
{
	printf("start work!\n");
	init_bus();

	printf("read data start!\n");
	temp_value_array[0] = read_bit();
	temp_value_array[1] = read_bit();
	temp_value_array[2] = read_bit();
	temp_value_array[3] = read_bit();

	printf("temp data = %d, %d, %d, %d\n", temp_value_array[0], temp_value_array[1], temp_value_array[2], temp_value_array[3]);

}

void HTSensor::init_bus()
{
	gpio.gpio_set_direction(DATA_PIN, GPIO_OUTPUT);

	// pull low 20ms
	printf(" pull low 20ms\n");
	gpio.gpio_write(DATA_PIN, GPIO_LOW);
	usleep(20*1000);
	// pull high 20us
	printf(" pull high 20us\n");
	gpio.gpio_write(DATA_PIN, GPIO_HIGH);
	usleep(20);

	// set input direction
	printf("set input direction\n");
	gpio.gpio_set_direction(DATA_PIN, GPIO_INPUT);

	//read low level
	printf("read low level\n");
	usleep(80);
	while(gpio.gpio_read(DATA_PIN) == GPIO_HIGH);
	//read high level
	printf("read high level\n");
	usleep(80);
	while(gpio.gpio_read(DATA_PIN) == GPIO_LOW);
	//while high level end
	printf("while high level end\n");
	while(gpio.gpio_read(DATA_PIN) == GPIO_HIGH);

}

unsigned char HTSensor::read_bit()
{
	short exit_flag = 0;
	unsigned char result = 0;
	for (int i = 0; i < 8; ++i) {
		// wait start bit end
		printf("wait start bit end\n");
		usleep(40);
		while(gpio.gpio_read(DATA_PIN) == GPIO_LOW);
		//wait zero time
		printf("wait zero time\n");
		usleep(30);
		int temp_value;
		if (gpio.gpio_read(DATA_PIN) == GPIO_LOW) {
			temp_value = 0;
			printf("value 0\n");
		} else {
			temp_value = 1;
			usleep(30);
			printf("value 1\n");
		}
		result <<= 1;
		result |= temp_value;
		printf("for end\n");
	}
	return result;
}

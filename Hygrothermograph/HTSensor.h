/*
 * HTSensor.h
 *
 *  Created on: 2016年9月23日
 *      Author: root
 */

#ifndef HTSENSOR_H_
#define HTSENSOR_H_

#include "../GPIO/gpio.h"
#include "../GPIO/gpio_mmap.h"

class HTSensor
{
public:
	float get_temperature();
	float get_humidity();
	void start_work();
private:
	float temperature;
	float humidity;
	unsigned char temp_value_array[4];
	GPIOMmap gpio;
	void init_bus();
	unsigned char read_bit();
};



#endif /* HTSENSOR_H_ */

/*
 * gpio_sys.h
 *
 *  Created on: 2016年9月19日
 *      Author: root
 */

#ifndef GPIO_SYS_H_
#define GPIO_SYS_H_

class GPIOSys
{
public:
	int gpio_is_exported(int pin_number) ;
	int gpio_export(int pin_number);
	int gpio_unexport(int pin_number) ;
	int  gpio_read(int pin_number) ;
	int  gpio_write(int pin_number, int value);
	int  gpio_set_direction(int pin_number, int direction) ;
	int  gpio_get_direction(int pin_number);
};


#endif /* GPIO_SYS_H_ */

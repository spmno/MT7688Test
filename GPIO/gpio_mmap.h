/*
 * gpio_mmap.h
 *
 *  Created on: 2016年9月19日
 *      Author: root
 */

#ifndef GPIO_MMAP_H_
#define GPIO_MMAP_H_

class GPIOMmap
{
public:
	GPIOMmap();
	~GPIOMmap();
	int  gpio_read(int pin_number) ;
	int  gpio_write(int pin_number, int value);
	int  gpio_set_direction(int pin_number, int direction) ;
	int  gpio_get_direction(int pin_number);
	int gpio_mmap(void);
	int gpio_munmap(void);
};



#endif /* GPIO_MMAP_H_ */

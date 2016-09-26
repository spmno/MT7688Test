/*
 *  A library for Linux GPIO operation
 *
 *  Author: JoStudio, 2016
 *
 *  Version: 0.5
 *
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sublicense, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
 * LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
 * OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
 * WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

#ifndef __GPIO_H__
#define __GPIO_H__


/* GPIO value */
#define GPIO_HIGH     1
#define GPIO_LOW      0

/* GPIO direction code */
#define GPIO_INPUT       0
#define GPIO_OUTPUT      1
#define GPIO_OUTPUT_HIGH 2
#define GPIO_OUTPUT_LOW  3

/* GPIO error code */
#define GPIO_SUCCESS            1
#define GPIO_INVALID_RESOURCE  -1
#define GPIO_ERROR_READ        -2
#define GPIO_ERROR_WRITE       -3
#define GPIO_ERROR_DIRECTION   -4

/*
class GPIOMmap;
class GPIOSys;

template <typename Method>
class GPIOHost : public Method
{
};
*/


#endif /* __GPIO_H__ */

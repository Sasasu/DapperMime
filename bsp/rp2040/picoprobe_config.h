/*
 * The MIT License (MIT)
 *
 * Copyright (c) 2021 Raspberry Pi (Trading) Ltd.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 */

#ifndef PICOPROBE_H_
#define PICOPROBE_H_

#if false
#define picoprobe_info(format,args...) printf(format, ## args)
#else
#define picoprobe_info(format,...) ((void)0)
#endif


#if false
#define picoprobe_debug(format,args...) printf(format, ## args)
#else
#define picoprobe_debug(format,...) ((void)0)
#endif

#if false
#define picoprobe_dump(format,args...) printf(format, ## args)
#else
#define picoprobe_dump(format,...) ((void)0)
#endif


// PIO config
#define PROBE_PIN_TCK_SWCLK 0
#define PROBE_PIN_TMS_SWDIO 1

#define PROBE_PIN_TDI       2
#define PROBE_PIN_TDO       3

#define PROBE_PIN_SRST      4

#define PROBE_PIN_TRST     27 // A1

// UART config
#define PICOPROBE_UART_TX  28 // A2
#define PICOPROBE_UART_RX  29 // A3
#define PICOPROBE_UART_INTERFACE uart0
#define PICOPROBE_UART_BAUDRATE 115200

#define PICOPROBE_LED 25
#define PICOPROBE_CONNECTED_LED 23
#define PICOPROBE_RUNNING_LED 24

// LED config
#ifndef PICOPROBE_LED

#ifndef PICO_DEFAULT_LED_PIN
#error PICO_DEFAULT_LED_PIN is not defined, run PICOPROBE_LED=<led_pin> cmake
#elif PICO_DEFAULT_LED_PIN == -1
#error PICO_DEFAULT_LED_PIN is defined as -1, run PICOPROBE_LED=<led_pin> cmake
#else
#define PICOPROBE_LED PICO_DEFAULT_LED_PIN
#endif

#endif

#endif

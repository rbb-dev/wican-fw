/*
 * This file is part of the WiCAN project.
 *
 * Copyright (C) 2022  Meatpi Electronics.
 * Written by Ali Slim <ali@meatpi.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */


#ifndef __TYPES_H__
#define __TYPES_H__

// #if HARDWARE_VER == WICAN_V300 || HARDWARE_VER == WICAN_USB_V100
// #define DEV_BUFFER_LENGTH	128
// #elif HARDWARE_VER == WICAN_PRO
// #define DEV_BUFFER_LENGTH	1024
// #endif
#define DEV_BUFFER_LENGTH	1024

typedef enum
{
	DEV_WIFI = 0,
	DEV_WIFI_WS,
	DEV_BLE,
	DEV_UART,
	DEV_MAX
}dev_channel_t;


typedef struct __xdev_buffer
{
	int usLen;
	uint8_t ucElement[DEV_BUFFER_LENGTH];
	dev_channel_t dev_channel;
}xdev_buffer;

#endif

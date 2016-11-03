/* bricklib
 * Copyright (C) 2016 Olaf Lüke <olaf@tinkerforge.com>
 *
 * bricklet_co_mcu.h: Functions for Bricklets with co-processor
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 */

#ifndef BRICKLET_CO_MCU_H
#define BRICKLET_CO_MCU_H

#include <stdint.h>

void bricklet_co_mcu_poll(const uint8_t bricklet_num);
void bricklet_co_mcu_send(const uint8_t bricklet_num, uint8_t *data, const uint8_t length);
void bricklet_co_mcu_init(const uint8_t bricklet_num);

#endif

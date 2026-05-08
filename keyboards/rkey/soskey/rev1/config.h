/* Copyright 2026 rkey-device/ (@rkey-device)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
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

#pragma once

#define WS2812_SPI_DRIVER                   SPID1
#define WS2812_SPI_MOSI_PAL_MODE            5

#define VIA_EEPROM_LAYOUT_OPTIONS_SIZE      2

#define STM32_ONBOARD_EEPROM_SIZE           1024

#ifdef AUDIO_ENABLE
# define STARTUP_SONG SONG(STARTUP_SOUND)
#endif

#define AUDIO_PIN A4
#define AUDIO_CLICKY

#define RGB_MATRIX_KEYPRESSES
#define RGB_MATRIX_REACT_ON_KEYUP
#define RGB_MATRIX_INDICATOR_SET_REMAP

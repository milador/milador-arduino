/*
  Copyright (c) 2014-2015 Arduino LLC.  All right reserved.
  Copyright (c) 2016 Sandeep Mistry All right reserved.
  Copyright (c) 2018, Adafruit Industries (adafruit.com)

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#include "variant.h"
#include "wiring_constants.h"
#include "wiring_digital.h"
#include "nrf.h"

const uint32_t g_ADigitalPinMap[] =
{
  // D0 .. D3 (aka A0 .. A3)
  4,   // D0 is P0.04 (A0)
  30,  // D1 is P0.30 (A1)
  28,  // D2 is P0.28 (A2)
  31,  // D3 is P0.32 (A3)

  // D4 .. D5 (aka I2C pins)
  15,  // D4 is P0.15 (SDA)
  20,  // D5 is P0.20 (SCL)  
  
  // D6 .. D7 (Serial)
  24,  // D6  is P0.24 (UART TX)
  25,  // D7  is P0.25 (UART RX)
  
  // D8 .. D10 (aka SPI pins)
  16,  // D8 is P0.16 (SPI SCK )
  13,  // D9 is P0.13 (SPI MISO)
  14,  // D10 is P0.14 (SPI MOSI)

  
  // D11 .. D14  
  43,  // D11  is P1.11 (LED1)
  42,  // D12  is P1.10 (LED2)
  29,  // D13  is P0.29 (Button)
  8,   // D14  is P0.8 (NeoPixel)


  // QSPI pins (not exposed via any header / test point)
  19,  // D15 is P0.19 (QSPI CLK)
  23,  // D16 is P0.23 (QSPI CS)
  21,  // D17 is P0.21 (QSPI Data 0)
  22,  // D18 is P0.22 (QSPI Data 1)
  32,  // D19 is P0.32 (QSPI Data 2)
  17,  // D20 is P0.17 (QSPI Data 3)


  // Thus, there are 21 defined pins


};

void initVariant()
{
  // LED1 & LED2
  /*
  pinMode(PIN_LED1, OUTPUT);
  ledOff(PIN_LED1);

  pinMode(PIN_LED2, OUTPUT);
  ledOff(PIN_LED2);
  */
}


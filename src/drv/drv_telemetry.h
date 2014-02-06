/*
  August 2013

  Focused Flight32 Rev -

  Copyright (c) 2013 John Ihlein.  All rights reserved.

  Open Source STM32 Based Multicopter Controller Software

  Designed to run on the AQ32 Flight Control Board

  Includes code and/or ideas from:

  1)AeroQuad
  2)BaseFlight
  3)CH Robotics
  4)MultiWii
  5)Paparazzi UAV
  5)S.O.H. Madgwick
  6)UAVX

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program. If not, see <http://www.gnu.org/licenses/>.
*/

///////////////////////////////////////////////////////////////////////////////

#pragma once

///////////////////////////////////////////////////////////////////////////////

void telemetryInit(void);

///////////////////////////////////////////////////////////////////////////////

uint16_t telemetryAvailable(void);

///////////////////////////////////////////////////////////////////////////////

uint8_t telemetryRead(void);

///////////////////////////////////////////////////////////////////////////////

uint8_t telemetryReadPoll(void);

///////////////////////////////////////////////////////////////////////////////

void telemetryWrite(uint8_t ch);

///////////////////////////////////////////////////////////////////////////////

void telemetryPrint(char *str);

///////////////////////////////////////////////////////////////////////////////
// Telemetry Print Formatted - Print formatted string to Telemetry Port
// From Ala42
///////////////////////////////////////////////////////////////////////////////

void telemetryPrintF(const char * fmt, ...);

///////////////////////////////////////////////////////////////////////////////

void telemetryPrintBinary(uint8_t *buf, uint16_t length);

///////////////////////////////////////////////////////////////////////////////

//
// OOSMOS encoder Class
//
// Copyright (C) 2014-2018  OOSMOS, LLC
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, version 2 of the License ("GPLv2").
//
// This software may be used without the GPLv2 restrictions by entering
// into a commercial license agreement with OOSMOS, LLC.
// See <https://oosmos.com/licensing/>.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
//

#ifndef encoder_h
#define encoder_h

#include "oosmos.h"
#include "pin.h"

typedef struct encoderTag encoder;

extern encoder * encoderNew(pin * pEncoderA, pin * pEncoderB, int Max);
extern void encoderReset(encoder * pEncoder);
extern int encoderGetCount(const encoder * pEncoder);

extern void encoderSubscribeChangeEvent(encoder * pEncoder, oosmos_sQueue * pQueue, const int EventCode, void * pContext);

#endif

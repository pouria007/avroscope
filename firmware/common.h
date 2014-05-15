/*************************************************************************
 *                                                                       *
 * This file is a part of the AVROscope project:                         *
 * A Low-Cost Low-Frequency USB Oscilloscope                             *
 * Copyright (C) 2013-2014, Nima Alamatsaz, All rights reserved          *
 * Email: nnalamat@gmail.com                                             *
 * Web:   http://github.com/nalamat/avroscope                            *
 *                                                                       *
 * AVROscope is free software: you can redistribute it and/or modify     *
 * it under the terms of the GNU General Public License as published by  *
 * the Free Software Foundation, either version 3 of the License, or     *
 * any later version.                                                    *
 *                                                                       *
 * AVROscope is distributed in the hope that it will be useful,          *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the          *
 * GNU General Public License for more details.                          *
 *                                                                       *
 * You should have received a copy of the GNU General Public License     *
 * along with AVROscope. If not, see <http://www.gnu.org/licenses/>.     *
 *                                                                       *
 *************************************************************************/

/*
 * common utility
*/

#ifndef SMS_CONTROLLER_COMMON_H
#define SMS_CONTROLLER_COMMON_H

#include <stdlib.h>

#define delay_us _delay_us
#define delay_ms _delay_ms

#define char_to_lower(c) ( 'A'<=c&&c<='Z' ? (c-'A'+'a') : (c) )
#define char_to_upper(c) ( 'a'<=c&&c<='z' ? (c-'a'+'A') : (c) )

void *operator new(size_t objsize);
void operator delete(void* obj);

#endif
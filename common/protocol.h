/*
 * OpenWIPS-ng - common stuff.
 * Copyright (C) 2012 Thomas d'Otreppe de Bouvette
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 *
 *      Author: Thomas d'Otreppe de Bouvette
 */

#ifndef COMMON_PROTOCOL_H_
#define COMMON_PROTOCOL_H_

typedef enum {
	Newline,
	CarriageReturnNewline
} CommandEndEnum;

#define DEFAULT_PROTOCOL_ENCODE		Newline

char * encode(CommandEndEnum encoding_type, char * format, ...);
char * encode_simple(char * format, ...);

char * decode(char * input_string, int duplicate, CommandEndEnum * encoding_type);
char * decode_simple(char * input_string);
inline char * decode_dup(char * input_string, int duplicate);

#endif /* COMMON_PROTOCOL_H_ */

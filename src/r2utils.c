/*
 * OpenR2 
 * MFC/R2 call setup library
 *
 * Moises Silva <moises.silva@gmail.com>
 * Copyright (C) Moises Silva
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */
#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

const char *openr2_get_version()
{
#ifdef VERSION
	return VERSION;
#else
	return "???"
#endif
}

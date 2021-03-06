/*
 * $Id: $
 * Revision History
 * ================
 * $Log: $
 * ================
 *
 * Copyright (C) 2010 Clive Webster (webbot@webbot.org.uk)
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 *
 *        File: clockHasElapsed.c
 *  Created on: 24 Dec 2010
 *      Author: Clive Webster
 */
#include "../clock.h"

/*
   returns true if the specified number of microseconds
   has passed since the start time
*/
boolean clockHasElapsed(TICK_COUNT usStart, TICK_COUNT usWait){
	return clockHasElapsedGetOverflow(usStart,usWait,null);
}

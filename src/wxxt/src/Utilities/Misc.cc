/*								-*- C++ -*-
 *
 * Purpose: miscellaneous utilities
 *
 * Authors: Markus Holzem and Julian Smart
 *
 * Copyright: (C) 2004-2007 PLT Scheme Inc.
 * Copyright: (C) 1995, AIAI, University of Edinburgh (Julian)
 * Copyright: (C) 1995, GNU (Markus)
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301 USA.
 */

#define  Uses_XLib
#define  Uses_wxFrame
#define  Uses_wxList
#define  Uses_wxMenuBar
#define  Uses_wxWindow
#include "wx.h"

void wxBell(void)
{
    XBell(wxAPP_DISPLAY, 100);
}

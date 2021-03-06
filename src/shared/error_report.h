/*
Copyright (C) 2012 Sebastian Herbord. All rights reserved.

This file is part of Mod Organizer.

Mod Organizer is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

Mod Organizer is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with Mod Organizer.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef MODORGANIZER_SHARED_ERROR_REPORT_INCLUDED
#define MODORGANIZER_SHARED_ERROR_REPORT_INCLUDED

#include <tchar.h>
#define WIN32_LEAN_AND_MEAN
#include <Windows.h>
#include <string>

namespace MOShared
{

void reportError(LPCSTR format, ...);
void reportError(LPCWSTR format, ...);

// shows a critical message box that's raised to the top of the zorder, useful
// for messages without a main window, which sometimes makes them pop up behind
// all other windows
//
// the dialog is not topmost, it's just raised once when shown
//
void criticalOnTop(const QString& message);

} // namespace MOShared

#endif  // MODORGANIZER_SHARED_ERROR_REPORT_INCLUDED

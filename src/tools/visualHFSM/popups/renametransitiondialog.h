/*
 *  Copyright (C) 1997-2013 JDERobot Developers Team
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Library General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, see <http://www.gnu.org/licenses/>.
 *
 *  Authors : Borja Menéndez Moreno <b.menendez.moreno@gmail.com>
 *            José María Cañas Plaza <jmplaza@gsyc.es>
 *
 */

#ifndef RENAMEDIALOGTRANSITION_H
#define RENAMEDIALOGTRANSITION_H

#include <unistd.h>
#include <resourcelocator/gladelocator.hpp> 

#include "../guitransition.h"

// Definition of this class
class RenameDialogTransition {
public:
	// Constructor
	RenameDialogTransition ( GuiTransition* gtransition );

	// Destructor
	virtual ~RenameDialogTransition ();

	// Popup initializer
	void init ();

protected:
	// Data structure
	GuiTransition* gtransition;
	Gtk::Dialog* dialog;
	Gtk::Button* button_accept;
	Gtk::Button* button_cancel;
	Gtk::Entry* entry_text;
	
	// Private methods
	void on_button_accept ();
	void on_button_cancel ();
	bool on_key_released ( GdkEventKey* event );
};

#endif // RENAMEDIALOGTRANSITION_H
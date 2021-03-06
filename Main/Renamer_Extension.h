/*
 * Copyrights (c):
 *		2000 - 2008, Werner Freytag.
 *		2018, Humdinger
 * Distributed under the terms of the MIT License.
 *
 * Original author:
 * 		Werner Freytag <freytag@gmx.de>
 */
#ifndef REN_EXTENSION_H
#define REN_EXTENSION_H

#include <regex.h>
#include <string.h>

#include <CheckBox.h>
#include <RadioButton.h>
#include <UTF8.h>

#include "Renamer.h"

class Renamer_Extension : public Renamer {
public:
					Renamer_Extension();
			void	RenameList(BList* FileList);

			void	AttachedToWindow();
			void	DetachedFromWindow();

private:
	BCheckBox*		fReplaceOldCheckBox;
	BRadioButton*	fLowerCase;
	BRadioButton*	fUpperCase;
};

#endif // REN_EXTENSION_H

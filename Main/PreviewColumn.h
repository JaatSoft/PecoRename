/*
 * Copyright 2017. All rights reserved.
 * Distributed under the terms of the MIT license.
 *
 * Authors:
 *		Janus
 */
#ifndef PREVIEW_COLUMN_H
#define PREVIEW_COLUMN_H

#include <ColumnTypes.h>

class PreviewField : public BStringField {
public:
			PreviewField(const char* string);

	bool	Error() const;
	void 	SetError(bool error);

private:
	bool 	fError;
};


class PreviewColumn : public BStringColumn {
public:
					PreviewColumn(const char* title, float width,
						float minWidth, float maxWidth, uint32 truncate,
						alignment align = B_ALIGN_LEFT);

	virtual	bool	AcceptsField(const BField* field) const;
	virtual	void	DrawField(BField* field, BRect rect, BView* parent);
};

#endif	// PREVIEW_COLUMN_H

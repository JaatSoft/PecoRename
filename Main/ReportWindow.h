/*
 * Copyright 2017. All rights reserved.
 * Distributed under the terms of the MIT license.
 *
 * Authors:
 *		Janus
 */
#ifndef REPORTWINDOW_H
#define REPORTWINDOW_H

#include <ListView.h>
#include <Path.h>
#include <Window.h>

#include "FileListItem.h"
#include "MainView.h"

class ReportWindow : public BWindow {
public:
						ReportWindow(BRect frame, BList* filelist);
			virtual		~ReportWindow();

				bool	QuitRequested();
				void	MessageReceived(BMessage* msg);

private:
	BColumnListView* 	fReportView;
};

#endif // REPORTWINDOW_H

/***************************************************************
 * Name:      wxFB_dialogMain.h
 * Purpose:   Defines Application Frame
 * Author:     ()
 * Created:   2020-06-25
 * Copyright:  ()
 * License:
 **************************************************************/

#ifndef WXFB_DIALOGMAIN_H
#define WXFB_DIALOGMAIN_H



#include "wxFB_dialogApp.h"



#include "GUIDialog.h"

class wxFB_dialogDialog: public GUIDialog
{
    public:
        wxFB_dialogDialog(wxDialog *dlg);
        ~wxFB_dialogDialog();
    private:
        virtual void OnClose(wxCloseEvent& event);
        virtual void OnQuit(wxCommandEvent& event);
        virtual void OnAbout(wxCommandEvent& event);
};
#endif // WXFB_DIALOGMAIN_H

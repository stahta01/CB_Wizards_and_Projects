/***************************************************************
 * Name:      wxDialogMain.h
 * Purpose:   Defines Application Frame
 * Author:     ()
 * Created:   2020-06-25
 * Copyright:  ()
 * License:
 **************************************************************/

#ifndef WXDIALOGMAIN_H
#define WXDIALOGMAIN_H

#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif

#include "wxDialogApp.h"


#include <wx/button.h>
#include <wx/statline.h>
class wxDialogDialog: public wxDialog
{
    public:
        wxDialogDialog(wxDialog *dlg, const wxString& title);
        ~wxDialogDialog();

    protected:
        enum
        {
            idBtnQuit = 1000,
            idBtnAbout
        };
        wxStaticText* m_staticText1;
        wxButton* BtnAbout;
        wxStaticLine* m_staticline1;
        wxButton* BtnQuit;

    private:
        void OnClose(wxCloseEvent& event);
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        DECLARE_EVENT_TABLE()
};

#endif // WXDIALOGMAIN_H

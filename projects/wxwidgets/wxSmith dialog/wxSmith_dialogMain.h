/***************************************************************
 * Name:      wxSmith_dialogMain.h
 * Purpose:   Defines Application Frame
 * Author:     ()
 * Created:   2020-06-25
 * Copyright:  ()
 * License:
 **************************************************************/

#ifndef WXSMITH_DIALOGMAIN_H
#define WXSMITH_DIALOGMAIN_H

//(*Headers(wxSmith_dialogDialog)
#include <wx/button.h>
#include <wx/dialog.h>
#include <wx/sizer.h>
#include <wx/statline.h>
#include <wx/stattext.h>
//*)

class wxSmith_dialogDialog: public wxDialog
{
    public:

        wxSmith_dialogDialog(wxWindow* parent,wxWindowID id = -1);
        virtual ~wxSmith_dialogDialog();

    private:

        //(*Handlers(wxSmith_dialogDialog)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        //*)

        //(*Identifiers(wxSmith_dialogDialog)
        static const long ID_STATICTEXT1;
        static const long ID_BUTTON1;
        static const long ID_STATICLINE1;
        static const long ID_BUTTON2;
        //*)

        //(*Declarations(wxSmith_dialogDialog)
        wxBoxSizer* BoxSizer1;
        wxBoxSizer* BoxSizer2;
        wxButton* Button1;
        wxButton* Button2;
        wxStaticLine* StaticLine1;
        wxStaticText* StaticText1;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // WXSMITH_DIALOGMAIN_H

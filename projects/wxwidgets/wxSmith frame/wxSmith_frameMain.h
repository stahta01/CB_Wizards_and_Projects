/***************************************************************
 * Name:      wxSmith_frameMain.h
 * Purpose:   Defines Application Frame
 * Author:     ()
 * Created:   2020-06-25
 * Copyright:  ()
 * License:
 **************************************************************/

#ifndef WXSMITH_FRAMEMAIN_H
#define WXSMITH_FRAMEMAIN_H

//(*Headers(wxSmith_frameFrame)
#include <wx/frame.h>
#include <wx/menu.h>
#include <wx/statusbr.h>
//*)

class wxSmith_frameFrame: public wxFrame
{
    public:

        wxSmith_frameFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~wxSmith_frameFrame();

    private:

        //(*Handlers(wxSmith_frameFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        //*)

        //(*Identifiers(wxSmith_frameFrame)
        static const long idMenuQuit;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(wxSmith_frameFrame)
        wxStatusBar* StatusBar1;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // WXSMITH_FRAMEMAIN_H

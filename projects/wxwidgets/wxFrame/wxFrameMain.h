/***************************************************************
 * Name:      wxFrameMain.h
 * Purpose:   Defines Application Frame
 * Author:     ()
 * Created:   2020-06-25
 * Copyright:  ()
 * License:
 **************************************************************/

#ifndef WXFRAMEMAIN_H
#define WXFRAMEMAIN_H

#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif

#include "wxFrameApp.h"

class wxFrameFrame: public wxFrame
{
    public:
        wxFrameFrame(wxFrame *frame, const wxString& title);
        ~wxFrameFrame();
    private:
        enum
        {
            idMenuQuit = 1000,
            idMenuAbout
        };
        void OnClose(wxCloseEvent& event);
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        DECLARE_EVENT_TABLE()
};


#endif // WXFRAMEMAIN_H

/***************************************************************
 * Name:      wxFB_frameMain.h
 * Purpose:   Defines Application Frame
 * Author:     ()
 * Created:   2020-06-25
 * Copyright:  ()
 * License:
 **************************************************************/

#ifndef WXFB_FRAMEMAIN_H
#define WXFB_FRAMEMAIN_H



#include "wxFB_frameApp.h"


#include "GUIFrame.h"

class wxFB_frameFrame: public GUIFrame
{
    public:
        wxFB_frameFrame(wxFrame *frame);
        ~wxFB_frameFrame();
    private:
        virtual void OnClose(wxCloseEvent& event);
        virtual void OnQuit(wxCommandEvent& event);
        virtual void OnAbout(wxCommandEvent& event);
};

#endif // WXFB_FRAMEMAIN_H

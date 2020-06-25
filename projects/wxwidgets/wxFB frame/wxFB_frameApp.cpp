/***************************************************************
 * Name:      wxFB_frameApp.cpp
 * Purpose:   Code for Application Class
 * Author:     ()
 * Created:   2020-06-25
 * Copyright:  ()
 * License:
 **************************************************************/

#ifdef WX_PRECOMP
#include "wx_pch.h"
#endif

#ifdef __BORLANDC__
#pragma hdrstop
#endif //__BORLANDC__

#include "wxFB_frameApp.h"
#include "wxFB_frameMain.h"

IMPLEMENT_APP(wxFB_frameApp);

bool wxFB_frameApp::OnInit()
{
    wxFB_frameFrame* frame = new wxFB_frameFrame(0L);
    frame->SetIcon(wxICON(aaaa)); // To Set App Icon
    frame->Show();
    
    return true;
}

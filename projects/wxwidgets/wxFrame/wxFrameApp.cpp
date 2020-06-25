/***************************************************************
 * Name:      wxFrameApp.cpp
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

#include "wxFrameApp.h"
#include "wxFrameMain.h"

IMPLEMENT_APP(wxFrameApp);

bool wxFrameApp::OnInit()
{
    wxFrameFrame* frame = new wxFrameFrame(0L, _("wxWidgets Application Template"));
    frame->SetIcon(wxICON(aaaa)); // To Set App Icon
    frame->Show();
    
    return true;
}

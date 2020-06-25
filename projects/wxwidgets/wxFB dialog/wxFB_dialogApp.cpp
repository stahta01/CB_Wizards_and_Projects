/***************************************************************
 * Name:      wxFB_dialogApp.cpp
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

#include "wxFB_dialogApp.h"
#include "wxFB_dialogMain.h"

IMPLEMENT_APP(wxFB_dialogApp);

bool wxFB_dialogApp::OnInit()
{
    
    wxFB_dialogDialog* dlg = new wxFB_dialogDialog(0L);
    dlg->SetIcon(wxICON(aaaa)); // To Set App Icon
    dlg->Show();
    return true;
}

/***************************************************************
 * Name:      wxDialogApp.cpp
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

#include "wxDialogApp.h"
#include "wxDialogMain.h"

IMPLEMENT_APP(wxDialogApp);

bool wxDialogApp::OnInit()
{
    
    wxDialogDialog* dlg = new wxDialogDialog(0L, _("wxWidgets Application Template"));
    dlg->SetIcon(wxICON(aaaa)); // To Set App Icon
    dlg->Show();
    return true;
}

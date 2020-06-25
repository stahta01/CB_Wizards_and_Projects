/***************************************************************
 * Name:      wxSmith_dialogApp.cpp
 * Purpose:   Code for Application Class
 * Author:     ()
 * Created:   2020-06-25
 * Copyright:  ()
 * License:
 **************************************************************/

#include "wxSmith_dialogApp.h"

//(*AppHeaders
#include "wxSmith_dialogMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(wxSmith_dialogApp);

bool wxSmith_dialogApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	wxSmith_dialogDialog Dlg(0);
    	SetTopWindow(&Dlg);
    	Dlg.ShowModal();
    	wxsOK = false;
    }
    //*)
    return wxsOK;

}

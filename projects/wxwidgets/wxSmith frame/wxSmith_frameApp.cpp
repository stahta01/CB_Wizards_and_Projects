/***************************************************************
 * Name:      wxSmith_frameApp.cpp
 * Purpose:   Code for Application Class
 * Author:     ()
 * Created:   2020-06-25
 * Copyright:  ()
 * License:
 **************************************************************/

#include "wxSmith_frameApp.h"

//(*AppHeaders
#include "wxSmith_frameMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(wxSmith_frameApp);

bool wxSmith_frameApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	wxSmith_frameFrame* Frame = new wxSmith_frameFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}

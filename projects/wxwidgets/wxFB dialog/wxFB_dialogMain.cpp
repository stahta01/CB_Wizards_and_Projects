/***************************************************************
 * Name:      wxFB_dialogMain.cpp
 * Purpose:   Code for Application Frame
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

#include "wxFB_dialogMain.h"

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__WXMAC__)
        wxbuild << _T("-Mac");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}



wxFB_dialogDialog::wxFB_dialogDialog(wxDialog *dlg)
    : GUIDialog(dlg)
{
}

wxFB_dialogDialog::~wxFB_dialogDialog()
{
}

void wxFB_dialogDialog::OnClose(wxCloseEvent &event)
{
    Destroy();
}

void wxFB_dialogDialog::OnQuit(wxCommandEvent &event)
{
    Destroy();
}

void wxFB_dialogDialog::OnAbout(wxCommandEvent &event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}

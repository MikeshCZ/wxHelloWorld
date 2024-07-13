#ifndef MAIN_HPP
#define MAIN_HPP

#include <wx/wx.h>

class MyFrame : public wxFrame {
public:
    MyFrame(const wxString& title);

private:
    void OnHello(wxCommandEvent& event);
    void OnExit(wxCommandEvent& event);
};

class MyApp : public wxApp {
public:
    virtual bool OnInit();
};

#endif // MAIN_HPP
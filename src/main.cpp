#include "main.hpp"

wxIMPLEMENT_APP(MyApp);

bool MyApp::OnInit() {
    MyFrame* frame = new MyFrame("Hello World - wxWidgets");
    frame->Show(true);
    return true;
}

MyFrame::MyFrame(const wxString& title)
    : wxFrame(NULL, wxID_ANY, title, wxDefaultPosition, wxSize(300, 200)) {
    wxPanel* panel = new wxPanel(this, wxID_ANY);

    wxBoxSizer* vbox = new wxBoxSizer(wxVERTICAL);

    wxButton* helloBtn = new wxButton(panel, wxID_ANY, "Show Hello World");
    wxButton* exitBtn = new wxButton(panel, wxID_ANY, "Exit");

    vbox->Add(helloBtn, 0, wxALL | wxCENTER, 10);
    vbox->Add(exitBtn, 0, wxALL | wxCENTER, 10);

    panel->SetSizer(vbox);

    helloBtn->Bind(wxEVT_BUTTON, &MyFrame::OnHello, this);
    exitBtn->Bind(wxEVT_BUTTON, &MyFrame::OnExit, this);
}

void MyFrame::OnHello(wxCommandEvent& event) {
    wxMessageBox("Hello World!", "Hello World!", wxOK | wxICON_NONE, this);
}

void MyFrame::OnExit(wxCommandEvent& event) {
    Close(true);
}
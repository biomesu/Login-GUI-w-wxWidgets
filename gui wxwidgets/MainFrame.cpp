#include <wx/wx.h>
#include "MainFrame.h"

enum IDs {
    BUTTON_ID = 2,
    SLIDER_ID = 3,
    TEXT_ID = 4

};


bool App::OnInit() {
    wxFrame* window = new wxFrame(NULL, wxID_ANY, "GUI Test", wxDefaultPosition, wxSize(800, 600));

    //settings
    wxButton* button = new wxButton(window, BUTTON_ID, "SIGN IN", wxPoint(325, 325), wxSize(150, 35));


    wxSlider* slider = new wxSlider(window, SLIDER_ID, 0, 0, 100, wxPoint(0, 535), wxSize(200, -1));
    slider->SetBackgroundColour(wxColour(99, 108, 163));
    slider->Update();
    slider->Refresh();

    wxTextCtrl* text = new wxTextCtrl(window,wxID_ANY, "", wxPoint(285, 250), wxSize(225, -1),wxTE_PASSWORD);
    wxTextCtrl* text2 = new wxTextCtrl(window, TEXT_ID, "", wxPoint(285, 200), wxSize(225, -1));



   

   
    wxCheckBox* checkbox = new wxCheckBox(window, wxID_ANY, "Remember me", wxPoint(285, 285));
    //wxPanel* panel = new wxPanel(window, wxID_ANY, wxPoint(0, 500), wxSize(800, 100));

    wxArrayString choices;
    choices.Add("Soundtrack 1");
    choices.Add("Soundtrack 2");
    choices.Add("Soundtrack 3");

    wxArrayString choices2;
    choices2.Add("Soundtrack 1");

    wxChoice* choice = new wxChoice(window, wxID_ANY, wxPoint(0, 0), wxSize(100, -1),choices);
    wxListBox* listbox = new wxListBox(window, wxID_ANY, wxPoint(100, 0), wxSize(200, 20), choices2);

    wxPNGHandler* handler = new wxPNGHandler;
    wxImage::AddHandler(handler);
    wxStaticBitmap* image;
    image = new wxStaticBitmap(window, wxID_ANY, wxBitmap("C:/2314983.png", wxBITMAP_TYPE_PNG), wxPoint(0, 0), wxSize(800, 600));

    wxStaticText* staticText = new wxStaticText(window, wxID_ANY, "Account Name", wxPoint(285, 183));
    staticText->SetBackgroundColour(wxColour(99, 108, 163));
    staticText->SetForegroundColour(*wxWHITE);
    staticText->Update();
    staticText->Refresh();

    wxStaticText* staticText2 = new wxStaticText(window, wxID_ANY, "Password", wxPoint(285, 233));
    staticText2->SetBackgroundColour(wxColour(99, 108, 163));
    staticText2->SetForegroundColour(*wxWHITE);
    staticText2->Update();
    staticText2->Refresh();

    wxStaticText* staticText3 = new wxStaticText(window, wxID_ANY, "Volume", wxPoint(15, 515));
    staticText3->SetBackgroundColour(wxColour(75, 82, 154));
    staticText3->SetForegroundColour(*wxWHITE);
    staticText3->Update();
    staticText3->Refresh();


    wxBoxSizer* sizer = new wxBoxSizer(wxHORIZONTAL);

   


    window->SetSizer(sizer);
    window->Show();
    return true;


}

wxIMPLEMENT_APP(App);


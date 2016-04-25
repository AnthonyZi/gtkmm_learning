#ifndef WINDOW_H
#define WINDOW_H

#include <gtkmm/box.h>
#include <gtkmm/button.h>
#include <gtkmm/window.h>
#include <string>
#include <iostream>

class Window : public Gtk::Window
{
public:
        Window();
        virtual ~Window();

protected:
        //signal handler:
        void on_button_clicked(std::string button_string);

        //child widgets:
        Gtk::Box top_box;
        Gtk::Button m_button1, m_button2;
};

#endif

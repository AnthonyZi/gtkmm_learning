#include "window.h"

Window::Window() :
        m_button1("Button 1"),
        m_button2("Button 2")
{
        //window title:
        set_title("two buttons window");

        //border width of window
        set_border_width(10);

        add(top_box);

        //signal connections:
        m_button1.signal_clicked().connect(sigc::bind<std::string>(sigc::mem_fun(*this, &Window::on_button_clicked), "button 1"));
        m_button2.signal_clicked().connect(sigc::bind<std::string>(sigc::mem_fun(*this, &Window::on_button_clicked), "button 2"));

        //put buttons intow topbox
        top_box.pack_start(m_button1);
        top_box.pack_start(m_button2);

        //make buttons visible
        m_button1.show();
        m_button2.show();

        //make box visible
        top_box.show();
}

Window::~Window()
{
}

void Window::on_button_clicked(std::string button_string)
{
        std::cout << "two_buttons_window : " << button_string << " was clicked" << std::endl;
}

#ifndef FEREASTRA_H
#define FEREASTRA_H

#include <gtkmm.h>
//#include <gtkmm/window.h>

class Fereastra : public Gtk::Window
{
    public:
        Fereastra();
        virtual ~Fereastra();

    protected:

        Gtk::Frame frame;
        //Signal handlers:
        void on_button_clicked();

        //Member widgets:
        Gtk::Button m_button;
        Gtk::Label lb_cels;
        Gtk::Label lb_fahr;
        Gtk::Box cel_hbox;

        Gtk::Box cel_hbox1;
        Gtk::Box vbox;
        Gtk::Entry en_cels;
        Gtk::Entry en_fahr;

    private:
};

#endif // FEREASTRA_H

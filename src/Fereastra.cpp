#include "Fereastra.h"
#include <iostream>


Fereastra::Fereastra() :    m_button("Convert"),
                            lb_cels("Celsius"),
                            en_cels(),
                            vbox(Gtk::ORIENTATION_VERTICAL, 2),
                            cel_hbox(Gtk::ORIENTATION_HORIZONTAL, 3),
                            cel_hbox1(Gtk::ORIENTATION_HORIZONTAL, 3),
                            lb_fahr("Fahrenheit"),
                            en_fahr()
{
    //ctor
    //Sets the border width of the window
    set_border_width(10);
    /* When the button receives the clicked signal,it will call the on_button_clicked()
    method defined below */
    m_button.signal_clicked().connect(sigc::mem_fun(*this, &Fereastra::on_button_clicked));
    //This packs the button into the window ( a container).
    add(frame);
    frame.add(vbox);
    vbox.add(cel_hbox);
    cel_hbox.add(lb_cels);
    cel_hbox.add(en_cels);
    cel_hbox.add(m_button);

    vbox.add(cel_hbox1);
    cel_hbox1.add(lb_fahr);
    cel_hbox1.add(en_fahr);



    frame.set_label("Celsius to Fahrenheit");

    //m_button.show();
    show_all_children();
}

Fereastra::~Fereastra()
{
    //dtor
}

void Fereastra::on_button_clicked()
{
    std::cout<< "Salut!"<< std::endl;
    float cels = std::stof(en_cels.get_text());
    float fahr = (cels * 9/5) + 32;
    std::cout << cels << std::endl;
    en_fahr.set_text(std::to_string(fahr));
}

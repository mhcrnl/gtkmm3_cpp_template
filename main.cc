#include "Fereastra.h"
#include <gtkmm/application.h>


const gchar *title = "Gtkmm template";
const gchar *compile ="g++ simple.cc -o simple `pkg-config gtkmm-3.0 --cflags --libs`";

int main(int argc, char *argv[])
{
    auto app = Gtk::Application::create(argc,argv,"com.gmail.mhcrnl");

    Fereastra fereastra;

    fereastra.set_default_size(400,200);
    fereastra.set_title("Gtkmm_template");

    return app->run(fereastra);
}

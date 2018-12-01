#include <gtkmm.h>

const gchar *title = "Gtkmm template";

int main(int argc, char *argv[])
{
    Glib::RefPtr<Gtk::Application> app=Gtk::Application::create(argc,argv,"com.gmail.mhcrnl");

    Gtk::Window window;

    window.set_default_size(400,200);
    window.set_title("Gtkmm_template");

    return app->run(window);
}

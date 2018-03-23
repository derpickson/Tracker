//#include <config.h>;
//#define  _(String) ((char *) g_dgettext (GETTEXT_PACKAGE, String))

public class MyApp : Gtk.Application {

    public MyApp () {
        Object (
            application_id: ("com.github.derpickson.derpickson"),
            flags: ApplicationFlags.FLAGS_NONE
        );
    }

    protected override void activate () {
        /*var button_hello = new Gtk.Button.with_label _("Click me!");
        button_hello.margin = 12;
        button_hello.clicked.connect (() => {
            button_hello.label = _("Hello World!");
            button_hello.sensitive = false;
        });
        var label = new Gtk.Label _("Hello Again World!");
        var main_window = new Gtk.ApplicationWindow (this);
        main_window.default_height = 300;
        main_window.default_width = 300;
        main_window.title = _("Hello World");
        main_window.add (button_hello);
        main_window.add (label);*/
        var grid = new Gtk.Grid ();
        //grid.orientation = Gtk.Orientation.VERTICAL;
        grid.row_spacing = 6;
        grid.column_spacing = 6;
        grid.margin = 12;
        var button = new Gtk.Button.with_label (_("Click Me!"));
        var label = new Gtk.Label (null);
        var rotate_button = new Gtk.Button.with_label (_("Rotate"));
        var rotate_label = new Gtk.Label (_("Horizontal"));
        grid.attach (button, 0, 0, 1, 1);
        grid.attach_next_to (label, button, Gtk.PositionType.RIGHT, 1, 1);
        grid.attach (rotate_button, 0, 1, 1, 1);
        grid.attach_next_to (rotate_label, rotate_button, Gtk.PositionType.RIGHT, 1, 1);
        //grid.add (button);
        //grid.add (label);
        //grid.add (new Gtk.Label (_("Label 1")));
        //grid.add (new Gtk.Label (_("Label 2")));
        var main_window = new Gtk.ApplicationWindow (this);
        main_window.default_height = 300;
        main_window.default_width = 300;
        main_window.title = (_("Derpickson"));
        main_window.add (grid);
        button.clicked.connect (() => {
            label.label = (_("Hello World! Testing length"));
            button.sensitive = false;
        });
        rotate_label.angle = 0;
        rotate_button.clicked.connect(() => {
            rotate_label.angle += 45;
            rotate_label.label = (_("Vertical"));
            rotate_button.sensitive = true;
        });
        main_window.show_all ();
    }

    public static int main (string[] args) {
        var app = new MyApp ();
        return app.run (args);
    }
}

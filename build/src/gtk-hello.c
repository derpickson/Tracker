/* gtk-hello.c generated by valac 0.36.12, the Vala compiler
 * generated from gtk-hello.vala, do not modify */

/*#include <config.h>;*/
/*#define  _(String) ((char *) g_dgettext (GETTEXT_PACKAGE, String))*/

#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>
#include <gio/gio.h>
#include <glib/gi18n-lib.h>
#include <float.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>


#define TYPE_MY_APP (my_app_get_type ())
#define MY_APP(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_MY_APP, MyApp))
#define MY_APP_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_MY_APP, MyAppClass))
#define IS_MY_APP(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_MY_APP))
#define IS_MY_APP_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_MY_APP))
#define MY_APP_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_MY_APP, MyAppClass))

typedef struct _MyApp MyApp;
typedef struct _MyAppClass MyAppClass;
typedef struct _MyAppPrivate MyAppPrivate;
typedef struct _Block1Data Block1Data;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _MyApp {
	GtkApplication parent_instance;
	MyAppPrivate * priv;
};

struct _MyAppClass {
	GtkApplicationClass parent_class;
};

struct _Block1Data {
	int _ref_count_;
	MyApp* self;
	GtkButton* button;
	GtkLabel* label;
	GtkButton* rotate_button;
	GtkLabel* rotate_label;
};


static gpointer my_app_parent_class = NULL;

GType my_app_get_type (void) G_GNUC_CONST;
enum  {
	MY_APP_0_PROPERTY
};
MyApp* my_app_new (void);
MyApp* my_app_construct (GType object_type);
static void my_app_real_activate (GApplication* base);
static Block1Data* block1_data_ref (Block1Data* _data1_);
static void block1_data_unref (void * _userdata_);
static void __lambda4_ (Block1Data* _data1_);
static void ___lambda4__gtk_button_clicked (GtkButton* _sender, gpointer self);
static void __lambda5_ (Block1Data* _data1_);
static void ___lambda5__gtk_button_clicked (GtkButton* _sender, gpointer self);
gint my_app_main (gchar** args, int args_length1);


MyApp* my_app_construct (GType object_type) {
	MyApp * self = NULL;
#line 7 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	self = (MyApp*) g_object_new (object_type, "application-id", "com.github.derpickson.derpickson", "flags", G_APPLICATION_FLAGS_NONE, NULL);
#line 6 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	return self;
#line 75 "gtk-hello.c"
}


MyApp* my_app_new (void) {
#line 6 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	return my_app_construct (TYPE_MY_APP);
#line 82 "gtk-hello.c"
}


static Block1Data* block1_data_ref (Block1Data* _data1_) {
#line 13 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	g_atomic_int_inc (&_data1_->_ref_count_);
#line 13 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	return _data1_;
#line 91 "gtk-hello.c"
}


static void block1_data_unref (void * _userdata_) {
	Block1Data* _data1_;
	_data1_ = (Block1Data*) _userdata_;
#line 13 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	if (g_atomic_int_dec_and_test (&_data1_->_ref_count_)) {
#line 100 "gtk-hello.c"
		MyApp* self;
#line 13 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
		self = _data1_->self;
#line 13 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
		_g_object_unref0 (_data1_->rotate_label);
#line 13 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
		_g_object_unref0 (_data1_->rotate_button);
#line 13 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
		_g_object_unref0 (_data1_->label);
#line 13 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
		_g_object_unref0 (_data1_->button);
#line 13 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
		_g_object_unref0 (self);
#line 13 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
		g_slice_free (Block1Data, _data1_);
#line 116 "gtk-hello.c"
	}
}


static void __lambda4_ (Block1Data* _data1_) {
	MyApp* self;
#line 49 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	self = _data1_->self;
#line 50 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	gtk_label_set_label (_data1_->label, _ ("Hello World! Testing length"));
#line 51 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	gtk_widget_set_sensitive ((GtkWidget*) _data1_->button, FALSE);
#line 129 "gtk-hello.c"
}


static void ___lambda4__gtk_button_clicked (GtkButton* _sender, gpointer self) {
#line 49 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	__lambda4_ (self);
#line 136 "gtk-hello.c"
}


static void __lambda5_ (Block1Data* _data1_) {
	MyApp* self;
	gdouble _tmp0_;
	gdouble _tmp1_;
#line 54 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	self = _data1_->self;
#line 55 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	_tmp0_ = gtk_label_get_angle (_data1_->rotate_label);
#line 55 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	_tmp1_ = _tmp0_;
#line 55 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	gtk_label_set_angle (_data1_->rotate_label, _tmp1_ + 45);
#line 56 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	gtk_label_set_label (_data1_->rotate_label, _ ("Vertical"));
#line 57 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	gtk_widget_set_sensitive ((GtkWidget*) _data1_->rotate_button, TRUE);
#line 156 "gtk-hello.c"
}


static void ___lambda5__gtk_button_clicked (GtkButton* _sender, gpointer self) {
#line 54 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	__lambda5_ (self);
#line 163 "gtk-hello.c"
}


static void my_app_real_activate (GApplication* base) {
	MyApp * self;
	Block1Data* _data1_;
	GtkGrid* grid = NULL;
	GtkGrid* _tmp0_;
	GtkButton* _tmp1_;
	GtkLabel* _tmp2_;
	GtkButton* _tmp3_;
	GtkLabel* _tmp4_;
	GtkApplicationWindow* main_window = NULL;
	GtkApplicationWindow* _tmp5_;
#line 13 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	self = (MyApp*) base;
#line 13 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	_data1_ = g_slice_new0 (Block1Data);
#line 13 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	_data1_->_ref_count_ = 1;
#line 13 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	_data1_->self = g_object_ref (self);
#line 27 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	_tmp0_ = (GtkGrid*) gtk_grid_new ();
#line 27 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	g_object_ref_sink (_tmp0_);
#line 27 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	grid = _tmp0_;
#line 29 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	gtk_grid_set_row_spacing (grid, 6);
#line 30 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	gtk_grid_set_column_spacing (grid, 6);
#line 31 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	g_object_set ((GtkWidget*) grid, "margin", 12, NULL);
#line 32 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	_tmp1_ = (GtkButton*) gtk_button_new_with_label (_ ("Click Me!"));
#line 32 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	g_object_ref_sink (_tmp1_);
#line 32 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	_data1_->button = _tmp1_;
#line 33 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	_tmp2_ = (GtkLabel*) gtk_label_new (NULL);
#line 33 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	g_object_ref_sink (_tmp2_);
#line 33 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	_data1_->label = _tmp2_;
#line 34 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	_tmp3_ = (GtkButton*) gtk_button_new_with_label (_ ("Rotate"));
#line 34 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	g_object_ref_sink (_tmp3_);
#line 34 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	_data1_->rotate_button = _tmp3_;
#line 35 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	_tmp4_ = (GtkLabel*) gtk_label_new (_ ("Horizontal"));
#line 35 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	g_object_ref_sink (_tmp4_);
#line 35 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	_data1_->rotate_label = _tmp4_;
#line 36 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	gtk_grid_attach (grid, (GtkWidget*) _data1_->button, 0, 0, 1, 1);
#line 37 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	gtk_grid_attach_next_to (grid, (GtkWidget*) _data1_->label, (GtkWidget*) _data1_->button, GTK_POS_RIGHT, 1, 1);
#line 38 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	gtk_grid_attach (grid, (GtkWidget*) _data1_->rotate_button, 0, 1, 1, 1);
#line 39 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	gtk_grid_attach_next_to (grid, (GtkWidget*) _data1_->rotate_label, (GtkWidget*) _data1_->rotate_button, GTK_POS_RIGHT, 1, 1);
#line 44 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	_tmp5_ = (GtkApplicationWindow*) gtk_application_window_new ((GtkApplication*) self);
#line 44 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	g_object_ref_sink (_tmp5_);
#line 44 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	main_window = _tmp5_;
#line 45 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	g_object_set ((GtkWindow*) main_window, "default-height", 300, NULL);
#line 46 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	g_object_set ((GtkWindow*) main_window, "default-width", 300, NULL);
#line 47 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	gtk_window_set_title ((GtkWindow*) main_window, _ ("Derpickson"));
#line 48 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	gtk_container_add ((GtkContainer*) main_window, (GtkWidget*) grid);
#line 49 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	g_signal_connect_data (_data1_->button, "clicked", (GCallback) ___lambda4__gtk_button_clicked, block1_data_ref (_data1_), (GClosureNotify) block1_data_unref, 0);
#line 53 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	gtk_label_set_angle (_data1_->rotate_label, (gdouble) 0);
#line 54 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	g_signal_connect_data (_data1_->rotate_button, "clicked", (GCallback) ___lambda5__gtk_button_clicked, block1_data_ref (_data1_), (GClosureNotify) block1_data_unref, 0);
#line 59 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	gtk_widget_show_all ((GtkWidget*) main_window);
#line 13 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	_g_object_unref0 (main_window);
#line 13 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	_g_object_unref0 (grid);
#line 13 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	block1_data_unref (_data1_);
#line 13 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	_data1_ = NULL;
#line 260 "gtk-hello.c"
}


gint my_app_main (gchar** args, int args_length1) {
	gint result = 0;
	MyApp* app = NULL;
	MyApp* _tmp0_;
	gchar** _tmp1_;
	gint _tmp1__length1;
	gint _tmp2_;
#line 63 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	_tmp0_ = my_app_new ();
#line 63 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	app = _tmp0_;
#line 64 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	_tmp1_ = args;
#line 64 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	_tmp1__length1 = args_length1;
#line 64 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	_tmp2_ = g_application_run ((GApplication*) app, _tmp1__length1, _tmp1_);
#line 64 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	result = _tmp2_;
#line 64 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	_g_object_unref0 (app);
#line 64 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	return result;
#line 287 "gtk-hello.c"
}


int main (int argc, char ** argv) {
#if !GLIB_CHECK_VERSION (2,35,0)
	g_type_init ();
#endif
#line 62 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	return my_app_main (argv, argc);
#line 297 "gtk-hello.c"
}


static void my_app_class_init (MyAppClass * klass) {
#line 4 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	my_app_parent_class = g_type_class_peek_parent (klass);
#line 4 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	((GApplicationClass *) klass)->activate = (void (*) (GApplication *)) my_app_real_activate;
#line 306 "gtk-hello.c"
}


static void my_app_instance_init (MyApp * self) {
}


GType my_app_get_type (void) {
	static volatile gsize my_app_type_id__volatile = 0;
	if (g_once_init_enter (&my_app_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (MyAppClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) my_app_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (MyApp), 0, (GInstanceInitFunc) my_app_instance_init, NULL };
		GType my_app_type_id;
		my_app_type_id = g_type_register_static (gtk_application_get_type (), "MyApp", &g_define_type_info, 0);
		g_once_init_leave (&my_app_type_id__volatile, my_app_type_id);
	}
	return my_app_type_id__volatile;
}




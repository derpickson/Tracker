/* gtk-hello.c generated by valac 0.36.12, the Vala compiler
 * generated from gtk-hello.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>
#include <gio/gio.h>
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
	GtkButton* button_hello;
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
gint my_app_main (gchar** args, int args_length1);


MyApp* my_app_construct (GType object_type) {
	MyApp * self = NULL;
#line 4 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	self = (MyApp*) g_object_new (object_type, "application-id", "com.github.derpickson.derpickson", "flags", G_APPLICATION_FLAGS_NONE, NULL);
#line 3 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	return self;
#line 65 "gtk-hello.c"
}


MyApp* my_app_new (void) {
#line 3 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	return my_app_construct (TYPE_MY_APP);
#line 72 "gtk-hello.c"
}


static Block1Data* block1_data_ref (Block1Data* _data1_) {
#line 10 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	g_atomic_int_inc (&_data1_->_ref_count_);
#line 10 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	return _data1_;
#line 81 "gtk-hello.c"
}


static void block1_data_unref (void * _userdata_) {
	Block1Data* _data1_;
	_data1_ = (Block1Data*) _userdata_;
#line 10 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	if (g_atomic_int_dec_and_test (&_data1_->_ref_count_)) {
#line 90 "gtk-hello.c"
		MyApp* self;
#line 10 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
		self = _data1_->self;
#line 10 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
		_g_object_unref0 (_data1_->button_hello);
#line 10 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
		_g_object_unref0 (self);
#line 10 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
		g_slice_free (Block1Data, _data1_);
#line 100 "gtk-hello.c"
	}
}


static void __lambda4_ (Block1Data* _data1_) {
	MyApp* self;
#line 13 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	self = _data1_->self;
#line 14 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	gtk_button_set_label (_data1_->button_hello, "Hello World!");
#line 15 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	gtk_widget_set_sensitive ((GtkWidget*) _data1_->button_hello, FALSE);
#line 113 "gtk-hello.c"
}


static void ___lambda4__gtk_button_clicked (GtkButton* _sender, gpointer self) {
#line 13 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	__lambda4_ (self);
#line 120 "gtk-hello.c"
}


static void my_app_real_activate (GApplication* base) {
	MyApp * self;
	Block1Data* _data1_;
	GtkButton* _tmp0_;
	GtkLabel* label = NULL;
	GtkLabel* _tmp1_;
	GtkApplicationWindow* main_window = NULL;
	GtkApplicationWindow* _tmp2_;
#line 10 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	self = (MyApp*) base;
#line 10 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	_data1_ = g_slice_new0 (Block1Data);
#line 10 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	_data1_->_ref_count_ = 1;
#line 10 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	_data1_->self = g_object_ref (self);
#line 11 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	_tmp0_ = (GtkButton*) gtk_button_new_with_label ("Click me!");
#line 11 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	g_object_ref_sink (_tmp0_);
#line 11 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	_data1_->button_hello = _tmp0_;
#line 12 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	g_object_set ((GtkWidget*) _data1_->button_hello, "margin", 12, NULL);
#line 13 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	g_signal_connect_data (_data1_->button_hello, "clicked", (GCallback) ___lambda4__gtk_button_clicked, block1_data_ref (_data1_), (GClosureNotify) block1_data_unref, 0);
#line 17 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	_tmp1_ = (GtkLabel*) gtk_label_new ("Hello Again World!");
#line 17 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	g_object_ref_sink (_tmp1_);
#line 17 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	label = _tmp1_;
#line 18 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	_tmp2_ = (GtkApplicationWindow*) gtk_application_window_new ((GtkApplication*) self);
#line 18 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	g_object_ref_sink (_tmp2_);
#line 18 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	main_window = _tmp2_;
#line 19 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	g_object_set ((GtkWindow*) main_window, "default-height", 300, NULL);
#line 20 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	g_object_set ((GtkWindow*) main_window, "default-width", 300, NULL);
#line 21 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	gtk_window_set_title ((GtkWindow*) main_window, "Hello World");
#line 22 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	gtk_container_add ((GtkContainer*) main_window, (GtkWidget*) _data1_->button_hello);
#line 23 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	gtk_container_add ((GtkContainer*) main_window, (GtkWidget*) label);
#line 24 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	gtk_widget_show_all ((GtkWidget*) main_window);
#line 10 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	_g_object_unref0 (main_window);
#line 10 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	_g_object_unref0 (label);
#line 10 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	block1_data_unref (_data1_);
#line 10 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	_data1_ = NULL;
#line 182 "gtk-hello.c"
}


gint my_app_main (gchar** args, int args_length1) {
	gint result = 0;
	MyApp* app = NULL;
	MyApp* _tmp0_;
	gchar** _tmp1_;
	gint _tmp1__length1;
	gint _tmp2_;
#line 28 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	_tmp0_ = my_app_new ();
#line 28 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	app = _tmp0_;
#line 29 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	_tmp1_ = args;
#line 29 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	_tmp1__length1 = args_length1;
#line 29 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	_tmp2_ = g_application_run ((GApplication*) app, _tmp1__length1, _tmp1_);
#line 29 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	result = _tmp2_;
#line 29 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	_g_object_unref0 (app);
#line 29 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	return result;
#line 209 "gtk-hello.c"
}


int main (int argc, char ** argv) {
#if !GLIB_CHECK_VERSION (2,35,0)
	g_type_init ();
#endif
#line 27 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	return my_app_main (argv, argc);
#line 219 "gtk-hello.c"
}


static void my_app_class_init (MyAppClass * klass) {
#line 1 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	my_app_parent_class = g_type_class_peek_parent (klass);
#line 1 "/home/nick/Projects/derpickson/src/gtk-hello.vala"
	((GApplicationClass *) klass)->activate = (void (*) (GApplication *)) my_app_real_activate;
#line 228 "gtk-hello.c"
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




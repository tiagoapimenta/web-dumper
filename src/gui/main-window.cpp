#include "main-window.h"

#include <gtk/gtk.h>

MainWindow::MainWindow(Application *app)
{
	GtkWidget *window, *button;

	window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	gtk_window_set_title(GTK_WINDOW(window), "Sample");
	gtk_window_set_default_size(GTK_WINDOW(window), 200, 60);

	button = gtk_button_new_with_label("Exit");
	g_signal_connect(G_OBJECT(button), "clicked", G_CALLBACK(gtk_main_quit), NULL);

	gtk_container_add(GTK_CONTAINER(window), button);

	gtk_widget_show_all(window);
}

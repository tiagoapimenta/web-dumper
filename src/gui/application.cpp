#include "application.h"

#include <gtk/gtk.h>

Application::Application(int argc, char *argv[])
{
	gtk_init(&argc, &argv);
}


int Application::mainLoop()
{
	gtk_main();
	return 0;
}

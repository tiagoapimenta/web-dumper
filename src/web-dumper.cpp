#include "application.h"
#include "main-window.h"

int main(int argc, char *argv[])
{
	int exit_code = 0;

	Application *app = new Application(argc, argv);

	MainWindow *window = new MainWindow(app);

	exit_code = app->mainLoop();

	delete window;
	delete app;

	return exit_code;
}

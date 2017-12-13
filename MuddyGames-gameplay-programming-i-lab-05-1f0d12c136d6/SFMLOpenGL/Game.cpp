#include <Game.h>

Game::Game() : window(VideoMode(800, 600), "OpenGL")
{
}

Game::~Game() {}

void Game::run()
{

	initialize();

	Event event;

	while (isRunning) {
		cout << "Game run" << endl;

		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
			{
				isRunning = false;
			}
		}
		update();
		draw();
	}

}

void Game::initialize()
{
	isRunning = true; 
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
	glMatrixMode(GL_PROJECTION); glLoadIdentity(); 
	gluPerspective(45.0, window.getSize().x / window.getSize().y, 1.0, 500.0); 
	glMatrixMode(GL_MODELVIEW);
}

void Game::update()
{
	cout << "Game update" << endl;
}

void Game::draw()
{
	cout << "Game draw" << endl;
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); 

	glBegin(GL_POINTS);
	{
		glVertex3f(-1.0f, 1.5f, -5.0f);
		glVertex3f(-1.5f, 2.0f, -5.0f);
		glVertex3f(-2.0f, 1.5f, -5.0f);
	}
	glBegin(GL_TRIANGLES);
	{
		glVertex3f(0.0f, 0.2f, -5.0f);
		glVertex3f(-0.2f, -0.2f, -5.0f);
		glVertex3f(0.2f, -0.2f, -5.0f);
	}
	glEnd();
	window.display(); 
}

void Game::unload()
{
	cout << "Cleaning up" << endl;
}


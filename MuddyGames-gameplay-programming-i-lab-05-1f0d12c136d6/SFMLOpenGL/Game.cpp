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
			if (event.type == sf::Event::TextEntered)
			{
				if (event.text.unicode == 113)
				{
					drawPoint();
				}
				if (event.text.unicode == 119)
				{
					drawLine();
				}
				if (event.text.unicode == 101)
				{
					drawLineStrip();
				}
				if (event.text.unicode == 114)
				{
					drawLineLoop();
				}
				if (event.text.unicode == 116)
				{
					drawTriangle();
				}
				if (event.text.unicode == 121)
				{
					drawTriangleStrip();
				}
				if (event.text.unicode == 117)
				{
					drawTriangleFan();
				}
				if (event.text.unicode == 105)
				{
					drawQuads();
				}
				if (event.text.unicode == 111)
				{
					drawQuadStrip();
				}
				if (event.text.unicode == 112)
				{
					drawPoly();
				}
			}
		}
		update();
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
void Game::unload()
{
	cout << "Cleaning up" << endl;
}

void Game::drawPoint()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glBegin(GL_POINTS);
	{
		glVertex3f(-1.0f, 1.5f, -5.0f);
		glVertex3f(-1.5f, 2.0f, -5.0f);
		glVertex3f(-2.0f, 1.5f, -5.0f);
	}
	glEnd();
	window.display();
}

void Game::drawLine()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glBegin(GL_LINES);
	{
		glVertex3f(-1.0f, 1.5f, -5.0f);
		glVertex3f(-1.5f, 2.0f, -5.0f);
		glVertex3f(-2.0f, 1.5f, -5.0f);
	}
	glEnd();
	window.display();
}

void Game::drawLineStrip()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glBegin(GL_LINE_STRIP);
	{
		glVertex3f(-1.0f, 1.5f, -5.0f);
		glVertex3f(-1.5f, 2.0f, -5.0f);
		glVertex3f(-2.0f, 1.5f, -5.0f);
	}
	glEnd();
	window.display();
}

void Game::drawLineLoop()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glBegin(GL_LINE_LOOP);
	{
		glVertex3f(-1.0f, 1.5f, -5.0f);
		glVertex3f(-1.5f, 2.0f, -5.0f);
		glVertex3f(-2.0f, 1.5f, -5.0f);
	}
	glEnd();
	window.display();
}

void Game::drawTriangle()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glBegin(GL_TRIANGLES);
	{
		glVertex3f(0.0f, 0.2f, -5.0f);
		glVertex3f(-0.2f, -0.2f, -5.0f);
		glVertex3f(0.2f, -0.2f, -5.0f);
	}
	glEnd();
	window.display();
}

void Game::drawTriangleStrip()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glBegin(GL_TRIANGLE_STRIP);
	{
		glVertex3f(0.0f, 0.2f, -5.0f);
		glVertex3f(-0.2f, -0.2f, -5.0f);
		glVertex3f(0.2f, -0.2f, -5.0f);
	}
	glEnd();
	window.display();
}

void Game::drawTriangleFan()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glBegin(GL_TRIANGLE_FAN);
	{
		glVertex3f(0.0f, 0.2f, -5.0f);
		glVertex3f(-0.2f, -0.2f, -5.0f);
		glVertex3f(0.2f, -0.2f, -5.0f);
	}
	glEnd();
	window.display();
}

void Game::drawQuads()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glBegin(GL_QUADS);
	{
		glVertex3f(0.0f, 0.2f, -5.0f);
		glVertex3f(-0.2f, -0.2f, -5.0f);
		glVertex3f(0.2f, -0.2f, -5.0f);
	}
	glEnd();
	window.display();
}

void Game::drawQuadStrip()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glBegin(GL_QUAD_STRIP);
	{
		glVertex3f(0.0f, 0.2f, -5.0f);
		glVertex3f(-0.2f, -0.2f, -5.0f);
		glVertex3f(0.2f, -0.2f, -5.0f);
	}
	glEnd();
	window.display();
}

void Game::drawPoly()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glBegin(GL_POLYGON);
	{
		glVertex3f(0.0f, 0.2f, -5.0f);
		glVertex3f(-0.2f, -0.2f, -5.0f);
		glVertex3f(0.2f, -0.2f, -5.0f);
	}
	glEnd();
	window.display();
}

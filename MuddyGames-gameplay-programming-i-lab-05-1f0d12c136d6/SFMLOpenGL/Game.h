#include <iostream>
#include <SFML/Window.hpp>
#include <SFML/OpenGL.hpp>
#include <gl/GL.h> 
#include <gl/GLU.h> 
using namespace std;
using namespace sf;

class Game
{
public:
	Game();
	~Game();
	void run();
private:
	Window window;
	bool isRunning = false;
	void initialize();
	void update();
	void drawPoint();
	void drawLine();
	void drawLineStrip();
	void drawLineLoop();
	void drawTriangle();
	void drawTriangleStrip();
	void drawTriangleFan();
	void drawQuads();
	void drawQuadStrip();
	void drawPoly();
	void unload();

	// // Uncomment for Part 2
	// // ********************
	// const int primatives;

	//GLuint index;
	//Clock clock;
	//Time elapsed;

	//float rotationAngle = 0.0f;
	// // ********************
};
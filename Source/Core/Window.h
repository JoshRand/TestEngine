#pragma once
struct GLFWwindow;
class Window {
private:
	const char* title_  = "Test Window";
public:
	int width = 640;
	int height = 480;

	GLFWwindow* window;

	void Initialize();

	void Update();
	
	void Exit();


};
#pragma once
#include "Input.h"
struct GLFWwindow;
#define MAX_KEYS 1024
class Window {
private:
	struct Input;
	const char* title_  = "Test Window";
public:
	bool m_Keys[MAX_KEYS];
	int width = 640;
	int height = 480;

	GLFWwindow* window;

	void Initialize();

	void Update();
	
	void Exit();


};
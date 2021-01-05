#include "Window.h"
#include "GL/glew.h"
#include "GLFW/glfw3.h"
#include <iostream>

static void GlfwWindowCallback(int errorCode, const char* desc)
{
	std::cout << " Error code: " << errorCode << " description: " << desc << std::endl;
}
void Window::Initialize()
{
	glfwSetErrorCallback(GlfwWindowCallback);
	glfwInit();
	window = glfwCreateWindow(width, height, title_, NULL, NULL);
	glfwMakeContextCurrent(window);
	glfwSwapInterval(1);
	
}

void Window::Update()
{
	glfwSwapBuffers(window);
	glfwPollEvents();
}

void Window::Exit()
{
	glfwWindowShouldClose(window);
	glfwDestroyWindow(window);
}
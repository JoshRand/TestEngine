#pragma once
#include "Input.h"
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <iostream>
#include "Window.h"
Window window;
void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods);

void Input::Init(GLFWwindow* wind)
{
	window = wind;
	glfwSetKeyCallback(window, key_callback);
}

void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods)
{
	//Window* win = (Window*)glfwGetWindowUserPointer(window);
	//action != GLFW_PRESS
	
	if (action == GLFW_PRESS)
		std::cout << "Key pressed: " << key<< "" << std::endl;
}
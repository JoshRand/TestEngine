#pragma once
#include "Input.h"
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <iostream>
#include "Window.h"
Window window;

void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods);
void mouse_pos_callback(GLFWwindow* window, double xpos, double ypos);
void mouse_button_callback(GLFWwindow* window, int button, int action, int mods);

void Input::Init(GLFWwindow* wind)
{
	window = wind;
	glfwSetKeyCallback(window, key_callback);
	glfwSetCursorPosCallback(window, mouse_pos_callback);
	glfwSetMouseButtonCallback(window, mouse_button_callback);
}

void mouse_button_callback(GLFWwindow* window, int button, int action, int mods) 
{
	std::cout << "Mouse click button: " << button << std::endl;
}

void mouse_pos_callback(GLFWwindow* window, double xpos, double ypos)
{
	std::cout << "Mouse pos: X= " << xpos << " Y= " << ypos << std::endl;
}

void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods)
{
	//Window* win = (Window*)glfwGetWindowUserPointer(window);
	//action != GLFW_PRESS
	
	if (action == GLFW_PRESS)
		std::cout << "Key pressed: " << key<< "" << std::endl;
}
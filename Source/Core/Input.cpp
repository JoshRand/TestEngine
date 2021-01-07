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
void joy_stick_callback(int jid, int event);

void Input::Init(GLFWwindow* wind)
{
	window = wind;
	glfwSetKeyCallback(window, key_callback);
	glfwSetCursorPosCallback(window, mouse_pos_callback);
	glfwSetMouseButtonCallback(window, mouse_button_callback);
	glfwSetJoystickCallback(joy_stick_callback);
	//if (glfwJoystickPresent(GLFW_JOYSTICK_1))
	
}

const float& Input::GetJoyAxes()
{
	axes = glfwGetJoystickAxes(GLFW_JOYSTICK_1, &count);
	return *axes;
}

void joy_stick_callback(int jid, int event)
{
	if (event == GLFW_CONNECTED)
	{
		std::cout << " Controller connected " << event << std::endl;
		const char* name = glfwGetJoystickName(GLFW_JOYSTICK_1);
		std::cout << name << std::endl;
	}
	else if (event == GLFW_DISCONNECTED)
	{
		// The joystick was disconnected
		std::cout << " Controller disconnected " << event << std::endl;
	}
	
	
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
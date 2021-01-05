#pragma once



class Input {
	friend struct GLFWwindow;
	GLFWwindow* window;
	
public:
	void Init(GLFWwindow*);
	
};
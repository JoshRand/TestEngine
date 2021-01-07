#pragma once



class Input {
	friend struct GLFWwindow;
	GLFWwindow* window;
	int count;
	const float* axes;
public:
	void Init(GLFWwindow*);
	const float& GetJoyAxes();
};
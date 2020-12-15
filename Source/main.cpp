// TestEngine.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Core/Core.h"
int main()
{
    core.Initialize();
    while (1)
    {
        core.Update();
    }
}

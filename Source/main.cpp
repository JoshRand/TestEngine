// TestEngine.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Core/Core.h"
#include "Core/Object.h"
int main()
{
    core.Initialize();

    //Object my_object = new Object();
    while (1)
    {
        core.Update();
    }
}

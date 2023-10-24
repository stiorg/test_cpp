#include <iostream>
#include "Mod1Module.h"
#include "../system/ISystem.h"
#include "ModuleManager.h"

Mod1Module::Mod1Module()
{
}

void Mod1Module::tick()
{
    std::cout << "mod1 tick" << std::endl;
    g_system->modman->test();
}

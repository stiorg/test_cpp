#include <iostream>
#include "Mod2Module.h"
#include "../system/ISystem.h"
#include "ModuleManager.h"
#include "Mod1Module.h"

Mod2Module::Mod2Module()
{
	
}

void Mod2Module::tick()
{
	std::cout << "mod2 tick" << std::endl;
	g_system->modman->getMod1()->test();
}

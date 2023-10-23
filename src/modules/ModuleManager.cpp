#include <iostream>
#include "ModuleManager.h"
#include "Mod1Module.h"
#include "Mod2Module.h"

ModuleManager::ModuleManager()
{

}

void ModuleManager::initialize()
{
	modules.push_back(std::make_shared<Mod1Module>());
	modules.push_back(std::make_shared<Mod2Module>());
	modules.push_back(std::make_shared<Mod1Module>());
	modules.push_back(std::make_shared<Mod2Module>());
}

void ModuleManager::connect()
{
	
}

void ModuleManager::tick()
{
    std::cout << "- tick -" << std::endl;
	for (auto it = modules.begin() ; it != modules.end(); ++it)
    {
        (*it)->tick();
    }
}

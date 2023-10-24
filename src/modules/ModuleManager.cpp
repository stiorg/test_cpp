#include <iostream>
#include "ModuleManager.h"
#include "Mod1Module.h"
#include "Mod2Module.h"

ModuleManager::ModuleManager()
{

}

void ModuleManager::initialize()
{
	pMod1 = new Mod1Module();
	pMod2 = new Mod2Module();
	modules.push_back(std::make_shared<Mod1Module>(*pMod1));
	modules.push_back(std::make_shared<Mod2Module>(*pMod2));
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

void ModuleManager::test()
{
	std::cout << "msg from modulemanager" << std::endl;
}

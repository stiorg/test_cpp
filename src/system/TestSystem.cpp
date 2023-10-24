#include <iostream>

#include "TestSystem.h"
#include "../modules/ModuleManager.h"

TestSystem::TestSystem()
{
    modman = new ModuleManager();
    std::cout << "System initialized" << std::endl;
}

void TestSystem::initialize()
{
    modman->initialize();
}

void TestSystem::tick()
{
    modman->tick();
}
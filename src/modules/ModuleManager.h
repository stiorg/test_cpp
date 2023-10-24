#pragma once

#include<list>
#include<memory>
#include "Module.h"

class Mod1Module;
class Mod2Module;

class ModuleManager
{
    public:
    ModuleManager();
    void initialize();
	void connect();
    void tick();
    void test();

    private:
    std::list<std::shared_ptr<Module>> modules;
	Mod1Module* pMod1;
    Mod2Module* pMod2;
};
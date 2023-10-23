#pragma once

#include<list>
#include<memory>
#include "Module.h"
#include "Mod2Module.h"

class ModuleManager
{
    public:
    ModuleManager();
    void initialize();
	void connect();
    void tick();
	
    private:
    std::list<std::shared_ptr<Module>> modules;
};
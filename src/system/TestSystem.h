#pragma once

#include "ISystem.h"
#include "../modules/ModuleManager.h"

class TestSystem : public ISystem
{
    public:
    TestSystem();
    void initialize();
    void tick();
    private:
};
#pragma once

class ISystem;
class ModuleManager;

extern ISystem* g_system;

class ISystem
{
    public:
    ModuleManager* modman = nullptr;
    virtual void initialize() = 0;
    virtual void tick() = 0;
};
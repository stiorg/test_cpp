#include <thread>
#include <iostream>

#include "system/TestSystem.h"

class ISystem;

ISystem* g_system = nullptr;


int main()
{
    g_system = new TestSystem();
    g_system->initialize();

    std::thread([&]
    {
        while(true)
        {
            std::this_thread::sleep_for(std::chrono::seconds(10));
            g_system->tick();
        }
    }).detach();

    std::cin.get();
}
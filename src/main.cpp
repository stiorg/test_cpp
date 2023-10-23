#include <thread>
#include <iostream>
#include "modules/ModuleManager.h"


int main()
{
    ModuleManager mm = ModuleManager();
    mm.initialize();
    std::thread([&]
    {
        while(true)
        {
            std::this_thread::sleep_for(std::chrono::seconds(10));
            mm.tick();
        }
    }).detach();

    std::cin.get();
}
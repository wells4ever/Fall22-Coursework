#include "Engine.h"
#include <iostream>


void Engine::startEngine()
{
	std::cout << "Starting engine..." << std::endl;
}

void Engine::accelerate()
{
	std::cout << "Accelerating..." << std::endl;
}

void Engine::setEngineVolume(double vol)
{
	engineVolume = vol;
}

Engine::Engine()
{
	engineVolume = 0;
}

Engine::Engine(double vol)
{
	engineVolume = vol;
}

void Engine::printEngineInfo()
{
	std::cout << "Engine Volume is: " << engineVolume << " liters" << std::endl;
}

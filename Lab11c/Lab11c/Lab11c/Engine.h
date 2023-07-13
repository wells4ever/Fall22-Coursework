#pragma once


class Engine
{
private:
	double engineVolume;

public:

	void startEngine();

	void accelerate();

	void setEngineVolume(double);

	Engine();
	Engine(double);

	void printEngineInfo();
};


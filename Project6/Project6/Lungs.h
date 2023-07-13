#pragma once

class Lungs
{
private:
	bool hasLungs;

public:
	void setHasLungs(bool);

	bool getHasLungs();

	void printLungInfo();

	Lungs();
	Lungs(bool);
};


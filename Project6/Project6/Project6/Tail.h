#pragma once
class Tail
{
private:
	bool hasTail;
	bool hasTailFur;

public:
	void setHasTail(bool);
	void setHasTailFur(bool);

	bool getHasTail();
	bool getHasTailFur();

	void printTailInfo();

	Tail();
	Tail(bool, bool);
};


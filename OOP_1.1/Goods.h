//////////////////////////////  Goods.h  //////////////////////////////
#pragma once
using namespace std;

class Goods
{
private:
	double first;
	int second;
public:
	int GetSecond() const { return second; }
	double GetFirst() const { return first; }

	bool SetFirst(double value);
	bool SetSecond(int value);

	void Init(int second, double first);


	double Cost() const { return (first * second); }
};


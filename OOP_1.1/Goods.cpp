////////////////////////////// Goods.cpp ///////////////////////////
#include "Goods.h"
#include <iostream>

bool Goods::SetSecond(int value)
{
	if (value > 0)
	{
		second = value;
		return true;
	}
	else
	{
		second = 0;
		return false;
	}
}
bool Goods::SetFirst(double value)
{
	if (value > 0)
	{
		first = value;
		return true;
	}
	else
	{
		first = -value;
		return false;
	}
}
void Goods::Init(int second, double first)
{
	SetFirst(first);
	SetSecond(second);
}
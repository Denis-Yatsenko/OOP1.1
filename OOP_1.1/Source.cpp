//////////////////////////////  Source.cpp  //////////////////////////////
#include <iostream>
#include "Goods.h"
using namespace std;
int main()
{
	Goods g;
	g.Init(6, 7.5);
	cout <<" Vartist tovaru: "<< g.Cost() << endl;
	return 0;
}
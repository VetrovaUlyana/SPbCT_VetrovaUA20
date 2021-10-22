#include <iostream>
#include"MathFuncsDll.h"
using namespace std;
int main()
{
	double r;
	cout << "r=";
	cin >> r;
	cout << "P=" <<
		MathFuncs::MyMathFuncs::Perimetr(r) << endl;
	cout <<"S="<<
		MathFuncs::MyMathFuncs::Subtract(r) << endl;
	return 0;
}
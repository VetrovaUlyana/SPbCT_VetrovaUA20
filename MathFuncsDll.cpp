#include"MathFuncsDll.h"
#include <stdexcept>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
namespace MathFuncs
{
	double MyMathFuncs::Perimetr(double r)
	{
		return r * 2 * M_PI;
	}
	double MyMathFuncs::Subtract(double r)
	{
		return r * r * M_PI;
	}
}
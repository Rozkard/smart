#define _USE_MATH_DEFINES
#include "math.h"
#include "Header.h"

double Rez(double x,double y, double z)
{
	double rez = 0;
	//if ((y >= 0) && (y - x != 0) && (fabs((y - x) != 1)))
	{
		rez = (pow(sqrt(y), 5) - x) * (fabs(y - z) / (y - x)) / (1 + pow(y - x, 2));
		return rez;
	}
}
double RezB(double x, double y, double z , double Frez)
{
	double rezB = 0;
	//if ((y >= 0) && (y - x != 0) && (fabs((y - x) != 1)))
	{
		rezB = Frez * pow(M_E, -sqrt(z)) *cos(y*x / Frez) ;
		return rezB;
	}
}
int c(int Frez, double FrezB)
{
	int rezC = Frez * FrezB;
	return rezC;
}
int Check(double x, double y, double z, double Frez) {
	if (y < 0)
	{
		int check = 1;
		return check;
	}
	else if (y - x == 0)
	{
		int check = 2;
		return check;
	}
	else if (fabs((y - x) == 1))
	{
		int check = 3;
		return check;
	}
// ((y >= 0) && (y - x != 0) && (fabs((y - x) != 1)))

	else if (z < 0)
	{
		int check = 4;
		return check;
	}
	else if (Frez == 0)
	{
		int check = 5;
		return check;
	}
	else 
	{
		int check = 6;
		return check;
	}
}
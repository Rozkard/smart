#include <iostream> 
#include <iomanip> 
#include "windows.h"
#include "Header.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double x, y, z , Frez, FrezB;
	int check , C;
	check = -1;
	cout << "enter x:";
	cin >> x;
	cout << "enter y:";
	cin >> y;
	cout << "enter z:";
	cin >> z;
	Frez = Rez(x, y, z);
	FrezB = RezB(x, y, z ,Frez);
	C = c(Frez , FrezB);
	check = Check(x, y, z, Frez);
	 if (check == 1) {
		cout << "�� ���� y>=0" << endl;
	}
	else if (check == 2) {
		cout << "y i � ����� ���������� " << endl;
	}
	else if (check == 3) {
		cout << " |y-�| �� �� ���������� 1  " << endl;
	}

	else if (check == 4) {
		cout << "a = " << Frez << endl;
		cout << "�� ���� z>=0" << endl;
	}
	else if (check == 5) {
		cout << "a = " << Frez << endl;
		cout << " a �� �� ���������� 0  " << endl;
	}
	else if (check == 6) 
	{
		cout << "a = " << Frez << endl;
		cout << "b = " << FrezB << endl; 
		cout << "c = " << C << endl;
	 }
}
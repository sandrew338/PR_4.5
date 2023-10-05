// Lab_04_5.cpp
// < Назаркевич, Андрій>
// Лабораторна робота № 4.5
// Розгалуження, задане графіком функції.
// Варіант 17

#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
int main()
{
	double x, y, R, A, B;
	srand((unsigned) time(NULL));
	
	cout << "A = "; cin >> A;
	cout << "B = "; cin >> B;
	do
	{
		cout << "R = ";
		cin >> R;
	} while (R <= 0);
	for (int i = 0; i < 10; i++)
	{
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;
		if ((y <= pow(R * R - pow(x + R, 2), 2) && y >= 0 && y <= R && x >= -R && x <= 0) || (y <= pow(R * R - pow(x - R, 2), 2) && y >= -R && y <= 0 && x >= 0 && x <= R))
			cout << "yes" << endl;
		else
			cout << "no" << endl;
		cin.get();
	}
	cout << endl << fixed;

		for (int i = 0; i < 10; i++)
		{
			x = B * rand() / RAND_MAX - A ;
			y = B * rand() / RAND_MAX - A;
			if ((y <= pow(R * R - pow(x + R, 2), 2) && y >= 0 && y <= R && x >= -R && x <= 0) || (y <= pow(R * R - pow(x - R, 2), 2) && y >= -R && y <= 0 && x >= 0 && x <= R))
				cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "yes" << endl;
			else
				cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "no" << endl;
		}
	return 0;
}

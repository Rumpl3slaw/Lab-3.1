

#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	double x;
	double y;
	double A;
	double B;

	cout << "x=";cin >> x;

	A = 1. / (abs(x + 2) + 1);
	//Розгалуження в скороченій формі
	if (x < 1)
		B = 7 * (x * x) + x - 8;
	if (1 <= x && x <= 4)
		B = tan(x + 4 / sqrt(11)) + 3;
	if (x > 4)
		B = sqrt(1 + abs(pow(cos(x), 3)));

	y = A - B;
	cout << endl;
	cout << "1)y=" << y << endl;
	//Розгалуження в повній формі
	if (x < 1)
		B = 7 * (x * x) + x - 8;
	else
		if (1 <= x && x <= 4)
			B = tan(x + 4 / sqrt(11)) + 3;
		else
			B = sqrt(1 + abs(pow(cos(x), 3)));

	y = A - B;
	cout << "2)y=" << y << endl;


}








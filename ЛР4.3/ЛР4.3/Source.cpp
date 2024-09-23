
#include <iostream> 
#include <iomanip> 
#include <cmath> 
using namespace std;
int main()
{
	double x, xp, xk, dx, F, a, b, c;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << fixed;
	cout << "----------------------" << endl;
	cout << "|" << setw(5) << "x" << "   |"
		<< setw(7) << "F" << "    |" << endl;
	cout << "----------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		if (c < 0 && b != 0)
			F = (-a * x - c);
		else
			if (c > 0 && x == 0)
				F = (x - a) / (-c);
			else
				if (!(c < 0 && b != 0) && !(c > 0 && x == 0))
					F = (b * x) / (c - a);
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << F
			<< " |" << endl;
		x += dx;
	}
	cout << "----------------------" << endl;
	return 0;
}
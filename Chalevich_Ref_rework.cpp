#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");

	int n;

	cout << "Enter n: ";
	cin >> n;

	double x = 1;
	double y1 = 10;

	int k = 1;
	int iter_of_sum1 = 0;
	int iter_of_multiplication1 = 0;
	int iter_of_sum2 = 0;
	int iter_of_multiplication2 = 0;

	double arg = 1;
	double slag = 0;
	int Arg = 0;
	double Slag = 0;

	for (x; x <= 2; x += 0.25)
	{
		cout << "\nx: " << x;
		y1 = 10;
		arg = 1;

		double x_21 = pow(x,2);

		iter_of_sum1 = 0;
		iter_of_multiplication1 = 0;

		for (int i = 1; i <= n; i++)
		{
			k = 2 * i;
			arg *= x_21;

			slag = k * arg;
			y1 += slag;

			iter_of_sum1++;
			iter_of_multiplication1 += 3;
		}

		cout << "\ny1 = " << y1 << endl;
		cout << "sum: " << iter_of_sum1 << endl;
		cout << "multiplication: " << iter_of_multiplication1 << endl;
	}

	cout << "\nПо схеме Горнера:\n " << endl;
	
	x = 1;

	for (x; x <= 2; x += 0.25)
	{
		cout << "x: " << x << endl;

		double x_2 = pow(x,2);
		int j = n;
		Arg = 0;
		Slag = 0;

		iter_of_sum2 = 0;
		iter_of_multiplication2 = 0;

		for (j; j > 0; j--)
		{
			Arg = 2 * j;
			Slag += Arg;
			Slag *= x_2;

			iter_of_sum2++;
			iter_of_multiplication2 += 2;
		}

		cout << "y2 = " << Slag + 10 << endl;
		cout << "sum: " << iter_of_sum2 << endl;
		cout << "multiplication: " << iter_of_multiplication2 << endl << endl;
	}
}

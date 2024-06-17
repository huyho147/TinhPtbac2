#include <iostream>;
using namespace std;
double delta(double a, double b, double c )
{
	return b * b - 4 * a * c;
}

double nghiemkep(double a, double b)
{
	return -b / 2 * a;
}

double nghiempb(double a, double b, double c, double delta)
{
	double x1, x2;
	x1 = (-b + delta) / 2 * a;
	x2 = (-b - delta) / 2 * a;
	return x1, x2;
}

int main()
{
	double a, b, c;
	cout << "Viet phuong trinh bac 2 dang Ax2 + Bx +C= 0";
	cout << "\nNhap a = ";
	cin >> a;
	cout << "\nNhap b = ";
	cin >> b;
	cout << "\nNhap c = ";
	cin >> c;
	delta(a, b, c);
	if (delta < 0)
		cout << "Phuong trinh vo nghiem";
	else if (delta == 0)
	{
		cout << "Phuong trinh co nghiem kep: " << nghiemkep(a, b);
	}
	else
	{
		cout << "Phuong trinh co 2 nghiem phan biet";
		cout << "\nNghiem : " << nghiempb(a, b, c, delta(a, b, c));
	}
	return 0;
}
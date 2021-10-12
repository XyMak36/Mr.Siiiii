#include <iostream>
#include <math.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "RUS");
	double a, x, z, n, m, y, f;
	cout << "a," << "z=";
	cin >> a >> z;
	if (z < 1) {
		x = pow(z, 2);
		cout << "z < 1,x = z^2";
	}
	else {
		x = z + 1;
		cout << "z>=1, x=z=1";
	}
	if (cin.good()) {
		cout << "ВВедите значение f(x):";
		cout << "f(x) = 2x - нажмите 1, f(x)= x^2 - нажмите 2 , f(x)=x/3 -нажмите 3 ";
		int(k);
		cin >> k;
		switch (k) {
		case 1:
			cout << "f(x)=2x";
			f = 2 * x;
			n = log(1 + pow(x, 1 / 5));
			m = pow(cos(f + 1), 2);
			y = n + m;
			cout << "y=" << y << endl;
			break;
		case 2:
			cout << "f(x)=x^2";
			f = pow(x, 2);
			n = log(1 + pow(x, 1 / 5));
			m = pow(cos(f + 1), 2);
			y = n + m;
			cout << "y=" << y << endl;
			break;
		case 3:
			cout << "f(x)=x/3";
			f = x / 3;
			n = log(1 + pow(x, 1 / 5));
			m = pow(cos(f + 1), 2);
			y = n + m;
			cout << "y=" << y << endl;
			break;
		default: cout << "Не выбранна функция ";
		}
	}
	else {
		cout << "Ошибка ввода (введите числа)";

	}
}

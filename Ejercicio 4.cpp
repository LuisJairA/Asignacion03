#include<iostream>
using namespace std;
int main() {
	int x, c50, c30, c9;

	cout << "ingrese numero: ";
	cin >> x;

	c50 = x / 50;
	c30 = (x % 50) / 30;
	c9 = ((x % 50) % 30) / 9;

	cout << "Cantidad 50: " << c50 << endl;
	cout << "Cantidad 30: " << c30 << endl;
	cout << "Cantidad 9: " << c9 << endl;

	system("pause");
	return 0;
}

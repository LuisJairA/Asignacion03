#include <iostream>
using namespace std;
int main() {

	int x, c100, c50, c10, lsb;

	cout << "Ingrese la cantidad de lapices:";
	cin >> x;

	c100 = x / 100;
	c50 = (x % 100) / 50;
	c10 = ((x % 100) % 50) / 10;
	lsb = ((x % 100) % 50) % 10;

	cout << "Cajas de un ciento: " << c100 << endl;
	cout << "Cajas de medio ciento: " << c50 << endl;
	cout << "Cajas de una decena: " << c10 << endl;
	cout << "LApiz sin embolsar: " << lsb << endl;

	system("pause");
	return 0;
}

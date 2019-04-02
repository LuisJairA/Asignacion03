#include <iostream>
using namespace std;
int main() {
	int x, y;

	cout << "eje x: ";
	cin >> x;
	cout << "eje y: ";
	cin >> y;

	if (-5 <=x&& x <= 5 && -5 <=y&& y <= 5) {
		cout << "El punto esta en el circulo" << endl;
	}
	else {
		cout << "El punto no esta en el circulo" << endl;
	}

	system("pause");
	return 0;
}
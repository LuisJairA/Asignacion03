#include <iostream>
using namespace std;
int main() {
	int x;

	cout << "ingresar numero: ";
	cin >> x;

	if (10 <= x) {
		cout << "El triple: " << x * 3 << endl;
	}
	else {
		cout << "La cuarta parte: " << x / 4 << endl;
	}

	system("pause");
	return 0;
}

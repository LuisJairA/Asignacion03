#include <iostream>
using namespace std; 
int main() {
	int a, b,c;

	cout << "Introducir los numeros: ";
	cin >> a >> b;

	if (a > b || b > a) {
		c = (a > b)*a + (b > a)*b;
		cout <<c<< "  es mas grande" << endl;
	}
	else if (a == b) {
		cout << "estos numeros son iguales" << endl;
	}

	system("pause");
	return 0;
}
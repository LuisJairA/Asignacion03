#include <iostream>
using namespace std;
int main() {
	int x,s1,s2,s5;

	cout << "Soles: ";
	cin >> x;

	s5 = x / 5;
	s2 = (x%5)/2;
	s1 = ((x%5)%2)/1;

	cout << "Monedas de 5: " << s5 << endl;
	cout << "Monedas de 2: " << s2 << endl;
	cout << "Monedas de 1: " << s1 << endl;

	system("pause");
	return 0;
}
#include <iostream>
using namespace std;
int main() {
	int r,gra,m,s,re1,re2,x;
	int pi = 3.14;

	cout << "numeros en radian: ";
	cin >> r;

	x = 180 * r;

	gra = x / pi;
	re1 = (x%pi) * 60;
	m = re1 / pi;
	re2 = (re1%pi) * 60;
	s = re2 / pi;

	cout << "El radian: " << gra << "°" << m << "'" << s << "''" << endl;

	system("pause");
	return 0;

}
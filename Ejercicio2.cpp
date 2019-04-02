#include <iostream>
using namespace std;
int main() {
	int t, h, m, s;

	cout << "Tiempo: ";
	cin >> t;

	h = t / (60 * 60);
	m = (t%3600)/60;
	s = t%60;

	cout << h << "h:" << m << "m:" << s << "s"<<endl;

	system("pause");
	return 0;
}
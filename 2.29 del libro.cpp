#include <iostream>
using namespace std;
int main() {
	int i = 0;
	int cuadrado,cubo;
	cout << "entero "<<" cuadrado "<<" cubo"<<endl;
	for (i; i < 11; i++) {
		cuadrado = pow(i, 2);
		cubo = pow(i, 3);
		cout << i << "       "<<cuadrado<<"         "<<cubo<< endl;
	}

	system("pause");
	return 0;
}
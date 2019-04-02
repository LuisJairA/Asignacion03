#include <iostream>
using namespace std;
int main() {
	int costo, compra, pago, descuento;
	cout << "costo de entrada: ";
	cin >> costo;
	cout << "compra de entradas: ";
	cin >> compra;

	if (compra == 2) {
		descuento = costo * compra * 10 / 100;
		pago = (costo*compra) - descuento;
		cout << "monto por pagar: " << pago << endl;
	}
	if (compra == 3) {
		descuento = costo * compra * 15 / 100;
		pago = (costo*compra) - descuento;
		cout << "monto por pagar: " << pago << endl;
	}
	if (compra == 4) {
		descuento = costo * compra * 20 / 100;
		pago = (costo*compra) - descuento;
		cout << "monto por pagar: " << pago << endl;
	}

	system("pause");
	return 0;
}
#include "NetworkHardware.h" // Header
#include "typeDEV.h"
#include "Hybrid.h"
#include "Computer.h"
#include "Phone.h"
#include "Router.h"
#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	// �������� ������� ������ NetworkHardware
	Router router("������", typeDEV::Wired, "192.168.0.1", 8080, 90000);

	Phone phone("�������", typeDEV::Wireless, "132.138.0.1", 9090, 3);

	Computer computer("���������", typeDEV::Wired, "132.128.3.4", 1010, 12);

	Hybrid hybrid("���������", typeDEV::Wired, "132.128.3.4", 1010, 12, 3, 98);



	try {
		router.setSpeed(20000);
	}
	catch (double port) {
		cout << "����: " << port << "������ 0" << endl;
	}
	catch (const overflow_error& err) {
		cout << err.what() << endl;
	}
	catch (const exception& err) {
		cout << err.what() << endl;
	}
	catch (...) {
		cout << "������" << endl;
	}


	system("pause");
	return 0;
}
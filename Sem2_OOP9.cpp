#include <iostream>
#include <string>
#include "list.h"
using namespace std;

int main() {
	try {
		system("chcp 1251>NULL");
		List list(10, 5);
		cout << list;
		list.pushBack(3);
		cout << list;
		cout << "Введите номер элемента: ";
		int i;
		cin >> i;
		cout << list[i] << endl;
	}
	catch (int) {
		cout << "Ошибка!!!";
		return 0;
	}
}

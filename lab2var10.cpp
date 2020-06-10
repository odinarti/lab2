
#include"window.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{




	
		setlocale(LC_ALL, "Russian");
		int a, i = 0;
		Window window1 = Window();
		Window window2 = Window("Owner", "Title", "Color");
		Window window3 = Window();
		window1.setColor("Цвет");
		window1.setOwner("Владелец");
		window1.setTitle("Заголовок");

		while (i != 1) {
			cout << "Меню:" << endl;
			cout << "0. Выход" << endl;
			cout << "1. Операция ==" << endl;
			cout << "2. Операция !=" << endl;
			cout << "3. Операция >" << endl;
			cout << "4. Операция <" << endl;
			cout << "5. Операция >=" << endl;
			cout << "6. Операция <=" << endl;
			cout << "7. Операция =" << endl;
			cout << "8. Операция <<" << endl;
			cout << "9. Операция >>" << endl;
			cin >> a;
			switch (a) {
			case 0:
				i = 1;
				break;
			case 1:
				if ((window1 == window2))
				{
					cout << "true" << endl;
				}
				else {
					cout << "false" << endl;
				}

				break;
			case 2:
				if ((window1 != window2))
				{
					cout << "true" << endl;
				}
				else {
					cout << "false" << endl;
				}
				break;

			case 3:
				if ((window1 > window2))
				{
					cout << "true" << endl;
				}
				else {
					cout << "false" << endl;
				}
				break;

			case 4:
				if ((window1 < window2))
				{
					cout << "true" << endl;
				}
				else {
					cout << "false" << endl;
				}
				break;
			case 5:
				if ((window1 >= window2))
				{
					cout << "true" << endl;
				}
				else {
					cout << "false" << endl;
				}
				break;

			case 6:
				if ((window1 <= window2))
				{
					cout << "true" << endl;
				}
				else {
					cout << "false" << endl;
				}
				break;
			case 7:
				window3 = window1;
				window3.print();
				break;
			case 8:
				cout << window1;
				break;
			case 9:
				cin >> window1;
				break;

			default:
				cout << "Вы ввели неверный пункт в меню." << endl;
				break;

			}
		}
		system("pause");
		system("cls");
	
	return 0;
}


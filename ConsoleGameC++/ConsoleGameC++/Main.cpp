#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

const int q = 10;

string arr[q]
{
	"0000000000",
	"0        0",
	"0        0",
	"0        0",
	"0        0",
	"0        0",
	"0        0",
	"0        0",
	"0        0",
	"0000000000"
};

int main()
{
	//system("help"); //Эта команда вызывает справочник по командам в консоли.(также для параметров функции system).
	system("color 11"); //Эта команда меняет цвет символов и фона в консоли.

	setlocale(LC_ALL, "Russian");                  //Эти 3 команды подключают кириллицу в консоль.
	SetConsoleCP(1251); SetConsoleOutputCP(1251);  //Обязательно нужно подключить библиотеку <Windows.h>

	string buff;
	cout << "Привет! Как твое имя?" << endl;
	cin >> buff;
	system("cls"); //Эта команда стирает все что было на экране.
	cout << "" << endl;
	cout << "Здравствуй " + buff + "!" << endl;
	cout << "Сыграем в новую игру?" << endl << endl;
	cout << "Введите: Да или Нет" << endl << endl;
	cin >> buff;
	if (buff == "Да")
	{
		system("cls");
		cout << "" << endl;
		for (int i = 0; i < q; i++)
		{
			cout << arr[i] << endl;
		}
	}
	else if (buff == "Нет")
	{
		system("cls");
		cout << "" << endl;
		cout << "Пока!" << endl;
		return 0;
	}
	else return 0;
	cout << "" << endl;

	system("pause");
	return 0;
}
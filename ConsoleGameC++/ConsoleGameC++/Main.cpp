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
	//system("help"); //��� ������� �������� ���������� �� �������� � �������.(����� ��� ���������� ������� system).
	system("color 11"); //��� ������� ������ ���� �������� � ���� � �������.

	setlocale(LC_ALL, "Russian");                  //��� 3 ������� ���������� ��������� � �������.
	SetConsoleCP(1251); SetConsoleOutputCP(1251);  //����������� ����� ���������� ���������� <Windows.h>

	string buff;
	cout << "������! ��� ���� ���?" << endl;
	cin >> buff;
	system("cls"); //��� ������� ������� ��� ��� ���� �� ������.
	cout << "" << endl;
	cout << "���������� " + buff + "!" << endl;
	cout << "������� � ����� ����?" << endl << endl;
	cout << "�������: �� ��� ���" << endl << endl;
	cin >> buff;
	if (buff == "��")
	{
		system("cls");
		cout << "" << endl;
		for (int i = 0; i < q; i++)
		{
			cout << arr[i] << endl;
		}
	}
	else if (buff == "���")
	{
		system("cls");
		cout << "" << endl;
		cout << "����!" << endl;
		return 0;
	}
	else return 0;
	cout << "" << endl;

	system("pause");
	return 0;
}
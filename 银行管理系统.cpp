#include "���й���ϵͳ.h"

Account::Account(int nu, string na, int m)
{
	this->num = nu;
	this->name = na;
	this->money = m;
}

void Account::SetMoney()
{
	cout << "���������";
	int m;
	cin >> m;
	this->money += m;
	cout << "�˺�" << this->num <<
		"���˻����Ϊ��" << this->money << endl;
	//system("cls");
	cout << endl;
}

void Account::GetMoney()
{
	cout << "������ȡ����:";
	int m;
	cin >> m;
	this->money -= m;
	cout << "�˺�" << this->num <<
		"���˻����Ϊ��" << this->money << endl;
	cout << endl;
}

void Account::Show()
{
	cout << "�������Ϊ��" << this->money << endl;
	cout << endl;
}

bool Account::exit()
{
	return false;
}

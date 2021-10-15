#include "银行管理系统.h"

Account::Account(int nu, string na, int m)
{
	this->num = nu;
	this->name = na;
	this->money = m;
}

void Account::SetMoney()
{
	cout << "请输入存款金额：";
	int m;
	cin >> m;
	this->money += m;
	cout << "账号" << this->num <<
		"的账户余额为：" << this->money << endl;
	//system("cls");
	cout << endl;
}

void Account::GetMoney()
{
	cout << "请输入取款金额:";
	int m;
	cin >> m;
	this->money -= m;
	cout << "账号" << this->num <<
		"的账户余额为：" << this->money << endl;
	cout << endl;
}

void Account::Show()
{
	cout << "您的余额为：" << this->money << endl;
	cout << endl;
}

bool Account::exit()
{
	return false;
}

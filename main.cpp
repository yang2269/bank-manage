#include<iostream>
using namespace std;
#include"银行管理系统.h"
int main() {

	cout << "请输入开户信息：";
	int nu, mo;
	string na;
	cin >> nu >> na >> mo;
	Account p(nu, na, mo);
	int index = 1;
	while (index!=0) {
		cout << "1 - 存款" << endl;
		cout << "2 - 取款" << endl;
		cout << "3 - 查询余额" << endl;
		cout << "4 - 退出" << endl;
		int c;
		cout << "请选择：";
		cin >> c;
		switch (c) {
		case 1:p.SetMoney(); break;
		case 2:p.GetMoney(); break;
		case 3:p.Show(); break;
		case 4:index=p.exit(); break;
		}
	}
	return 0;
}
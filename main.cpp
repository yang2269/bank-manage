#include<iostream>
using namespace std;
#include"���й���ϵͳ.h"
int main() {

	cout << "�����뿪����Ϣ��";
	int nu, mo;
	string na;
	cin >> nu >> na >> mo;
	Account p(nu, na, mo);
	int index = 1;
	while (index!=0) {
		cout << "1 - ���" << endl;
		cout << "2 - ȡ��" << endl;
		cout << "3 - ��ѯ���" << endl;
		cout << "4 - �˳�" << endl;
		int c;
		cout << "��ѡ��";
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
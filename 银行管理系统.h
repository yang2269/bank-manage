#pragma once
#include<iostream>
using namespace std;
class Account {
private:
	int num;
	string name;
	int money;
/*******************/
public:
	Account(int nu, string na,int m);
	void SetMoney();
	void GetMoney();
	void Show();
	bool exit();
};
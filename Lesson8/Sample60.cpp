#include<iostream>
using namespace std;
int main() {
	int a;
	int* pa;
	a = 5;
	pa = &a;
	cout << "変数aの値は" << a << "です\n";
	*pa = 50;
	cout << "*paに50を代入しました\n";
	cout << "変数aの値は" << a << "です\n";
	return 0;
}
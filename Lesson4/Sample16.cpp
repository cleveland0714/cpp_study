#include<iostream>
using namespace std;
int main() {
	int a = 0;
	int b = 0;
	//b = a++;
	//cout << "代入後にインクリメントしたのでbの値は" << b << "です\n";
	b = ++a;
	cout << "代入前にインクリメントしたのでbの値は" << b << "です\n";
	return 0;
}
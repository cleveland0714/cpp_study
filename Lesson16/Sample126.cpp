#include<iostream>
#include<fstream>
using namespace std;
int main() {
	ifstream fin("test1.txt");
	if (!fin) {
		cout << "ファイルをオープンできませんでした\n";
		return 1;
	}
	char str1[16];
	char str2[16];
	fin >> str1 >> str2;
	cout << "ファイルに書き込まれている2つの文字列は\n";
	cout << str1 << "です\n";
	cout << str2 << "です\n";
	fin.close();
	return 0;
}
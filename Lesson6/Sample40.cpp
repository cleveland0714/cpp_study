#include<iostream>
using namespace std;
int main() {
	int res;
	cout << "何度目でループを中止しますか？(1~10)\n";
	cin >> res;
		for (int i = 1; i <= 10; i++) {
			cout << i << "番目の処理です\n";
			if (i == res)
				break;
		}
	return 0;
}
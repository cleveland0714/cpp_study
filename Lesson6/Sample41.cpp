#include<iostream>
using namespace std;
int main() {
	int res;
	cout << "成績を入力してください\n";
	cin >> res;
	switch (res)
	{case 1:
	 case 2:
		cout << "もう少し頑張りましょう\n";
		break;
	 case 3:
	 case 4:
		 cout << "この調子で頑張りましょう\n";
		 break;
	 case 5:
		 cout << "大変優秀です\n";
		 break;
	default:
		cout << "1~5までの成績を入力してください\n";
		break;
	}
	return 0;
}
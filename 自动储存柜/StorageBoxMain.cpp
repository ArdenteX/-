#include"StorageBox.cpp"

int main() {
	int p = 1, coin = 0, n = 0, i = 0, j = -1;
	int a = 0, b = 0;
	StoBLinkList S;

	cout << "Please input Boxs number: ";
	cin >> n;
	Input(S,n);

	while (j < 0) {
		Swing();
		cin >> i;
		if (i == 0) break;
		switch (i) {
		case 1:
			system("cls");
			cout << " Please put in a coin(Only accept 1 dollar): " << endl;
			cin >> coin;
			if (coin == 1) {
				if(p <= n){
					cout << "Box's PassWord is: " << OutPut(S) << endl;
					p++;
				}
				else if (p > n) cout << "There are no remaining storage tanks!";
			}
			else cout << "Please put right coin! " << endl;
			system("pause");
			break;
		case 2:
			system("cls");
			cout << "Please input Box's number: " << endl;
			cin >> a;
			cout << "Please input Box's PassWord:" << endl;
			cin >> b;
			system("cls");
			if (Find(S, a, b)) {
				cout << "PassWord Right,Box is Open!\n\nWelcome to use again!" << endl;
				ChangePassWord(S, a);
			}
			else cout << "Wrong PassWord!";
			system("pause");
			break;

		}
		
	}
}
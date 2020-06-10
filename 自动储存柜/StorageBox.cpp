#include"HeadStorageBox.h"

Status Initialize(StoBLinkList& S) {
	S = new StoBLink;
	if (!S->data)return -2;
	S->next = NULL;
	return 1;
}
void Input(StoBLinkList& S,int n) {		//q是可移动的 总是在p前面
	srand(time(0));
	StoBLink* p, *q;
	Initialize(S);
	int k = 0;
	q = S;
	for(int i = 0;i < n;i++){
		p = new StoBLink;
		if (!p) exit(-2);
		k = rand() % (9999 - 1000 + 1) + 1000;
		p->data = k;
		p->Use = 0;
		p->next = q->next;
		q->next = p;
		q = p;
	}
}
int OutPut(StoBLinkList& S) {
	int count = 0;
	StoBLink* p;
	p = S;
	while (p->next != NULL) {
		p = p->next;
		count++;
		if (p->Use == 0) {
			cout << "Box number is: " << count << endl;
			p->Use = 1;
			break;
		}
	}
	return p->data;
}
int Find(StoBLinkList S,int a,int b){
	int count = 0;
	StoBLink* p;
	p = S;
	while (p->next != NULL) {
		p = p->next;
		count++;
		if (count == a) {
			if (p->data == b) {
				return 1;
			}
		}
	}
	return 0;
}
void Swing() {
	system("cls"); //清屏
	system("COLOR 9f");
	cout << "	  =====================================" << endl;
	cout << "			存储箱实验				  " << endl;
	cout << "	  =====================================" << endl;
	cout << "			1.投入硬币				  " << endl;
	cout << "			2.输入密码				  " << endl;
	cout << "			0.退出					  " << endl;
	cout << "	  =====================================" << endl;
}
inline void ChangePassWord(StoBLinkList& S, int a) {
	int count = 0;
	srand(time(0));
	StoBLink* p;
	p = S;
	while (p->next != NULL) {
		p = p->next;
		count++;
		if (count == a) {
			p->Use = 0;
			p->data = rand() % (9999 - 1000 + 1) + 1000;
		}
	}
}


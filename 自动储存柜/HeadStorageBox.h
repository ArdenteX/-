#include"Allin.h"

using namespace std;

typedef int Status;

typedef struct StoB {
	int data;
	int Use;
	StoB* next;

}StoBLink,*StoBLinkList;

//程序可以用到链表来处理，首先是初始化，进入用户界面，选择投硬币之后第一次选择正位输入或者直接使用插入，随后打印出柜子的编号和密码，密码采用区间随机。
//必须要用到system("pause")，即暂停， 用户输入完密码后，使用Find找到并输出箱子的号码，和取出成功的提示。随后可以选择把这个链表删除，或改为可使用。
inline Status Initialize(StoBLinkList& S);	      //初始化
inline void Input(StoBLinkList& S, int n);      //输入（可能选择正位输入）
inline int Find(StoBLinkList S,int a,int b);	  //查找 S是链表，a是号，b是密码
inline void Swing();
inline int OutPut(StoBLinkList& S);
inline void ChangePassWord(StoBLinkList& S, int a);

 
#include"Allin.h"

using namespace std;

typedef int Status;

typedef struct StoB {
	int data;
	int Use;
	StoB* next;

}StoBLink,*StoBLinkList;

//��������õ����������������ǳ�ʼ���������û����棬ѡ��ͶӲ��֮���һ��ѡ����λ�������ֱ��ʹ�ò��룬����ӡ�����ӵı�ź����룬����������������
//����Ҫ�õ�system("pause")������ͣ�� �û������������ʹ��Find�ҵ���������ӵĺ��룬��ȡ���ɹ�����ʾ��������ѡ����������ɾ�������Ϊ��ʹ�á�
inline Status Initialize(StoBLinkList& S);	      //��ʼ��
inline void Input(StoBLinkList& S, int n);      //���루����ѡ����λ���룩
inline int Find(StoBLinkList S,int a,int b);	  //���� S������a�Ǻţ�b������
inline void Swing();
inline int OutPut(StoBLinkList& S);
inline void ChangePassWord(StoBLinkList& S, int a);

 
#include<iostream>
using namespace std;
class C1
{
	int m_A;//Ĭ��  ˽��
};

struct C2
{

	int m_A;
};
int main()
{//struct ��Class������
	//StructĬ��Ȩ���ǹ��� public
	//classĬ��Ȩ����˽�� private
	C1 c1;
	//c1.m_A = 100;
	C2 c2;
	c2.m_A = 100;
	system("pause");
	return 0;
}
 
#include<iostream>
using namespace std;
class C1
{
	int m_A;//默认  私有
};

struct C2
{

	int m_A;
};
int main()
{//struct 和Class的区别
	//Struct默认权限是公有 public
	//class默认权限是私有 private
	C1 c1;
	//c1.m_A = 100;
	C2 c2;
	c2.m_A = 100;
	system("pause");
	return 0;
}
 
#include<iostream>
using namespace std;
const double PI = 3.14;
class Circular
{
	//访问权限
	//公共权限
public:
	//属性
	int m_r;
	//行为
	//获取元的周长
	double calcullateZXI()
	{
		return 2 * PI*m_r;
	}

};
int main()
{

	Circular c1;
	//c1.m_r = 10;
	cin >> c1.m_r;
	cout << "圆的周长="<<c1.calcullateZXI() << endl;
	system("pause");

	return 0;
}
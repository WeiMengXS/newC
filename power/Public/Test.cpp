#include<iostream>
using namespace std;
#include<string>
//访问权限
//三种
//公共权限 pubilc
//保护权限 protected 成员 类内可以访问  类外不可  儿子可以访问
//私有权限 private    成员 类内可以访问  类外不可   儿子不可 
class Person
{
public:
	//公共权限
	string m_Name;
protected:
		//汽车
		string car;
	//保护权限
private:
		//银行卡密码
		int m_Password;
//public:
//	void func()
//{
//		m_Name = "dxd";
//		car = "sda";
//		m_Password = 12321;
//	}
};

int main()
{
	Person p1;
	p1.m_Name = "dxd";
		//	p1.car = "sda";
		//	p1.m_Password = 12321;
	system("pause");
	return 0;
}

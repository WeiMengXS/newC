#include<iostream>
using namespace std;
#include<string>
//����Ȩ��
//����
//����Ȩ�� pubilc
//����Ȩ�� protected ��Ա ���ڿ��Է���  ���ⲻ��  ���ӿ��Է���
//˽��Ȩ�� private    ��Ա ���ڿ��Է���  ���ⲻ��   ���Ӳ��� 
class Person
{
public:
	//����Ȩ��
	string m_Name;
protected:
		//����
		string car;
	//����Ȩ��
private:
		//���п�����
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

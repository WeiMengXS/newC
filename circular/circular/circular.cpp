#include<iostream>
using namespace std;
const double PI = 3.14;
class Circular
{
	//����Ȩ��
	//����Ȩ��
public:
	//����
	int m_r;
	//��Ϊ
	//��ȡԪ���ܳ�
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
	cout << "Բ���ܳ�="<<c1.calcullateZXI() << endl;
	system("pause");

	return 0;
}
#include<iostream>
using namespace std;


class Cube
{
public:
	//���ó�
	void setl(int l)
	{
		m_l = l;

	}
	int redl()
	{
		return m_l;
	}
	int redw()
	{
		return m_w;
	}	int redh()
	{
		return m_h;
	}

	//���ÿ�
	void setw(int w)
	{
		m_w = w;

	}
	//���ø�
	void seth(int h)
	{
		m_h = h;


	}
	int calculateV()
	{
		return m_l*m_h*m_w;
	}
	int calculateS()//��ȡ���
	{
		return (m_h + m_l) * 2 + (m_l + m_w) * 2 + (m_w + m_h) * 2;
	}
	//�Ƚ������������Ƿ����

private:
	int m_l;
	int m_w;
	int m_h;


};

bool isSame(Cube c1, Cube c2)
{
	if (c1.redl() == c2.redl() && c1.redh() == c2.redh() && c1.redw() == c2.redw())
	{
		return true;
	}
	else
	{
		return false;
	}
}


int main()
{
	Cube c1;
	c1.seth(1);
	c1.setl(2);
	c1.setw(3);
	cout << "����������"<<c1.calculateS ()<< endl;

	cout << "����������" << c1.calculateV() << endl;
	Cube c2;
	c2.seth(3);
	c2.setl(2);
	c2.setw(1);

	bool ret = isSame(c1, c2);
	if (ret)
	{
		
		cout << "c1��c2���" << endl;

	}
	else
	{
		cout << "c1��c2�����" << endl;


	}

	getchar();

	return 0;
}

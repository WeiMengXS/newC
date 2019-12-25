#include<iostream>
using namespace std;
#include<string>
class Student
{
public:
	string S_name;
	int Sno;
	void	print()
	{
		cout << S_name << "的学号为" << Sno << endl;
	}
	void stename(string name)
	{
		S_name = name;
	}
	void setsno(int n)
	{
		Sno = n;
	}
};
int main()
{
	Student s1;
	s1.S_name = "李斯";
	s1.Sno = 122312;
	cout << "请输入学生姓名和学号" << endl;
	//cin >> s1.S_name;
	//cin >> s1.Sno;
	s1.print();
	s1.stename("张三");
	s1.print();
	s1.setsno(22);
	s1.print();

	system("pause");
	


	return 0;
}




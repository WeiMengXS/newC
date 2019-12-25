#include<iostream>
using namespace std;
#include<string>
#if 0
int main()
{

	bool flag = true;
	string str = "hellow world";
	cout << str << endl;
	cout << flag << endl;
	flag = false;

	cout << flag << endl;

	system("pause");
	return 0;
}

int main()
{
	//int a;
	//cin >> a;
	//cout <<a<<endl;
	string ch = "hellowxzcvzxcvzxcv";
	cout << "请给字符串赋值" << endl;
	cin >> ch ;
	cout << ch << endl;
	system("pause");
	return 0;
}
#endif

	int main()
	{
		int score;
		cin >> score;
		cout << "他考的分数是" << score << endl;
		if (score > 600)
		{
			cout << "他被录取了" << endl;
		}
		else
		{
			cout << "落榜" << endl;
		}
		system("pause");
		return 0;
	}
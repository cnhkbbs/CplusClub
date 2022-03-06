/*
输出问候：Hello!What's your name? 从键盘输入名字，然后输出欢迎信息。

输入格式:
请在这里写输入姓名。例如： GaiFuShuai

输出格式:
请在这里描述输出，例如：

Hello!What's your name?

GaiFuShuai,Welcome to learn OOP using C++!

输入样例:
BaiFuMei
输出样例:
Hello!What's your name?
BaiFuMei,Welcome to learn OOP using C++!
*/
#include<iostream>
using namespace std;
int main(void)
{
	char a[100];
	cin>>a;
	cout<<"Hello!What's your name?"<<endl<<a<<",Welcome to learn OOP using C++!";
}

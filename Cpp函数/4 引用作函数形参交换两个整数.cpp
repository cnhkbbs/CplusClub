// 设计一个void类型的函数Swap，该函数有两个引用类型的参数，函数功能为实现两个整数交换的操作。

// 裁判测试程序样例：
// #include <iostream>
// using namespace std;

// /* 请在这里填写答案 */

// int main()
// {
//     int a, b;

//     cin >> a >> b;

//     Swap(a, b);

//     cout << a << " " << b << endl;

//     return 0;
// }
// 输入样例：
// 3 5
// 输出样例：
// 5 3

void Swap(int &c, int &d) {
	int t;
	t = c;
	c = d;
	d = t;
}

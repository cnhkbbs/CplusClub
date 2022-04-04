// 设计一个带默认形参值的函数add，该函数有三个参数，可以实现三个整数类型的参数相加的操作，函数返回相加的结果。默认形参值从右至左分别是30、20。

// 裁判测试程序样例：
// #include <iostream>
// using namespace std;

// /* 请在这里填写答案 */


// int main()
// {
//     int a, b, c;

//     cin >> a >> b >> c;

//     cout << add(a) << endl;
//     cout << add(a, b) << endl;
//     cout << add(a, b, c) << endl;

//     return 0;
// }
// 输入样例：
// 1 2 3
// 输出样例：
// 51
// 33
// 6

int add(int a, int b = 20, int c = 30) {
	return a + b + c;
}

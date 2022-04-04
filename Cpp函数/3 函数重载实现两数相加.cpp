// 设计一个重载函数add，该函数有两个参数，可以实现两个类型相同的参数相加的操作，函数返回相加的结果。两个参数可以是整数、实数和字符串，但必须保证两个参数类型相同。

// 裁判测试程序样例：
// #include <iostream>
// #include <string>
// #include <iomanip>
// using namespace std;

// /* 请在这里填写答案 */


// int main()
// {
//     int a, b;
//     double c, d;
//     string s1, s2;

//     cin >> a >> b;
//     cin >> c >> d;
//     cin >> s1 >> s2;

//     cout << add(a, b) << endl;
//     cout << fixed << setprecision(2) << add(c, d) << endl;
//     cout << add(s1, s2) << endl;

//     return 0;
// }
// 输入样例：
// 3 5
// 3.3333 5.555555
// hello world
// 输出样例：
// 8
// 8.89
// helloworld


int add(int a, int b)
 {
	return a + b;
}

double add(double c, double d) {
	return c + d;
}

string add(string s1, string s2) {
	return s1 + s2;
}

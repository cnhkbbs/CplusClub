// 设计一个void类型的函数reverse_string，其功能是将一个给定的字符串逆序。例如，给定字符串为“hello”，逆序后为“olleh”。
// ###函数接口定义如下：

// /* 函数原型参见main函数 */
// ###裁判测试程序样例：

// #include <iostream>
// #include <string>
// using namespace std;

// /* 你的代码将嵌在这里 */

// int main(int argc, char const *argv[])
// {
//     string str;
//     getline(cin, str);        //输入字符串
//     reverse_string(str);     //逆序字符串str
//     cout << str << endl;    //输出逆序后的字符串
//     return 0;
// }
// ###输入样例：

// hello
// ###输出样例：

// olleh

void reverse_string(string &s) {
	string t = s;
	int i, l;
	l = s.size();
	int j = l - 1;
	for (i = 0; i < l; i++) {
		s[i] = t[j];
		j--;
	}
}

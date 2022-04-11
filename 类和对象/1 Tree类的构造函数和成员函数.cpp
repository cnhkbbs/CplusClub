// 定义一个Tree（树）类，有成员ages（树龄），不带参数的构造函数对ages初始化为1，成员函数grow(int years)对ages加上years，age()显示tree对象的ages的值。

// Tree类声明如下：
// class Tree {
// public:
//     Tree();//构造函数
//     void grow(int years);//对数龄ages加上years
//     void age();//显示数龄ages的值
// private:
//     int ages;//树龄
// };
// 请实现Tree类的构造函数和成员函数。

// 裁判测试程序样例：
// #include <iostream>
// using namespace std;

// class Tree {
// public:
//     Tree();//构造函数
//     void grow(int years);//对数龄ages加上years
//     void age();//显示数龄ages的值
// private:
//     int ages;//树龄
// };

// int main()
// {
//     Tree tree;
//     int years;
//     cin >> years;
//     tree.grow(years);
//     tree.age();

//     return 0;
// }

// /* 你的代码将被嵌在这里 */
// 输入样例：
// 30
// 输出样例：
// 31
////////////////////////////////////////////////
Tree::Tree() {
	ages = 1;
}
void Tree::grow(int years) {
	ages += years;
}
void Tree::age() {
	cout << ages;
}

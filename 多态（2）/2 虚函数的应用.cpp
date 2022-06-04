// 补充下列代码，使得程序的输出为：

// A:3

// A:15

// B:5

// 3

// 15

// 5

// 类和函数接口定义：
// 参见裁判测试程序样例中的类和函数接口。
// 裁判测试程序样例：
// #include <iostream>
// using namespace std;
// class CMyClassA {
//     int val;
// public:
//     CMyClassA(int);
//     void virtual print();
// };
// CMyClassA::CMyClassA(int arg) {
//     val = arg;
//     printf("A:%d\n", val);
// }
// void CMyClassA::print() {
//     printf("%d\n", val);
//     return;
// }

// /* 在这里填写代码 */

// int main(int argc, char** argv) {
//     CMyClassA a(3), *ptr;
//     CMyClassB b(5);
//     ptr = &a;
//     ptr->print();
//     a = b;
//     a.print();
//     ptr = &b;
//     ptr->print();
//     return 0;
// }
// 输入样例：
// None
// 输出样例：
// A:3
// A:15
// B:5
// 3
// 15
// 5
////////////////////////////////////////////////
class CMyClassB: public CMyClassA{
	int vals;
	public:
	CMyClassB(int vals):CMyClassA(vals*3){
		this->vals=vals;
		cout<<"B:"<<vals<<endl;
	}
	void print(){
		cout<<vals<<endl;
	}
}; 

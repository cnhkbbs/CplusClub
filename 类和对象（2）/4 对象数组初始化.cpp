// 根据类定义，进行对象数组的定义，按照输出样例输出相应的数据。

// 类定义：
// #include<iostream>
// using namespace std;
// class A{
//     int data;
// public:
//     A(int k=0){
//         data=k;
//     }
//     void show(){
//         cout<<"data="<<data<<endl;
//     }
// };
// ###编写main函数，定义三个对象数组，完成指定的输出

// /* 请在这里填写答案 */
// 输入样例：
// 无
// 输出样例：
// 在这里给出相应的输出。例如：

// data=0
// data=0
// data=0

// data=1
// data=0
// data=0

// data=1
// data=2
// data=3
/////////////////////////////////
int main() {
	A a[3];
	int i;
	for (i = 0; i < 3; i++) {
		a[i].show();
	}
	cout<<"\n";
	a[0] = A(1);
	for (i = 0; i < 3; i++) {
		a[i].show();
	}
	cout<<"\n";
	a[1] = A(2);
	a[2] = A(3);
	for (i = 0; i < 3; i++) {
		a[i].show();
	}
}

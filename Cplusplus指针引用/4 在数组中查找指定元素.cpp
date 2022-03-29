/*
输入一个正整数repeat (0<repeat<10)，做repeat次下列运算：

输入一个正整数 n (1<n<=10)，然后输入n个整数存入数组a中，再输入一个整数x，在数组a中查找x，如果找到则输出相应元素的最小下标，否则输出"Not found"。

要求定义并调用函数search(list, n, x)，它的功能是在数组list中查找元素x，若找到则返回相应元素的最小下标，否则返回-1，函数形参 list 的
类型是整型指针，形参n和x的类型是int，函数的类型是int。

输出格式语句：printf("index = %d\n", );

输入输出示例：括号内为说明，无需输入输出

输入样例:
2              (repeat=2) 
3              (n=3)
1 2 -6		
2              (x=2)
5              (n=5)
1 2 2 5 4
0              (x=0)
输出样例:
index = 1
Not found
*/


#include<iostream>
using namespace std;
int select(int *p, int n, int x) {
	int flag = -1;
	for (int i = 0; i < n; i++) {
		if (*(p + i) == x) {
			flag = i;
			break;
		}
	}
	return flag;
}
int main() {
	int repeat;
	cin >> repeat;
	struct files {
		int n;
		int num[10];
		int x;
		int turnback;
	} datas[repeat];
	int i;
	for (i = 0; i < repeat; i++) {
		cin >> datas[i].n;
		for (int j = 0; j < datas[i].n; j++) {
			cin >> datas[i].num[j];
		}
		cin >> datas[i].x;
		datas[i].turnback = select(datas[i].num, datas[i].n, datas[i].x);
	}
	for (i = 0; i < repeat; i++) {
		if (datas[i].turnback == -1) {
			cout << "Not found" << endl;
		} else {
			cout << "index = " << datas[i].turnback << endl;
		}
	}
}

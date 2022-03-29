/*
鸿鸿哥最近学习了指针，感觉这个知识点有点难以理解，于是想要通过编程实践来掌握它。鸿鸿哥以前学习数组（第7章）的时候已经掌握了冒泡排序的一般写法，现在他想用指针来实现排序的功能函数。但是他遇到了困难，你能帮帮他吗？

指针实现冒泡排序函数，函数名统一用void bubbleSort(int *p,int c)。 具体方法自己实现。

输入格式:
一组输入，第一行是待排数据个数n， 第二行是数据的具体值。

输出格式:
输出排序后的数，两个数之间以空格间开，最后一个数字末尾有空格

输入样例:
在这里给出一组输入。例如：

5
503 87 512 61 908
输出样例:
在这里给出相应的输出。例如：

61 87 503 512 908 
*/
#include<iostream>
using namespace std;
void bubbleSort(int *p, int c) {
	int i, j, t;
	for (i = 0; i < c; i++) {
		for (j = 0; j < c - i - 1; j++) {
			if (*(p + j) > *(p + j + 1)) {
				t = *(p + j);
				*(p + j) = *(p + j + 1);
				*(p + j + 1) = t;
			}
		}
	}
}
int main() {
	int n, i;
	cin >> n;
	int a[n], *q = a;
	for (i = 0; i < n; i++) {
		cin >> a[i];
	}
	bubbleSort(q, n);
	for (i = 0; i < n; i++) {
		if (i == n) {
			cout << a[i];
		} else {
			cout << a[i] << " ";
		}
	}
}

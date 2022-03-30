/*
输入5个字符串，输出其中最大的字符串。

输出格式： printf("Max is: %s\n", );

输入输出示例：括号内为说明，无需输入输出

输入样例:
peach 
pear
melon
orange
berry
输出样例:
Max is: pear
*/

#include <iostream>
#include <string.h>
using namespace std;
int main() {
	int i;
	struct goods {
		char zh[20];
	} a[5];

	char max[20] = {"A"};

	for (i = 0; i < 5; i++) {
		cin.getline(a[i].zh, 20); //获取字符串
	}

	for (i = 0; i < 5; i++) {
		if (strcmp(a[i].zh, max) > 0) {
			strcpy(max, a[i].zh);
		}//遍历比较
	}
	cout << "Max is: " << max;
}

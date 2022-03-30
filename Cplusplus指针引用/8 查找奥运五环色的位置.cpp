// 奥运五环的5种颜色的英文单词按一定顺序排列{"red", "blue", "yellow", "green", "black" }，定义指针数组并初始化，输入
// 任意一个颜色的英文单词，从已有颜色中查找并输出该颜色的位置值，若没有找到，则输出"Not Found"。

// 输入格式:
// 输入一个代表颜色的单词。

// 输出格式:
// 输出单词对应的位置值，如果未找到，输出Not Found。

// 输入样例:
// yellow
// 输出样例:
// 3

#include<iostream>
#include<string.h>
using namespace std;
int main() {
	const char *zh[5] = {"red", "blue", "yellow", "green", "black"};
	char word[7];
	cin >> word;
	int flag = 0;
	for (int i = 0; i < 5; i++) {
		if (strcmp(zh[i], word) == 0) {
			flag = i + 1;
			break;
		}
	}
	if (flag) {
		cout << flag;
	} else {
		cout << "Not Found";
	}
}

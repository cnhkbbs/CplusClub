/*
输入一个正整数 repeat (0<repeat<10)，做 repeat 次下列运算：

输入一个字符串 t 和一个正整数 m，将字符串 t 中从第 m 个字符开始的全部字符复制到字符串 s 中，再输出字符串 s。

要求定义并调用函数 strmcpy(s,t,m), 它的功能是将字符串 t 中从第 m 个字符开始的全部字符复制到字符串 s 中，函数形参s和t的类型是字符指针，形参m的类型是int，函数类型是void。

输入输出示例：括号内为说明，无需输入输出

输入样例:
3              (repeat=3）
happy new year
7
happy
1
new
4
输出样例:
new year        (从"happy new year"第7个字符开始组成的新字符串为"new year"）
happy           (从"happy"第1个字符开始组成的新字符串为"happy"）
error input     ("new"的长度小于4）
*/
#include<iostream>
#include<string.h>
using namespace std;

void strmcpy(char *s, char *t, int m) {
	int i, j;
	for (i = m - 1, j = 0; * (t + i) != '\0'; i++, j++) {
		*(s + j) = *(t + i);   //搬运 
	}
	*(s + j) = '\0'; //!!!important
}

int main() {
	int repeat;
	cin >> repeat;

	struct datas {           //定义每次执行单元的结构体 
		char in[1000];  //输入字符串存储 
		int m;          //搬运起始位置存储 
		char out[1000]; //搬运完成字符串输出存储 
		int tf = 0;     //起始位置合法性判断存储  true or flase 
	} a[repeat];

	getchar(); //吸收换行

	int i;
	for (i = 0; i < repeat; i++) {
		cin.getline(a[i].in, 990);  //获取待处理字符串 
		cin >> a[i].m;              //获取起始位置 
		getchar();                  //吸收换行 

		strmcpy(a[i].out, a[i].in, a[i].m);  //调用用户函数 
		//合法性判断 
		int l;  
		l = strlen(a[i].in);  //获得字符串长度 
		if (a[i].m < l) {
			a[i].tf = 1;       //返回合法性判断值 
		}
	}

	for (i = 0; i < repeat; i++) {  //根据合法性循环输出 
		if (a[i].tf) {
			cout << a[i].out << endl;
		} else {
			cout << "error input" << endl;
		}
	}
}

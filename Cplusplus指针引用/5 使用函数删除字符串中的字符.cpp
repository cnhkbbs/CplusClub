/*
输入一个正整数 repeat (0<repeat<10)，做 repeat 次下列运算：

输入一个字符串 str，再输入一个字符 c，将字符串 str 中出现的所有字符 c 删除。

要求定义并调用函数delchar(str,c), 它的功能是将字符串 str 中出现的所有 c 字符删除，函数形参str的类型是字符指针，形参c的类型是char，函数类型是void。

输入输出示例：括号内为说明，无需输入输出

输入样例:
3               (repeat=3）
happy new year  (字符串"happy new year")
a               (待删除的字符'a')
bee             (字符串"bee")
e               (待删除的字符'e')
111211          (字符串"111211")
1               (待删除的字符'1')
输出样例:
result: hppy new yer    (字符串"happy new year"中的字符'a'都被删除)
result: b               (字符串"bee"中的字符'e'都被删除)
result: 2               (字符串"111211"中的字符'1'都被删除)
*/

#include<iostream>
#include<string.h>
using namespace std;
void delchar(char *p,char c)
{
	int i,j;   //!!!! j一定要赋初值0，否则会导致指针p 指向地址错误 
	for(i=j=0;*(p+i)!='\0';i++){
		if(c!=*(p+i)){
		*(p+j)=*(p+i);   //把要删去的字符往后搬运
		j++;		
		}
	}
	
	*(p+j)='\0'; //!!!!!!重要!!!!!!!! 
}
int main()
{
	int repeat;
	cin>>repeat;  //获取执行次数 
	
	struct a{
		char str[100],*p=str;
		char word;
	}a[10];  //定义用于存储多组数据的结构体 
	
	getchar(); //吸收换行
	 
	int i;
	for(i=0;i<repeat;i++){
		cin.getline(a[i].str,100);	//获取字符串   (测试发现get（）方法已经不被PAT编译器支持，故用cin.getline 替代 gets)
		cin>>a[i].word;  //获取待删除的字符
		
		getchar(); //吸收换行 
		 
		delchar(a[i].p,a[i].word);  //调用删除函数 
	}
	
	for(i=0;i<repeat;i++){
		cout<<"result: "<<a[i].str<<endl; //输出所有处理完成数据 
	}
}

// 实现一个面积计算器，它能够计算矩形或长方体的面积。

// 函数接口定义：
// int area(int x, int y);
// int area(int x, int y, int z);
// 第一个函数计算长方形的面积，其中x和y是长和宽。第二个函数计算长方体的表面积，x,y和z是长，宽和高。

// 裁判测试程序样例：
// #include<iostream>
// #include<string>
// using namespace std;
// int area(int,int);
// int area(int,int,int);
// int main()
// {
//     int i, repeat, c, x, y, z;
//     cin>>repeat;
//     for(i=0;i<repeat;i++){
//         cin>>c;
//         if(c==2){
//             cin>>x>>y;
//             cout<<area(x,y)<<endl;
//         }
//         if(c==3){
//             cin>>x>>y>>z;
//             cout<<area(x,y,z)<<endl;
//         }
//     }
//     return 0;
// }

// /* 请在这里填写答案 */
// 输入样例：
// 2
// 2 1 2
// 3 2 3 4
// 输出样例：
// 2
// 52

//////////////////////////////////////////////////////////
int area(int x,int y)
{
	return x*y;
} 

int area(int x,int y,int z)
{
	return (x*y+x*z+y*z)*2;
}

// 裁判测试程序样例中展示的是一段定义基类People、派生类Student以及测试两个类的相关C++代码，其中缺失了部分代码，请补充完整，以保证测试程序正常运行。

// 函数接口定义：
// 提示：
// 观察类的定义和main方法中的测试代码，补全缺失的代码。
// 裁判测试程序样例：
// 注意：真正的测试程序中使用的数据可能与样例测试程序中不同，但仅按照样例中的格式调用相关函数。

// #include <iostream>
// using namespace std;
// class People{
// private:
//     string id;
//     string name;
// public:
//     People(string id, string name){
//         this->id = id;
//         this->name = name;
//     }
//     string getId(){
//         return this->id;
//     }
//     string getName(){
//         return name;
//     }
// };
// class Student : public People{
// private:
//     string sid;
//     int score;
// public:
//     Student(string id, string name, string sid, int score)
        
//         /** 你提交的代码将被嵌在这里（替换此行） **/
        
//     }
//     friend ostream& operator <<(ostream &o, Student &s);
// };
// ostream& operator <<(ostream &o, Student &s){
//     o << "(Name:" << s.getName() << "; id:"
//       << s.getId() << "; sid:" << s.sid
//       << "; score:" << s.score << ")";
//     return o;
// }
// int main(){
//     Student zs("370202X", "Zhang San", "1052102", 96);
//     cout << zs  << endl;
//     return 0;
// }
// 输入样例：
// （无）
// 输出样例：
// (Name:Zhang San; id:370202X; sid:1052102; score:96)
////////////////////////////////////////////////////////////////
:People(id, name)
		{
			this->sid = sid;
			this->score = score;

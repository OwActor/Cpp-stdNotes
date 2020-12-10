//展示string类的相关操作
#include <iostream>
#include <string>         // 使用string类必需的头文件
#include <cstring>        // c风格的字符串处理头文件
int main()
{
    using namespace std;
    char charr1[20];
    char charr2[20] = "jaguar";
    string str1;                    //string处理字符串更像声明为简单变量
    string str2 = "panther";        //可以像数组一样初始化
   
    getline(cin,str1);                        //getline使用意义不同/前者调用string类友元函数完成输入
    cout << "The string " << str1 << "\n";    //string I/O
    cin.getline(charr1,20);                   //后者istream类cin对象的类方法（string类处理方法未包含进iostream头文件/istream类中）
    cout << "The string " << charr1 << "\n";

    str1 = str2;              // string类特性之一：字符串之间的赋值
    strcpy(charr1, charr2);   // 数组需要借助函数

    str1 += " paste";          // string类特性之一：方便地字符串之间拼接
    strcat(charr1, " juice");  // 仍借助函数

    int len1 = str1.size();     // str1是一个对象，size（）是个类方法，通过.连接。c++的oop特性
    int len2 = strlen(charr1);  // 仍借助函数

    cout << "The string " << str1 << " contains "
         << len1 << " characters.\n";
    cout << "The string " << charr1 << " contains "
         << len2 << " characters.\n";
    
    cin.get();
    return 0;
}
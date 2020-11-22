//展示数组的输入，数组初始化为字符串；以及标准c语言库函数strlen()
#include <iostream>
#include <cstring> //C-STL
int main()
{
    using namespace std;
    const int Size = 15;            //使用字符常量定义数组长度可以方便日后的修改
    char name1[Size];               // 空数组
    char name2[Size] = "C++owboy";  // 数组初始化为字符串
    cout << "Howdy! I'm " << name2;
    cout << "! What's your name?\n";
    cin >> name1;   //输入字符串
    cout << "Well, " << name1 << ", your name has ";
    cout << strlen(name1) << " letters and is stored\n";       
    //strlen()函数输出字符串长度
    cout << "in an array of " << sizeof(name1) << " bytes.\n"; 
    //并非sizeof()函数输出的数组长度
    cout << "Your initial is " << name1[0] << name1[1] << ".\n";//字符串常量自动拼接
    name2[3] = '\0';                // 替换为空字符
    cout << "Here are the first 3 characters of my name: ";
    cout << name2 << endl;          //cout输出到第四个下标时碰见空字符自动停止输出
    cin.get();
    cin.get();
    return 0;
}
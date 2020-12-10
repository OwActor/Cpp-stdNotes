// char数据类型的使用及输入输出
#include <iostream>
int main()
{
    using namespace std;
    char ch = 'M';           // 字符用单引号；字符串双引号('M'表示字符M的编码)
    int i = ch;              // 将ch变量值赋给i变量（实际是字符M的编码）
    cout << "The ASCII code for " << ch << " is " << i << endl;

    cout << "Add one to the character code:" << endl;
    ch = ch + 1 ;             // 改变ch变量的值  
    i = ch;                 
    cout << "The ASCII code for " << ch << " is " << i << endl;

    // 使用cout.put() 成员函数命令符去输出char类型数据
    cout << "Displaying char ch using cout.put(ch): ";
    cout.put(ch);

    // 使用cout.put() 成员函数命令符去输出字符（字符串）
    cout.put('!');

    cout << endl << "Done" << endl;
    cin.get();
    return 0;
}
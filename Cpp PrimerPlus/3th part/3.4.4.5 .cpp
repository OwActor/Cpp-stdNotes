// 展示了两种强制类型转换和强制类型转换运算符
// 两种强制类型转换格式 (typeName) value ；typeName (value)   
// 强制类型转换运算符 static_cast (typeName) value
#include <iostream>
int main()
{
    using namespace std;
    int auks, bats, coots;
    auks = 19.99 + 11.99;                  //double赋给int，自动类型转换
    bats = (int) 19.99 + (int) 11.99;      //double赋给int，老式c格式  
    coots = int (19.99) + int (11.99);     //double赋给int，新式c++格式
    cout << "auks = " << auks << ", bats = " << bats;
    cout << ", coots = " << coots << endl; //结果不同的原因是强制转换类型操作符改变了运算顺序

    char ch = 'Z';
    cout << "The code for " << ch << " is "; 
    cout << int(ch) << endl;               //char强制转换int
    cout << "Yes, the code is ";
    cout << static_cast<int>(ch) << endl;  //static_cast运算符转换类型
    cin.get();
    return 0;
}
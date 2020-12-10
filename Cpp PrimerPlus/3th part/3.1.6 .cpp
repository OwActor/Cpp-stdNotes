// 整形字面值的输入与输出
#include <iostream>
int main()
{
    using namespace std;
    int chest = 42;         //10进制
    int waist = 0x42;       //16进制
    int inseam = 042;       //8进制（输入不同进制数据都可以直接赋值，计算机均可识别，不必要转换进制）
    cout << "Monsieur cuts a striking figure!\n";
    cout << "chest = " << chest << " (42 in decimal)\n"; //默认情况下，cout以10进制格式显示整形
    cout << "waist = " << waist << " (0x42 in hex)\n";
    cout << "inseam = " << inseam << " (042 in octal)\n";

    chest = 42;
    waist = 42;
    inseam = 42;
    cout << "Monsieur cuts a striking figure!" << endl;
    cout << "chest = " << chest << " (decimal for 42)" << endl;
    cout << hex; // 改变显示数据的格式（16进制）
    cout << "waist = " << waist << " (hexadecimal for 42)" << endl;
    cout << oct; // 改变显示数据的格式（8进制）
    cout << "inseam = " << inseam << " (octal for 42)" << endl;
    cin.get();
    return 0;
}
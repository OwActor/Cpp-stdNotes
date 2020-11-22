//部分转义序列编码的使用
#include <iostream>
using namespace std;
int main()
{
    char alarm = '\a';                                            // \a 响铃符
    cout << alarm << "Don't do that again!\a\n";                  // \n 换行符
    cout << "Ben\"Buggsie\" Hacker\nwas here!\n";
    cout << endl;
    cout << "\aOperation \"HyperHype\" is now activated!\n";      // \" 符号"
    cout << "Enter your agent code:________\b\b\b\b\b\b\b\b";     // \b 退格
    long code;
    cin >> code;
    cout << "\aYou entered " << code << "...\n";
    cout << "\aCode verified! Proceed with Plan Z3!\n";
    cin.get();
    cin.get();
    return 0 ;
}
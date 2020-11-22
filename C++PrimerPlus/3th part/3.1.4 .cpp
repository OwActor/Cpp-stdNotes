//测试经典的整形溢出行为以及无符号数据类型
#include <iostream>
#define ZERO 0      // 定义zero符号为0值
#include <climits>  
int main()
{
    using namespace std;
    short sam = SHRT_MAX;    // SHRT_MAX=32768
    unsigned short sue = sam;//初始化无符号类型变量

    cout << "Sam has " << sam << " dollars and Sue has " << sue;
    cout << " dollars deposited." << endl
         << "Add $1 to each account." << endl << "Now ";     
    sam = sam + 1;    //short数据溢出（范围：-32768~32768）
    sue = sue + 1;    //unsigned short数据未溢出（范围：0~65535）
    cout << "Sam has " << sam << " dollars and Sue has " << sue;
    cout << " dollars deposited.\nPoor Sam!" << endl;
    sam = ZERO;
    sue = ZERO;
    cout << "Sam has " << sam << " dollars and Sue has " << sue;
    cout << " dollars deposited." << endl;
    cout << "Take $1 from each account." << endl << "Now ";
    sam = sam - 1;    //short数据未溢出（范围：-32768~32768）
    sue = sue - 1;    //unsigned short数据溢出（范围：0~65535）
    cout << "Sam has " << sam << " dollars and Sue has " << sue;
    cout << " dollars deposited." << endl << "Lucky Sue!" << endl;
    cin.get();
    return 0;
}
// 展示除法运算符对不同数据类型的处理
#include <iostream>
int main()
{
    using namespace std;
    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout << "Integer division: 9/5 = " << 9 / 5 << endl;  //int除法
    cout << "Floating-point division: 9.0/5.0 = ";    
    cout << 9.0 / 5.0 << endl;                            //double除法
    cout << "Mixed division: 9.0/5 = " << 9.0 / 5 << endl;//后int数据转换为double类型，再进行除法
    cout << "double constants: 1e7/9.0 = ";
    cout << 1.e7 / 9.0 << endl;                           //double除法（不同表示形式）
    cout << "float constants: 1e7f/9.0f = ";  
    cout << 1.e7f / 9.0f << endl;                         //float除法（和上式相比精准度下降）
    cin.get();
    return 0;
}
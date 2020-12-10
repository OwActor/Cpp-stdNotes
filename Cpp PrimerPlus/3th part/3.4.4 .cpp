//展示数据类型的转换及潜在的风险
#include <iostream>
int main()
{
    using namespace std;
    cout.setf(ios_base::fixed, ios_base::floatfield);
    float tree = 3;      // int值赋给float
    int guess(3.9832);   // double值赋给int（int无法储存小数点后的值，导致后面值被截取）
    int debt = 7.2E12;   // double值赋给int（int无法储存如此之大的值，导致无法定义，得到int最大值）
    cout << "tree = " << tree << endl;
    cout << "guess = " << guess << endl;
    cout << "debt = " << debt << endl;
    cin.get();
    return 0;
}
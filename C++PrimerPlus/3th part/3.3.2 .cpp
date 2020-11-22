//展示不同类型的浮点数准确性
#include <iostream>
int main()
{
    using namespace std;
    cout.setf(ios_base::fixed, ios_base::floatfield); //使cout输出的数据为小数点定位输出的形式，而非简化形式
    float tub = 10.0 / 3.0; //float精度为6位
    double mint = 10.0 / 3.0; //double精度为15位
    const float million = 1.0e6; 

    cout << "tub = " << tub << ";mint =" << mint << endl; //在只输出6位时，两者精确度一致
    cout << endl << " a million tubs = " << million * tub;
    cout << "\nand ten million tubs = ";                  //在放大不同倍数后，及出现精确度的差别
    cout << 10 * million * tub << endl;
    cout <<endl;
    cout << "mint = " << mint << " and a million mints = ";
    cout << million * mint << endl;
    cin.get();
    return 0;
}
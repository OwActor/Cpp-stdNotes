#include <iostream>
using namespace std;
int main()
{
    double longs;
    double yards;
    cout<<"请输入距离（long）:";
    cin>>longs;
    cout<<endl;
    yards=220*longs;
    cout<<"转换距离（yard）:"<<yards<<endl;
    cin.get();
    cin.get();
    return 0;
}
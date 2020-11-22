//用来测试限制性头文件climits，以及该电脑对整形数据的定义
#include <iostream>
#include <climits> //包含头文件才能运行
using namespace std;
int main()
{
    int n_int = INT_MAX;        //初始化各个整形类型的变量，其中初始值由头文件climits提供
    short n_short = SHRT_MAX;   //例如INT_MAX表示了int整形在该系统定义最大值
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;

    //使用运算符sizeof返回类型或变量长度，单位比特
    cout<<"int is "<<sizeof(int)<<"bytes."<<endl;      //返回类型的长度
    cout<<"short is "<<sizeof n_short<<"bytes"<<endl;  //返回变量的长度
    cout<<"long is "<<sizeof n_long<<"bytes"<<endl;
    cout<<"long long is "<<sizeof n_llong<<"bytes"<<endl;
    cout<<endl;

    cout<<"Maximum values:"<<endl;
    cout<<"int:"<<n_int<<endl;
    cout<<"short:"<<n_short<<endl;
    cout<<"long:"<<n_long<<endl;
    cout<<"long long:"<<n_llong<<endl<<endl;  //两次换行

    cout<<"Minimum int value ="<<INT_MIN<<endl; //可以直接使用
    cout<<"bits per byte ="<<CHAR_BIT<<endl;
    cin.get();
    return 0;
}
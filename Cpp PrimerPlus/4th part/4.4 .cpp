// 结构体（初始化，赋值）；结构数组
#include <iostream>

struct inflatable // 定义 一类结构 (全局定义)
{
    char name[20]; //可使用 std::string name
    float volume;
    double price;
};

int main()
{
    using namespace std;
    inflatable guest =   // 创建 该类结构 一个对象
    {
        "Glorious Gloria", 
        1.88,              
        29.99              
    }; 

    inflatable pal =     // 同上 另一个对象
    {
        "Audacious Arthur",
        3.12,
        32.99
    }; 

    cout << "Expand your guest list with " << guest.name;
    cout << " and " << pal.name << "!\n";
    cout << "You can have both for $";
    cout << guest.price + pal.price << "!\n";


    // 结构数组
     inflatable guests[2] = 
    {
        {"Bambi", 0.5, 21.99}, // 第一组结构对象的数据初始化
        {"Godzilla", 2000, 565.99} // 第二座
    };

    cout << "The guests " << guests[0].name << " and " << guests[1].name
         << "\nhave a combined volume of "
         << guests[0].volume + guests[1].volume << " cubic feet.\n";


    // 局部定义另一类结构
    struct inflatableFor2
    {
        char name[20];
        float volume;
        double price;
    } bouquet =        // 一种初始化方法
    {
        "sunflowers",
        0.20,
        12.49
    };

    inflatableFor2 choice;
    cout << "bouquet: " << bouquet.name << " for $";
    cout << bouquet.price << endl;
    choice = bouquet; // 支持同类结构体不同对象间赋值操作
    cout << "choice: " << choice.name << " for $";
    cout << choice.price << endl;
    return 0;
}
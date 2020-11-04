#include <iostream>
using namespace std;
//全局变量
int a = 1;
const int e = 1;
int main() {
    cout << "全局变量地址:" << (long long)&a << endl;
    //静态变量
    static int b = 1;
    cout << "静态变量地址:" << (long long)&b << endl;
    cout << "全局常量地址:" << (long long)&e << endl;
    //字符串常量
    cout << "字符串常量地址:" << (long long)&"字符串" << endl << endl;
    //const常量
    const int c = 1;
    cout << "局部常量地址:" << (long long)&c << endl ;
    //局部变量
    int d = 1;
    cout << "局部变量地址:" << (long long)&d << endl << sizeof(int) << sizeof(long) << sizeof(long long);
    return 0;
}

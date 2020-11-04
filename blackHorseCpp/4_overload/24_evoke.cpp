#include <iostream>
using namespace std;
class Print{
public:
    void operator()(string text){
        cout << text << endl;
    }
};
void test1(){
    Print p;
    p("中国");
    //匿名函数对象
    Print()("河南");
}
int main() {
    test1();
    return 0;
}
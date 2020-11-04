#include <iostream>
using namespace std;
int* fun(){
    //利用new关键字将数据开到堆区
    int* p = new int(10);
    return p;
}
int main() {
    int* p = fun();
    cout << *p << endl << *p;
    delete p;
    return 0;
}

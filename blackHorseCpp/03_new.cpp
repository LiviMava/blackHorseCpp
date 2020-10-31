#include <iostream>
using namespace std;
int* fun(){
    //开辟数组，和开辟变量一样，也是用int*接
    int* p = new int[10];
    return p;
}
int main() {
    int* p = fun();
    for(int i = 0; i < 10; i++){
        *(p+i)=i;
    }
    for(int i = 0; i < 10; i++){
        cout << *(p+i) << endl;
    }
    delete[] p;
    //删除用中括号
    return 0;
}

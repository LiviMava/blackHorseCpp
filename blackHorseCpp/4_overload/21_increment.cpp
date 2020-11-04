#include <iostream>
using namespace std;
class MyInt{
    friend ostream& operator<<(ostream& cout, MyInt m);//m不可以加&
public:
    MyInt(){
        i = 0;
    }
    MyInt& operator++(){
        i++;
        return *this;
    }
    //局部对象不返回引用
    MyInt operator++(int){
        MyInt temp = *this;
        i++;
        return temp;
    }
private:
    int i;
};
void test1(){
    MyInt m;
    cout<< ++(++m) << endl;
}
void test2(){
    MyInt m;
    cout<< m++ << endl;
    cout<< m << endl;
}
int main() {
    test2();
    return 0;
}
ostream& operator<<(ostream& cout, MyInt m){
    cout<< "i:" << m.i << endl;
    return cout;
}
#include <iostream>
using namespace std;
//多态的例子 指针实现
class AbstractCalculator{
    friend class AddCalculator;
    friend class SubCalculator;
    friend class MulCalculator;
    friend class DivCalculator;
    friend void test();
private:
    int m;
    int n;
public:
    virtual void cal() = 0;
};
class AddCalculator: public AbstractCalculator{
public:
    void cal(){
        cout << m+n << endl;
    }
    AddCalculator(){
        m = 10;
        n = 20;
    }
};
class SubCalculator: public AbstractCalculator{
public:
    void cal(){
        cout << m-n << endl;
    }
    SubCalculator(){
        m = 10;
        n = 20;
    }
};
class MulCalculator: public AbstractCalculator{
public:
    void cal(){
        cout << m*n << endl;
    }
    MulCalculator(){
        m = 10;
        n = 20;
    }
};
class DivCalculator: public AbstractCalculator{
public:
    void cal(){
        cout << m/n << endl;
    }
    DivCalculator(){
        m = 10;
        n = 20;
    }
};
void test(AbstractCalculator* calculator){
    calculator->cal();
}
int main(){
    test(new AddCalculator());
    test(new SubCalculator());
    test(new MulCalculator());
    test(new DivCalculator());
    return 0;
}
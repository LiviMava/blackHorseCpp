#include <iostream>
using namespace std;
class c1{
    int age;//默认权限私有,好处是set属性时可以检测其有效性
public:
    int getAge() const {
        return age;
    }
    void setAge(int age) {
        if(age < 20){
            this->age = age;
        }
    }
    //利用成员函数
    bool isSameInClass(c1 c){
        if(this->age = c.getAge()){
            return true;
        }
        return false;
    }
};
struct s1{
    int b;//默认公共
};
//利用全局函数
bool isSame(c1 &ca, c1 &cb){//引用传参用其本身，不用再拷贝
    if(ca.getAge() == cb.getAge()){
        return true;
    }
    return false;
}
int main() {
    c1 c;
    s1 s;
    //sizeof(c.age);error
    sizeof(s.b);
    return 0;
}

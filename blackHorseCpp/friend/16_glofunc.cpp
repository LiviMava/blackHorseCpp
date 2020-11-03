#include <iostream>
using namespace std;
class Building{
    friend void test(Building& b);
private:
    int age;
public:
    Building(){
        age = 10;
    }
};
void test(Building& b){
    cout << b.age << endl;
}
int main() {
    Building b;
    test(b);
    return 0;
}

#include <iostream>
#include <memory>
using namespace std;
class stu{
public:
    int *age;
    stu(int a):age{new int(a)}{
        cout << " 构造函数" << endl;
    }

    stu(const stu &s){
        age = new int;
        *age = *s.age;
        cout << "拷贝构造" << endl;


    }

    stu(stu&& s){
        age =s.age;
        s.age = nullptr;
        cout << "移动构造" << endl;
    }
    ~stu(){
        cout << "析构函数" << endl;
        if(age != nullptr){
            cout << "asd" << endl;
            delete age;
            cout << "asd" << endl;
            age = nullptr;

        }
    }
};



int main(){
    stu s(24);
//    cout << *s.age <<endl;
//    stu s2 =s;
//    cout << s2.age <<endl;
//    cout << s.age  <<endl;
//     stu s1 = move(s);
//     cout << s1.age <<endl;
//     cout << s.age <<endl;

}

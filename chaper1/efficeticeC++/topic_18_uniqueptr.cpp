#include <iostream>
//һЩģ���ຯ��ͷ�ļ�
#include <functional>
//�����㷨�����罻�������ң����������ƣ��޸ģ���ת�������ͷ�ļ�
#include <algorithm>
#include <string>
//ʱ��ͷ�ļ�
#include <time.h>
//�����ͷ�ļ�
#include <stdlib.h>
#include <memory>

using namespace std;
class person{
public:
    string name;
    person(string n):name{n}{

    }
};


int main(){
//    std::array<int,10> s{10,10,5,6,5};
////    for(auto r : s){
////        cout<< r <<endl;
////    }
//    int a =5;
//    int *b =&a;
//    unique_ptr<int> uq(new int(10));
    auto up2(make_unique<int>(10));
    auto sh2(make_shared<int>(10));
    sh2.use_count();
    weak_ptr<int> w(sh2);
    cout << *up2 <<endl;
//    unique_ptr<int> uq2(b);
//    unique_ptr<person> p(new person("zhangsan"));

//        cout << *uq2 <<endl;
//    cout << *(uq2.get()) <<endl;
//    cout << *uq2 <<endl;
}

#include <iostream>
//一些模板类函数头文件
#include <functional>
//常用算法，比如交换，查找，遍历，复制，修改，反转，排序的头文件
#include <algorithm>
#include <string>
//时间头文件
#include <time.h>
//随机数头文件
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

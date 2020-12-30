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
#include <vector>

//区分{} （）之间的区别
using namespace std;

//template<typename ... Ts>
//void dosomework(Ts&&  ...params){
//    cout << (sizeof...(params)) <<endl;
//    cout << "sda" <<endl;
//};
template <typename  T>
void print2( T  t){
    cout << t << endl;
}
template <typename T, typename ...Args>
void print2(T n,   Args...args ){
    cout << n <<endl;
    print2(args...);
}
int main(){
    vector<int> a{10,20,30} ;
    int c =6;
    int &b = c;
    const int &d = 5;
    print2(5,6,7);
}

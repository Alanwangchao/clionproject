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
using namespace std;
using vi =vector<int>;
//typedef int (*fp)(int ,int);
int add(int a,int b){
    return a+b;
}

int add2(int a ,int b){
    return a+2*b;
}

int add3(int a ,int b,int (*fp)(int ,int)){
    fp(2,3);

}
int main(){
//    cout << add3(2,3,add2) << endl;
//    cout << add3(2,3,add)  << endl;
     vi a{1,2,3};
     for (auto c : a){
         cout << c <<endl;
     }
}

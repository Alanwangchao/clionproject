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
#include <set>
#include <chrono>
#include <cmath>
using namespace std;
multiset<string> names;

void logand(const string &name){
    auto now = chrono::system_clock::now();
    names.emplace(name);

}
int main(){
   for(auto name : names){
       cout << name <<endl;
   }

   clock_t start ,end;
   start = clock();
   cout << start <<endl;
   cerr << "sada00" <<endl;
   -p



}

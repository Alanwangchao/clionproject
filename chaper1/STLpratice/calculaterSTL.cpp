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

using namespace std;

int main(){
   int a =4;
   int b =5;
   plus<int> p;
   cout << p(a,b) <<endl;
   negate<int> n;
   cout << n(5) <<endl;
   minus<int> m;
   cout << m(a,b) <<endl;
   modulus<int> mo;
   cout << mo(11,10)<<endl;

   equal_to<int> e;
   cout << e(a,b)<<endl;
   not_equal_to<int> ne;
   cout << ne(a,b) <<endl;


}
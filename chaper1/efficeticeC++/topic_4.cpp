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
typedef int wi;
template <typename T>
class TD;


int main(){
   const int ans = 24;
   auto x =  ans;
  const auto y = x;
  // 可以用错误来判断数据类型
   TD<decltype(x)> x1;
   TD<decltype(y)> y2;
}


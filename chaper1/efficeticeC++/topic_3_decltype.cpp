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
template <class T>
void f(T&& param){
    cout << typeid(param).name() <<endl;
}

template <typename T1,typename T2>
//decltype绝大多数情况下会返回a+b的类型
decltype(auto) gettype(T1 a,T1 b)
{
    return a+b;
}


class pointxy{
public:
        int x;
        int y;

        pointxy(int a ,int b):x{a},y{b}{

        }
    };


int main(){
   int x= 5;
   float fl =0.5;
   const int &y =x;
   int && z =5;
   int *d =&x;
   f(x);
   f(y);
   f(z);
   f(4);
   f(d);
   decltype(x) r = 10;

   pointxy point1(3,4);
   decltype(point1) point2(5,65);
   decltype(x*fl) f2 ;
   cout << x*fl << endl;
   cout << typeid(f2).name() <<endl;
   ty
}

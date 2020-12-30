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
#include <sstream>
#include <string>

using namespace std;
enum class color{red =255,green = 200,blue = 150};
int main(){
    string s1 = "a";
    string s2 = "n";
    cout << s1+s2 <<endl;

    int a =5;
    int b =10;
    char c = 's';
    string s3 = "";
    ostringstream os;

    os << a << "----" << b;
    s3 = os.str();
    cout << s3 <<endl;

    color s = color::red;
}

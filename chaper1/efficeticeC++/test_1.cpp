#include <iostream>
#include <string>

using namespace std;

void fun(int &&s){
    cout << s <<endl;
    cin >> s;
}

void fun2(string s){

}

void fun3(int s){

}
int main(){
    fun(5);
    int a= 5;
    int &&s = 5;
    fun(5);
    string ss ="sad";
    fun2("asdas");
//    fun3(s);
    fun3(a);
    fun3(5);
}
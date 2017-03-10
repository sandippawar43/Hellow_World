#include <iostream>
using namespace std;

void callFun(int a)
{
    cout<<"function called - "<<a<<endl;
}

int main ()
{
    void (*fun)(int);
    fun = callFun;
    fun(10);
    callFun(20);
    (*callFun)(30);

}

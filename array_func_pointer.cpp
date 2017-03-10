#include <iostream>
using namespace std;

void add(int a, int b)
{
    cout<<"Addition = "<<a+b<<endl;
}

void sub(int a, int b)
{
    cout<<"Substraction = "<<a-b<<endl;

}

int multiply(int a, int b)
{
    cout<<"Multiplication = "<<a*b<<endl;
    return 0;
}

class A{

    public:
        typedef int (*callback) (int a, int b);
          A(callback cb):m_cb(cb){
              cout<<"A constructor"<<endl;
          }

     private:
        callback  m_cb;
};

int main()
{
    //void (*funcPtr[])(int, int) = {add, sub, multiply};
    //bool ch = true;
    //int num = 0;

    //while(ch)
    //{
    //   cout<<"Add choice 0 for add \n "
    //    "1 for  sub "
    //    "2 for multiply"<<endl;

    //    cin>>num;
    //    if (num > 2) break;
    //    funcPtr[num](10,20);
    //}
    //return 0;
    A a(multiply);


    void (*funPtr[])(int , int) = {add, sub};

}

#include<iostream>
#include <vector>
#include <string>

using namespace std;

template<class T>
class Stack
{
private:
    vector<T> elememt;
public:
    Stack();
    ~Stack();
    void pushBack(T const& ele);
    void popBack();
    T Top()const;
    bool empty();
};

template<class T>
 Stack<T>::Stack()
{

}

 template<class T>
 Stack<T>::~Stack()
 {

 }

 template <class T>
 void Stack<T>::pushBack(T const& ele)
 {
     elememt.push_back(ele);
 }

 template<class T>
 void Stack<T>::popBack()
 {
    if(elements.empty())
        throw out_of_range("Stack is out of range");
    elements.pop_back();
 }

 template <class T>
 bool Stack<T>::empty()
 {
     return elememt.empty();
 }

 int main()
 {
    try{
     Stack<int> intStack;
     Stack<string> strStack;
     intStack.pushBack(4);
     intStack.pushBack(5);
     intStack.pushBack(7);
     strStack.pushBack("A");
     strStack.pushBack("b");
     strStack.pushBack("c");
     strStack.popBack();
     strStack.popBack();
     strStack.popBack();
     strStack.popBack();
    }
    catch(exception excp)
    {
        cout<<excp.what()<<endl;
    }
     return 0;
 }

#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next;

};

class LinkList
{
    Node* head;
    Node* tail;
    int count;

public:
    LinkList():head (0),tail(0){}
    void CreateNode(int val);
    void insertAtStart(int val);
    void inserAtLast(int val);
    void deleteAtLast();
    void deleteStart();
    void deleteAtIndex(int index);
    void displayLsit();

};

void LinkList::CreateNode(int val)
{
    Node* temp = new Node();
    temp->data = val;
    temp->next = NULL;

    if (head == NULL)
    {
        head = temp;
        tail = head;
        temp = NULL;
    }
    else
    {
        tail->next = temp;
        tail = temp;
        temp = NULL;
    }
}

void LinkList::insertAtStart(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->next = head;
    head = temp;
}

void LinkList::inserAtLast(int val)
{
    CreateNode(val);
    
}

void LinkList::deleteAtLast()
{
    Node* current = head;
    Node* previous = NULL;
    while (current->next != NULL)
    {
        previous = current;
        current = current->next;
    }
    tail = previous;
    tail->next = NULL;
    delete current;
}

void LinkList::deleteStart()
{
    Node *temp = new Node;
    temp = head;
    head = head->next;
    delete temp;
}

void LinkList::deleteAtIndex(int index)
{
    Node* current = head;
    Node* prevoius = NULL;
        for (int i = 0; i < index; i++)
        {
            prevoius = current;
            current = current->next;
        }
        prevoius->next = current->next;
        delete current;

}

void LinkList::displayLsit()
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "\t";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    LinkList list;
    list.CreateNode(5);
    list.displayLsit();

    list.inserAtLast(10);
    list.displayLsit();

    list.insertAtStart(-10);
    list.displayLsit();

    list.CreateNode(20);
    list.displayLsit();

    list.deleteAtIndex(3);
    list.displayLsit();


}

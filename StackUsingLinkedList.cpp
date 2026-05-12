#include <iostream>
using namespace std;

class Node 
{
public:
    int data;
    Node* next;

    Node()
    {
        next = NULL; 
    }
};  

class Stack 
{   
private:
    Node* top;  

public:
    Stack()
    {
        top = NULL; 
    }     
    int push(int value) 
    {
        Node* newnode = new Node();
        newnode->data = value;
        newnode->next = top;
        top = newnode;
        cout << "Push value: " << value << endl;
        return value;
    }

     void pop() 
    {
        if (isEmpty())
        {
            cout << "Stack is empty." << endl;
        }

        Node* temp = top;
        top = top->next;    
        cout << "Popped value: " << temp->data << endl;
    }

    void peek() 
    
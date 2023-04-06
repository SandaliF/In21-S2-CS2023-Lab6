#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node*next;
};

class Stack
{
    Node*head;
    int sizeOfStack;
    public:
    Stack()
    {
      head=NULL;
      sizeOfStack=0;
    }
    
    //Add an element to the satck
    void push(int a)
    {
        Node*key= new Node();
        key-> data = a;
        key->next=head;
        head=key;
        
        cout<<a<< " is pushed in to the stack"<<endl;
        sizeOfStack++;
    }
    
    //Remove an elemet from the stack
    void pop()
    {
        if(head==NULL){
            cout<<"Stack is empty"<<endl;
        }
        Node*key=head;
        head= key->next;
        key->next=NULL;
        delete key;
        sizeOfStack--;
        cout<<"One Element is popped"<<endl;
    }
    
    //Obtaining the top element of the stack
    int peek()
    {
        if(head==NULL)
        {
            cout<<"stack is empty"<<endl;
            return -1;
        }
        
        cout<<head->data<<" is the top element"<<endl;
        return head->data;
    }
    
    
    //obtaining the size of the stack
    int size()
    {
        cout<<"size: "<<sizeOfStack<<endl;
        return sizeOfStack;
    }
    
    //Check whether the stack is empty
    bool isEmpty()
    {
        if(head==NULL)
        {
            cout<<"Stack is Empty"<<endl;
        }
        else cout<<"Stack is not Empty"<<endl;
        return head==NULL;
    }
    
    //check whether the stack is full
    bool isFull() {
        cout<<"Stack is not full"<<endl;
        return false; 
    } 
    
    //Display the elements in the stack
    void display() {
        Node* current = head;
        while (current != NULL) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

int main()
{
    Stack S1;
    S1.isEmpty();
    
    S1.push(5);
    S1.push(9);
    S1.push(18);
    S1.push(31);
    S1.push(44);
    
    S1.pop();
    S1.pop();
    
    S1.peek();
    
    S1.isEmpty();
    S1.isFull();
    S1.display();
    
    S1.size();
    
    return 0;
}
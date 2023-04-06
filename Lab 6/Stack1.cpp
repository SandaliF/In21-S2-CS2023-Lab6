#include <iostream>
#include <cstdlib> 

using namespace std;

class Stack {
    private:
        int top;
        int arraySize;
        int count;
        int* array;

    public:
        Stack(int arraySize) {
            this->arraySize = arraySize;
            top = -1;
            count=0;
            array = new int[arraySize];
        }

        void push(int item) {
            if (top == arraySize - 1) {
                cout << "Stack overflow" << endl;
                return;
            }
            array[++top] = item;
            count++;
        }

        int pop() {
            if (top == -1) {
                cout << "Stack underflow" << endl;
                return -1;
            }
            count--;
            cout<<"One Element is popped"<<endl;
            return array[top--];
        }

        bool isEmpty() {
            if(top==-1)
            {
                cout<<"Stack is empty"<<endl;
            }
            else cout<<"Stack is not empty"<<endl;
            return top == -1;
        }
        
        bool isFull(){
            
            if(top==arraySize-1)
                cout<<"Stack is overflow"<<endl;
            else
                cout<<"Stack is not full"<<endl;
            return top==(arraySize-1);
        }

        // Function to return the top element of the stack
        int StackTop() {
            if (top == -1) {
                cout << "Stack is empty" << endl;
                return -1;
            }
            return array[top];
        }
        
        void display()
        {
            for(int j=count-1;j>=0;j--){
                cout<<array[j]<<" ";
            }
            cout<<endl;
        }
};

int main() {
    srand(time(NULL)); // seed the random number generator with the current time

    int arraySize;
    cout << "Enter the size of the array: ";
    cin >> arraySize;

    Stack S(arraySize);

    for (int i = 0; i < arraySize; i++) {
        int random_value = rand() % 500; // generate a random value between 0 and 99
        S.push(random_value);
        
    }
    S.display();
    S.pop();
    S.push(4);
    S.display();
    S.pop();
    S.pop();
    S.display();

    return 0;
}
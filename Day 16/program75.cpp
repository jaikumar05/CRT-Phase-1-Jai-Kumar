//Stack using Linklist

#include<iostream>
using namespace std;

class StackNode{
    public:
    int data;
    StackNode* next;

    StackNode(int x){
        data = x;
        next = NULL;
    }
};

class Stack{
    private:
    StackNode* top;

    public:
    Stack(){
        top = NULL;
    }

    void push(int x){
        StackNode* newNode = new StackNode(x);
        newNode -> next = top;
        top = newNode;
    }

    void pop(){
        if(top == NULL){
            cout << "Stack underflow" << endl;
            return;
        }
        StackNode* temp = top;
        top = top -> next;
        delete temp;
    }

    int peek(){
        if(top == NULL){
            cout << "Stack is empty" << endl;
            return -1;
        }
        return top -> data;
    }

    bool isEmpty(){
        return top == NULL;
    }
};

int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element: " << s.peek() << endl;

    s.pop();
    cout << "Top element after pop: " << s.peek() << endl;

    s.pop();
    s.pop();
    cout << "Is stack empty? " << (s.isEmpty() ? "Yes" : "No") << endl;

    return 0;
}
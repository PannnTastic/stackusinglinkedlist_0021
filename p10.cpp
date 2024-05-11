#include <iostream>
using namespace std;

class node{
    public :
        int data;
        node *next;

        node(){
            next = NULL;
        }
};

class stack{
    private : 
        node *top;
    public : 
        stack(){
            top = NULL;
        }
    int push (int value){
        node* newnode = new node();
        newnode->data = value;
        newnode->next = top;
        top =  newnode;
        cout << "Push Value : " << value << endl;
        return value;
    }
};

void pop (){
    if (Empty()){
        cout << "Stack is Empty" << endl;
    }
    cout << "Popped Value : " << top->data << endl;
}

void peek (){
    
}

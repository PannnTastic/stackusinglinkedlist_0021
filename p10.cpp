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


    void pop (){
        if (empty()){
            cout << "Stack is Empty" << endl;
        }
        cout << "Popped Value : " << top->data << endl;
    }

    void peek (){
        if (top == NULL){
            cout << "List is Empty" << endl;
        }
        else {
            node *current = top;
            while (current != NULL){
                cout << current->data << " " << endl;
                current = current -> next;
            }
            cout << endl;
        }
    }

    bool empty (){
        return top == NULL;
    }
};

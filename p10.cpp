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

int main (){
    stack st;

    int pil = 0;
    int value;

    while (pil != 4){
        cout << "1.Push\n";
        cout << "2.Pop\n";
        cout << "3.Peek\n";
        cout << "4.Exit\n";
        cout << "Masukkan Pilihan Anda : ";
        cin >> pil;

        switch (pil){
            case 1 : 
                cout << "Enter the Value To Push : ";
                cin >> value;
                st.push(value);
                break;
            case 2 : 
                if (!st.empty()){
                    st.pop();
                }
                else {
                    cout << "Stack is Empty.Cannot Pop." << endl;
                }
                break;
            case 3 : 
                if (!st.empty()){
                    st.peek();
                }
                else {
                    cout << "Stack is Empty. No top Value." << endl;
                }
                break;
            case 4 : 
                cout << "Exiting Program." << endl;
                break;
            default : 
                cout << "Invalid Choice. Try Again." << endl;
                break;
        }
        cout << endl;
    }
}

#include<iostream>
#include"a.cpp"
using namespace std;

class stackLL{
    public :
    Node *top;
    LinkedList l1;
    stackLL(){
    top=NULL;
    }
    //insert at pos 1
    void push(int value){
        //get it from prevprog
        if(top==NULL){
        l1.inset(value);}
        else{
            l1.insertAt(1,value);
        }

        //top =new head;
        top=l1.head;
    }
    //delete at pos 1
    void pop(){
        l1.deleteAt(1);
        top=l1.head;
    }

    bool isEmpty(){
    if(top ==NULL) return true;
    return false;
    }
    int size(){
        return l1.counts();
    }
    int topDisplay(){
        return l1.head->data;
    }
    void display(){
        l1.display();
    }

};

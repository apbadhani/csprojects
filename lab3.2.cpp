# include<iostream>
using namespace std;
//define Node
class Node{
public:
	int data;
	Node * next;
Node(){
	next=NULL;
}
};
//DEFINE LINKED LIST
class LinkedList{
public:
	Node * head;
	Node * tail;
LinkedList(){
	head=NULL;
	tail=NULL;
}
//INSERT
	void insert(int m){
	//create new Node
		Node * temp= new Node;
	//insert data
		temp->data=m;
	//if the linled list was empty
	if(head==NULL)
		head=temp;
	else{
		tail->next=temp;

	}
	temp->next=head;
	tail=temp;
	}
                                                                             //INSERT AT POSITION
	void insertAt(int pos,int x){
	if(pos>countItems()+1){
		cout<<"Linked List does not have that many elements"<<endl;
	}
	else{                                                               //create Node and input data 
                Node * temp=new Node;
		temp->data=x;
		Node * current=head;
	if(pos==1){
		temp->next=head;
		head=temp;
		tail->next=temp;
	}
	else{   int k=1;
		while(k<(pos-1)){
			current=current->next;
			k++;
		}
	                                                                   // link pointers
		temp->next=current->next;             
		current->next=temp;
	}
        }
	}
//DELETE
	void delet(){
	                                                                         // store the tail in temp
       		 Node * temp = tail;
                 Node * current = head;                                         // point tail to null
       		 while(current->next != tail){
           	 current = current->next;
      		  }
       		 current->next = head; 

                                                                               // update tail
        	tail = current;
                                                                               // delete temp
         	delete temp;
	}
//DELETE AT
	void deletAt(int pos){
		//reach the posn
		Node * current = head;
		int j=1;
		while(j<(pos)){
			current=current->next;
			j++;
		}
		if(pos>countItems()){
		cout<<"ELEMENT NOT EXIST"<<endl;
		}
		else if(pos==1){
			head=current->next;
			tail->next=current->next;
			delete current;
		}
		else if(pos==countItems()){
		                                                               // store the tail in temp
       			 Node * temp = tail;
        	                                                              // before tail has to point to null
        		Node * current1 = head;
        		while(current1->next != tail){
           			 current1 = current1->next;
        		}
        		current1->next = head;
        		                                                     // update tail
      			 	 tail = current1;
        		                                                     // delete temp
        			 delete temp;
		}
		else{
			int a=1;
        		Node * current2 = head;
        		while(a<(pos-1)){
           			 current2 = current2->next;
				 a++;
        		}
        		current2->next = current->next;
        		                                                       // delete current
        			 delete current;
		}
	}
  
                                                                               //count items
    int countItems(){
        int b=2;
                                                                              // point tail to null
        Node * current = head;
        while(current->next != head){
            current = current->next;
            ++b;
        } 
        return b;
    }

//DISPLAY
	void display(){
	Node * current=head;
	while(current->next!=head){
		cout<<current->data<<"->";
		current=current->next;
	}
	cout<<current->data<<"->NULL"<<endl;
	}

};
int main(){
LinkedList l1;
l1.insert(20);
l1.insert(14);
l1.insert(9);
l1.insert(78);
l1.insert(67);
l1.display();
l1.insertAt(1,7);
l1.display();
l1.delet();
cout<<l1.countItems()<<endl;
l1.display();
l1.deletAt(2);
l1.display();
return 0;
}

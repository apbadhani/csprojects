#include <iostream>
using namespace std;
class node
{
public:
	node*pre;
        //Defining a pointer to the previous node
	node*late;
        //Defining a pointer to the next node
	int data;
	//Default Constructor
	node()
	{
		pre=NULL;
		late=NULL;
	}
};
class Doublelist
{
public:
	//Defining a pointer to the first node
	node*head;
	//Defining a pointer to the last node
	node*tail;
	//Default constructor
	Doublelist()
	{
		head=NULL;
		tail=NULL;
	}
	void insert(int value)
	{
		node*temp=new node;
		temp->data=value;
		if (head==NULL) head=temp;
		else
		{
			tail->late=temp;
			temp->pre=tail;
		}
		tail=temp;
	}
	void insertAt(int position,int value)
	{
		node*a=head;
		int i=0;
		while (a!=NULL)
		{
			a=a->late;
			i++;
		}
		cout<<i<<endl;
		node*current=head;
		int j=1;
		if(i>=position)
		{	
			while (j<position-1)
			{
				j++;
				current=current->late;
			}

			cout<<current->data<<endl;
			node*temp=new node; 
                        // Creating a new node
			temp->data=value;  
                        //Assigning the required value
			temp->late=current->late;  
                        //Change the successor of temp to current's successor
			temp->pre=current; 
                        //Make temp's predecessor as the current node
			current->late->pre=temp;  
                        //Make current's successor's predecessor as temp
			current->late=temp; 
                        //Make current's successor as temp
		}
		else
		{
			cout<<"Check the number of elements in the list."<<endl;
		}
	}
	void del()
	{
		node*t=tail;
		node*current=head;
		while(current->late->late!=NULL)
		{
			current=current->late;
		}
		cout<<current->data<<endl;
		current->late=NULL;
		current=tail;
		delete t;
	}
	void delAt(int position)
	{
		node*q=head;
		int j=0;
		while (q!=NULL)
		{
			q=q->late;
			j++;
		}
		if (j>=position)
		{
			node*current=head;
			int i=1;
			while (i<position-1)
			{
				current=current->late;
			}
			node*temp=current->late;
			current->late=temp->late;
			temp->late->pre=current;
			delete temp;
		}
		else cout<<"Check the number of entries in the list."<<endl; 
	}
	void count()
	{
		node*t=head;
		int i=0;
		while (t!=NULL)
		{
			t=t->late;
			i++;
		}
		cout<<"The nummber of entries in your list is : "<<i<<endl;
	}
	void display()
	{
		node*temp=head;
		while(temp!=NULL)
		{
			cout<<temp->data<<" -> ";
			temp=temp->late;
		}
		cout<<endl;
	}
};
int main()
{
	Doublelist l;
	l.insert(3);
	l.insert(4);
	l.insert(45);
	l.count();
	l.display();
	l.insertAt(3,855);
	l.count();
	l.display();
	l.del();
	l.count();
	l.display();
	l.insert(245);
	l.insert(3535);
	l.insertAt(3,735);
	l.count();
	l.display();
	l.del();
	l.count();
	l.display();
	l.delAt(2);
	l.count();
	l.display();
	return 0;
}

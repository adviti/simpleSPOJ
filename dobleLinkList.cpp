#include<iostream>
using namespace std;

class Node
{
	public:
	Node* next;
    Node* previous;
	int data;
	Node()
	{
		next = NULL;
        previous = NULL;
		data = 0;
	}
		
};

class doubleLinkList
{
	public:
	Node* head;
    doubleLinkList()
	{
		head = NULL;
	}
	void append(int n);
	void add(int n, int pos);
	void removal(int pos);
	void display();
};

void doubleLinkList::append(int n)
{
    Node* temp = new Node();
    temp->data = n;
    
    if(head==NULL) head = temp;
    else
    {
        Node* temp1;
        temp1 = head;
        
        while(temp1->next)
        {
            temp1 = temp1->next;
        }
        
        temp1->next = temp;
        temp->previous = temp1;
        
    }
    
}

void doubleLinkList::display()
{
	if(head==NULL)
	cout<<"empty linklist"<<endl;
	else
	{
		Node *temp1;
		temp1 = head;
		while(temp1)
		{
			cout<<temp1->data<<endl;
			temp1 = temp1->next;
        }
        
        
	}
}

void doubleLinkList::display()

int main()
{
	doubleLinkList l;
	l.append(1);
	l.append(30);
	l.append(31);
	//l.add(123, 1);
	
	l.display();
	//l.removal(3);
	cout<<endl;
	//l.display();
	return 0;
}


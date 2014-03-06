#include<iostream>
using namespace std;

class Node
{
	public:
	Node* next;
	int data;
	Node()
	{
		next = NULL;
		data = 0;
	}
		
};

class LinkList
{
	public:
	Node* head;
	LinkList()
	{
		head = NULL;
	}
	void append(int n);
	void add(int n, int pos);
	void removal(int pos);
	void reverse(Node** head);
	void insertAlternatepos(LinkList, LinkList);
	void display();
    void reform();
    int counter();
    
    
};
//reform:  Given linked list as a-x-b-y-c-z
    // output it as a-b-c-z-y-x
    //that is reverse alternate element and append to end of list

void LinkList::reform()
{
    if(this->counter()==1 or this->counter()==2) return;
    
    
    if(head)
    {
        Node* head1 = head;
        Node* head2 = head->next;
        Node* temp = head1;
        Node* curr2;
        //temp traverses in the list and is current node of the first list.
        //curr2 current node of the second list.
        while(temp->next->next)
        {
          Node* temp1 = temp->next;
          curr2 = temp1;
          temp->next = curr2->next;
          curr2->next = temp->next->next;
          temp = temp->next;
          curr2 = curr2->next;
        }
        reverse(&head2);
        temp->next = head2;
    }
}

/*void deleteNafterM(LinkList l1, int m, int n)
{
	counM = 0;
	counN = 0;
}*/

void LinkList::reverse(Node** head)
{
	Node* temp1, *temp2, *temp3;
	
	temp1 = *head;
	temp2 = temp1->next;
	temp1->next = NULL;
	temp3 = temp2->next;
	while(temp3)
	{
		
		//cout<<temp1->data<<" "<<temp2->data<<endl;
		temp2->next = temp1;
		temp1 = temp2;
		temp2 = temp3;
		temp3 = temp3->next;
	}
	temp2->next = temp1;
	*head = temp2;
}

void LinkList::insertAlternatepos(LinkList l1, LinkList l2)
{
	Node* head1 = l1.head;
	Node* head2 = l2.head;
	Node* temp1, *temp2, *temp3;
	
	temp1 = head1;
	temp2 = head2;
	
	while(temp1)
	{
		if(l2.head==NULL) 
		{
			//l1.display(); 
			return;
		} 
		else
		{
			if(temp1->next)
			{
				temp2 = l2.head;
				temp3 = temp1->next;
				l2.head = temp2->next;
				temp2->next = NULL;
				//cout<<temp2->data<<" dwehjfb"<<endl;
				temp1->next = temp2;
				
				temp2->next = temp3;
				temp1 = temp3;
			}
			else
			{
			//	l1.display();
				//cout<<"second list"<<endl;
				//l2.display();
				return;
			}
		}
	}
}

void LinkList::removal(int pos)
{
	if(head==NULL)
	{
		cout<<"empty linklist"<<endl;
	}
	else
	{
		Node* temp;
		temp = head;
		if(pos==1)
		{
			
			head = temp->next;
		}
		else
		{
			int coun=1;
			while(coun<pos-1)
			{
				coun++;
				temp = temp->next;
				
			}
			Node* temp2;
			if(temp->next->next)
			{temp2 = temp->next->next;
			
			temp->next = temp2;
			}
			else
			{
			temp->next = NULL;
		}
		}
	}
}

void LinkList::append(int n)
{
	Node *temp = new Node();
	temp->data = n;
	
	if(head==NULL)
	{
		head = temp;
	}
	else
	{
		Node *temp1;
		temp1 = head;
		while(temp1->next)
		{
			temp1 = temp1->next;
		}
		temp1->next = temp;
	}
	
}

void LinkList::add(int n, int pos)
{
	Node *temp = new Node();
	temp->data = n;
	
	Node* temp1;
	Node* temp2;
	if(head==NULL)
	{
		head = temp;
	}
	else
	{
		if(pos==1)
		{
			temp1 = head;
			head = temp;
			temp->next = temp1;
		}
		else
		{
			temp1 = head;
			int coun = 0;
			while(coun!=pos-2)
			{
				coun++;
				temp1 = temp1->next;
			}
			temp2 = temp1->next;
			temp1->next = temp;
			temp->next = temp2;
}
	}
}
void LinkList::display()
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
int LinkList::counter()
{
    int num=0;
	if(head==NULL)
	return 0;
	else
	{
		Node *temp1;
		temp1 = head;
		while(temp1)
		{
			num++;
			temp1 = temp1->next;
		}
        return num;
	}
}


int main()
{
	LinkList l, l1, l2;
	l1.append(1);
	l1.append(2);
	l1.append(3);
	l1.append(4);
    l1.append(10);
	l1.append(11);
	l1.append(13);
	l1.append(14);
	
	l2.append(10);
	l2.append(11);
	l2.append(13);
	l2.append(14);
	l2.append(15);
	//l2.reverse(&l2.head);
	//l2.display();
	
	
	//l2.insertAlternatepos(l1, l2);
	l1.display();
	l.append(1);
	l.append(30);
	l.append(31);
	l.add(123, 1);
	
	//l.display();
	//l.removal(3);
    
	cout<<endl;
    l1.reform();
    l1.display();
	//l.display();
	return 0;
}

#include<bits/stdc++.h>


using namespace std;

struct Node 
{
	int data;
	
	struct Node * next;
};

void linkedlisttraversal(struct Node *ptr)
{
	while(ptr!=NULL)
	{
	
	cout<<ptr->data<<"->";
	ptr=ptr->next;
   }
   cout<<"NULL";
}
int length(struct Node * Head)
{
	int l=0;
	struct Node * temp=Head;
	while(temp!=NULL)
	{
		l++;
		temp=temp->next;
	}
	return l;
}
struct Node * Kappend(struct Node *Head,int k)
{
struct Node * newHead;
struct Node * newtail;
struct Node * tail=Head;	
int l=length(Head);
int count=1;
k=k%l;
while(tail->next!=NULL)
{
	if(count==l-k)
	{
		newtail=tail;
	}
	if(count==l-k+1)
	{
		newHead=tail;
	}
	tail=tail->next;
	count++;
}
newtail->next=NULL;
tail->next=Head;

return newHead;
}
int main()

{
	
	struct Node * Head ;
	struct Node * second ;
	struct Node * third ;
	struct Node * fou ;
	struct Node * fif ;
	struct Node * six ;
	
	Head=(struct Node *) malloc (sizeof (struct Node));
	second=(struct Node *) malloc (sizeof (struct Node));
	third=(struct Node *) malloc (sizeof ( struct Node));
		fou=(struct Node *) malloc (sizeof ( struct Node));
			fif=(struct Node *) malloc (sizeof ( struct Node));
				six=(struct Node *) malloc (sizeof ( struct Node));
	Head->data=7;
	Head->next=second;
	second->data=13;
	second->next=third;
	third->data=19;
	third->next=fou;
	fou->data=33;
	fou->next=fif;
	fif->data=37;
	fif->next=six;
	six->data=39;
	six->next=NULL;
	
	
	linkedlisttraversal(Head);
	cout<<"\n";
	
	Head=Kappend(Head,3);
	
	linkedlisttraversal(Head);
	
	return 0;
}

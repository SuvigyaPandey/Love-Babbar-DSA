//Insertion at head in singly Linked_List

#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }

};

//lets insert in the head

void Insertathead(Node* &head,int data){
    //create a temp node
    Node* temp=new Node(data);
    temp->next=head;
    head=temp;
}
void print(Node* &head){

    Node*temp=head;
    
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;

}

int main()
{
    Node* node1=new Node(10);
    Node* head=node1;
    Insertathead(head,12);
    print(head);
    Insertathead(head,15);
    print(head);

}

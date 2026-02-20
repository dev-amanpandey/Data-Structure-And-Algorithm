#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;

    }
};
class LinkedList{
    public:
    Node* head;
    Node* tail;
    int size=0;
    LinkedList(){
    head = tail = NULL;
    size=0;
}
void insertAtEnd(int val){
    Node* temp= new Node(val);
    if(size==0) head = tail=temp;
    else{
        tail->next=temp;
        temp->prev=tail;
        tail=temp;
    }
    size++;
}
void inserAtHead(int val){
    Node* temp = new Node(val);
    if(size==0) head= tail = temp;
    else{
        temp->next = head;
        head->prev=temp;
        head = temp;
    }
    size++;
}
void inserAtIdx(int idx, int val){
    if(idx<0 || idx>size){
        cout<<"Invalid Index"<<endl;
        return;
    }
    if(idx==0){
        inserAtHead(val);
        return;
    }
    if(idx==size){
        insertAtEnd(val);
        return;
    }
    else{
    Node* t = new Node(val);
    Node* temp = head;
    for(int i=0;i<idx-1;i++){
        temp=temp->next;
    }
    t->next=temp->next;
    temp->next=t;
    t->prev=temp;
    temp->next->prev=t;
    size++;
}
}
void deleteAtHead(){
    if(size==0){
        cout<<"List is empty"<<endl;
        return ;

    }
    head = head->next;
    if (head) head->prev=NULL;
    if(head==NULL) tail = NULL;
    size--;
}
void deleteAtTail(){
    if(size==0){
        cout<<"List is empty"<<endl;
        return ;
    }
    else if(size==1){
        deleteAtHead();
        return ;
    }
    Node* temp = tail->prev;
    temp->next = NULL;
    tail= temp;
    size--;
}
void deleteAtIdx(int idx){
    if(size==0){
        cout<<"List is empty"<<endl;
        return;
    }
    else if(idx<0|| idx>=size){
        cout<<"Invalid Index";
        return;

    }
    else if (idx==0) return deleteAtHead();
    else if(idx==size-1) return deleteAtTail();
    else{
    Node* temp = head;
    for(int i=0;i<idx-1;i++){
        temp=temp->next;
    }
    temp->next=temp->next->next;
    temp->next->prev=temp;
    
    size--;
}
}
int getAtIdx(int idx){
    if(idx<0 || idx>=size){
        cout<<"Invalid Index";
        return -1;
    }
    else if (idx==0) return head->val;
    else if(idx==size-1) return tail->val;
    else{
        if(idx<size/2){
            Node* temp = head;
            for(int i=1; i<idx; i++){
                temp=temp->next;
            }
            return temp->val;
        }
        else{
            Node* temp= tail;
            for(int i=1; i<size-idx; i++){
                temp = temp->prev;
            }
            return temp->val;
        }
    }
}
    
void display(){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
};

int main(){
    LinkedList ll;//{}
    ll.insertAtEnd(10);//{10->NULL}
     ll.display();
    ll.insertAtEnd(20);//{10->20->NULL}
    ll.display();
    ll.insertAtEnd(30);
    ll.display();
    ll.inserAtHead(50);
    ll.display();
    ll.inserAtIdx(2, 60);
    ll.display();
    ll.deleteAtTail();
    ll.display();
     ll.deleteAtHead();
    ll.display();
    ll.insertAtEnd(30);
    ll.display();
    ll.insertAtEnd(90);
    ll.display();
    //  ll.deleteAtIdx(3);
    //  ll.display();
    ll.getAtIdx(3);
    cout<<ll.getAtIdx(3)<<endl;
    
}
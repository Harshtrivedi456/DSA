#include<iostream>
using namespace std;
class node{
   public: 
  int data;
  node*next;
  node(int val){
    data=val;
    next=nullptr;
     }  
};

class linkedlist{
  private: 
   node*head;
  public:
   linkedlist(){
    head=nullptr;
     } 

 void insert_at_begin(int data){
    node*newnode=new node(data);
    newnode->next=head;
    head=newnode;
 }
 void insert_at_last(int data){
    node*newnode=new node(data);
    if(head==nullptr){
     return;
}
    node*temp=head;
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    temp->next=newnode;
 }
 bool searching(int key){
        if(head==nullptr){
    cout<<"empty linked list"<<" ";
    return false ;
}

    node*temp=head;
    while(temp!=nullptr){
       if(temp->data==key){
        return true;
       }
        temp=temp->next;
    }
    return false;
  }
 
  void display(){
if(head==nullptr){
    cout<<"empty linked list"<<" ";
    return;
}

    node*temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
  }
};

int main(){
    linkedlist list;
    list.insert_at_begin(3);
    list.insert_at_begin(4);
    list.insert_at_begin(5);
    list.insert_at_begin(6);
    list.insert_at_begin(7);
    list.insert_at_begin(8);
    list.insert_at_last(44);
    list.insert_at_last(9);
    list.insert_at_last(55);
    list.insert_at_last(77);
    list.insert_at_last(88);
    list.insert_at_last(22);
    list.insert_at_last(100);
    // list.searching(2);

    list.display();
    bool flag=list.searching(2);
    if(flag){
        cout<<"element found";
    }
    else{
        cout<<"element not found";
    }
 
};
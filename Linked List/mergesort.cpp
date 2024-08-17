// #include<iostream>
// using namespace std;
// class node{
// public:
//     int data;
//     node*next;
//     node(int val)
//     {
//         data=val;
//         next=nullptr;
//     }
// };

// class singlyll{
//     private:
//     node*head;
//     public:
//     singlyll(){
//         head=nullptr;
//     }
//     void insert_at_end(int val){
//           node*newnode=new node(val);
//           if(head==nullptr){
//             head=newnode;
//             return;
//         }
//     node*temp=head;
//     while(temp->next!=nullptr){
//         temp=temp->next;
//     }
//     temp->next=newnode;
// }
//    void display(){
//     node*temp=head;
//     while(temp!=nullptr){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//         }
//    }
// };
// void merge(node*list1,node*list2)
// {    node*temp1=list1;
//     node*temp2=list2;    
//     singlyll result;

//    while(list1!=nullptr && list2!=nullptr){
//         if(temp1->data<temp2->data){
//             result.insert_at_end(temp1->data);
//             list1=list1->next;
//         }
//         else{
//             result.insert_at_end(temp2->data);
//             temp2=temp2->next;
//         }
//    }
//    while (temp1!=nullptr){
//     result.insert_at_end(temp1->data);
//     temp1=temp1->next;
//    }
   
//    while (temp2!=nullptr){
//     result.insert_at_end(temp2->data);
//     temp2=temp2->next;
//    }
//    return.display();};

// int main(){
//     singlyll list1,list2;
//     list1.insert_at_end(1);
//     list1.insert_at_end(3);
//     list1.insert_at_end(5);
//     list1.insert_at_end(7);

//     list2.insert_at_end(2);
//     list2.insert_at_end(4);
//     list2.insert_at_end(6);

//     list1.display();
//     cout<<"\n";

//     list2.display();
//     cout<<"Merging of sorted linkedlist "<<endl;
//     list1.merge(list.geth)
//     return 0;
// }
#include <iostream>
using namespace std;
class node {
public:
int coef,exp;
node*next;
node(int co,int ex){
    coef=co;
    exp=ex;
    next=nullptr;
}
};
class linklist{
    private:
    node*head;
    public:
    linklist(){
        head = nullptr;
    }
void insert_at_end(int co,int ex){
    node*newnode = new node(co,ex);
    node*temp=head;
    if(temp==nullptr){
        head=newnode;
        return;
    }
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    temp->next=newnode;
}
void display(){
    if(head==nullptr){
        cout<<"EMPTY link list";
    }
    node*temp=head;
    while (temp!=0)
    {
    cout<<temp->coef<<"x^"<<temp->exp<<" ";
    temp=temp->next;
    }
}
};
int main(){
    linklist l1;
    l1.insert_at_end(5,2);
    l1.insert_at_end(4,3);
    l1.insert_at_end(3,2);
    l1.insert_at_end(2,1);
    l1.insert_at_end(1,7);
    l1.display();
}
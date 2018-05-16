#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;
};
node* head;
void insert(int data){
    node* temp=(node*) new node;
    temp->data=data;
    temp->next=NULL;
    if(head!=NULL){
        temp->next=head;
    }
    head=temp;
}
void print(){
    node* temp= (node*) new node;
    temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"\t";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    int num,data;
    head=NULL;
    cout<<"How many data?"<<endl;
    cin>>num;
    for(int i=0;i<num;i++){
        cout<<"Enter the data"<<endl;
        cin>>data;
        insert(data);
        print();
    }

}


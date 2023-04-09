#include <bits/stdc++.h>
using namespace std;
 
struct Node {
    int data;
    struct Node* next;
};
 

struct Node* head;

void insert(int data, int n)
{
    Node* temp1 = new Node();
    temp1->data = data;
    temp1->next = NULL;
    
    if(n==1){
        temp1->next=head;
        head=temp1;
        return;
    }
    
    Node* temp2 = head;
    
    for(int i=0; i<n-2; i++){
        temp2=temp2->next;
    }
    
    temp1->next=temp2->next;
    temp2->next=temp1;
    
}

void print(){
    Node* temp=head;
    while(temp!=NULL){
        cout << temp->data <<" ";
        temp=temp->next;
    }
    cout << endl;
}
 
int main()
{
    head = NULL;
    insert(10,1);
    insert(20,2);
    insert(30,3);
    insert(40,4);

    cout << "List before Insertion: ";
    print();
    
    insert(50,2);
    
    cout << "List after Insertion : ";
    print();

    return 0;
}
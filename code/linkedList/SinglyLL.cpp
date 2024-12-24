#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int data){
            this -> data = data;
            this -> next = NULL;
        }

        ~Node(){
            int value = this -> data;
            if(this -> next != NULL){
                delete next;
                this -> next = NULL;
            }
            cout<<"memory free! with data: "<<data<<endl;
        }
};

//Insert at Front
void InsertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

//Insert at Back
void InsertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = tail -> next;
}

//Insert in Middle
void InsertAtPosition(Node* &head, Node* &tail, int n, int d){
    if(n == 1){
        InsertAtHead(head, d);
        return;
    }
    
    Node* temp = head;
    int count = 1;
    //Traverse to each node
    while(count < n-1 && temp -> next != NULL){
        temp = temp -> next;
        count++;
    }

    if(temp -> next == NULL){
        InsertAtTail(tail, d);
        return;
    }
    Node* middle = new Node(d);
    middle -> next = temp -> next;
    temp -> next = middle;
}

void deleteNode(Node* &head, Node* &tail, int n){
    if(n == 1){
        Node* temp = head;
        head = head -> next;
        temp -> next = NULL;
        delete temp;
    }
    else{
        Node* prev = NULL;
        Node* curr = head;

        int count = 0;
        while(count < n-1 && curr -> next != NULL){
            prev = curr;
            curr = curr -> next;
            count++;
        }

        if(curr -> next == NULL){
            tail = prev;
        }
        
        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }
}

// Print Linked List
int print(Node* &head){
    Node* temp = head;
    int count = 0;
    while (temp != NULL)
    {
        cout<<temp -> data<<" ";
        temp = temp -> next;
        count++;
    }
    cout<<endl;
    cout<<"Size: "<<count<<endl;
    return count;
}


int main()
{    
    //created new node
    Node* node = new Node(10);
    // cout << node -> data << endl;   
    // cout << node -> next << endl;

    //Point head to node
    Node* head = node;
    Node* tail = node;

    // Insertion
    print(head);
    InsertAtHead(head, 92);
    InsertAtTail(tail, 34);
    InsertAtHead(head, 23);
    InsertAtTail(tail, 54);
    InsertAtPosition(head, tail, 3, 22);
    InsertAtPosition(head,tail, 1, 52);
    print(head);
    InsertAtPosition(head, tail, 10, 42);
    print(head);
    cout<<"head "<< head -> data<<endl;
    cout<<"tail "<< tail -> data<<endl;

    // Deletion
    deleteNode(head, tail, 1);
    print(head); 
    deleteNode(head, tail, 4);
    print(head);
    deleteNode(head, tail, 7);
    print(head);

    cout<<"head "<< head -> data<<endl;
    cout<<"tail "<< tail -> data<<endl;
    return 0;
}
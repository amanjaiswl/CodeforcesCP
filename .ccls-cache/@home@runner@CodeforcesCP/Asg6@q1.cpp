#include <iostream>

using namespace std;

struct Node{
int data;
Node* next;
Node(int data) : data(data), next(nullptr){}
};


void insert(Node** head, int data){
  Node *newNode = new Node(data);
  if(*head == nullptr){
    *head = newNode;
  }
  else {
    Node *last = *head;
    while(last->next != nullptr){
      last = last->next;
    }
    last->next = newNode;
  }
}


Node *removeDuplicates(Node *head){
  Node* current = head;
  while(current != nullptr && current->next != nullptr){
    if(current->data == current->next->data){
      Node *next_next = current->next->next;
      delete current->next;
      current->next = next_next;
      
    }
    else{
      current = current->next;
    }
  }
  return head;
}


void print(Node *head){
  while(head!= nullptr){
    cout << head->data << " ";
    head = head->next;
  }
  cout << endl;
}



int main() {
    Node* head = nullptr;
    int n, value;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements in sorted order: ";
    for (int i = 0; i < n; i++) {
        cin >> value;
        insert(&head, value);
    }
    cout << "Original linked list: ";
    print(head);
    cout << endl;
    head = removeDuplicates(head);
    cout << "Linked list after removing duplicates: ";
    print(head);

    return 0;
}

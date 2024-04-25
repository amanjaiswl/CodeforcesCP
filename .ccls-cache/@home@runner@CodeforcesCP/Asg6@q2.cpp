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

int NfromLast(Node *head, int N){
  Node *current = head;
  Node *temp = head;
  int count = 0;
  while(current != nullptr){
    current = current->next;
    count++;
    
  }
  int k = count - N;
  for(int i=0; i<k; i++){
    temp = temp->next;
    
  }
  return temp->data;
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

    cout << "Enter " << n << " elements for Linked List: ";
    for (int i = 0; i < n; i++) {
        cin >> value;
        insert(&head, value);
    }
    cout << "Linked list: ";
    print(head);

    int N;
    cout << "Give N (element to know from last)" << endl;
    cin >> N;
    cout << NfromLast(head, N) << endl;
    return 0;
}

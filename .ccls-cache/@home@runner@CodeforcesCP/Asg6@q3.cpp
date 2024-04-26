#include <iostream>

using namespace std;

struct Node{
  int data;
  Node *next;
  Node *prev;
  Node(int data) : data(data), next(nullptr), prev(nullptr){}
};

void insert(Node **head, int data){
  Node *newNode = new Node(data);
  if(*head == nullptr){
    *head = newNode;
  }
  else{
    Node *last = *head;
    while(last->next != nullptr){
      last = last->next;
      
    }
    last->next = newNode;
    newNode->prev = last;
    
  }
}

void insertAtRightPlace(Node **head, int data){
  Node *newNode = new Node(data);
  if(*head == nullptr){
    *head = newNode;
  }
  else{
    Node * current = *head;
    while(current->next != nullptr && current->next->data < data){
      current = current->next;
      
    }
    if(current->next == nullptr){
      current->next = newNode;
      newNode->prev = current;
      
    }
    else{
      newNode->next = current->next;
      newNode->prev = current;
      current->next->prev = newNode;
      current->next = newNode;
      
    }
    
    
  }
  }


void print(Node *head){
  while(head!= nullptr){
    cout << head->data << " ";
    head = head->next;
    
  }
  cout << endl;
}

int main(){
  int n;
  cout << "give number of elems" << endl;
  cin >> n;

  Node *head = nullptr;

  cout << "give elems in ascending order" << endl;
  for(int i =0; i<n; i++){
    int data;
    cin >> data;
    insert(&head, data);
    
  }
  cout<< "linked list: ";
  print(head);

  int elem;
  cout << "give elem to insert: ";
  cin >> elem;
  insertAtRightPlace(&head, elem);

  cout << "after insertion: ";
  print(head);
  return 0 ;
}
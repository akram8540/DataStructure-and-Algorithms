#include <bits/stdc++.h>
using namespace std;

class Node {
   public:
  int value;
  Node* next;
};

int main() {
    Node* head;
    Node* one = NULL;
    Node* two = NULL;
    Node* three = NULL;

    one = new Node();
    two = new Node();
    three = new Node();

    one->value = 10;
two->value = 20;
three->value = 30;

one->next = two;
two->next = three;
three->next = NULL;

head = one;

cout << "\nThe list is: ";
while (head != NULL) {
cout << head->value << " ";
head = head->next;
}
cout << endl << endl;
}
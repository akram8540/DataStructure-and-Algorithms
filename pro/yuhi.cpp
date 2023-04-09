#include <iostream>

struct Node {
  char data;
  Node* next;
  Node(char c) : data(c), next(NULL) {}
};

bool isCharInList(Node* head, char c) {
    Node* current = head;
    while (current != NULL) {
      if (current->data == c) {
        return true;
      }
      current = current->next;
    }
    return false;
}

int main() {
    Node* head = new Node('M');
    head->next = new Node('A');
    head->next->next = new Node('N');
    head->next->next->next = new Node('G');
    head->next->next->next->next = new Node('O');

    char given_char = 'x';

    if (isCharInList(head, given_char)) {
      std::cout << given_char << " is present in the list" << std::endl;
    } else {
      std::cout << given_char << " is not present in the list" << std::endl;
    }

    return 0;
}
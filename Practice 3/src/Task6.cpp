#include <iostream>

using namespace std;
struct Node {
    int data;
    struct Node *next;
};
struct List {
    int size;
    struct Node *head;
};
typedef List *list;

//initializes the members of the l
void makeEmpty(list l) {
    l->head = nullptr;
    l->size = 0;
}

//returns true if the list is empty, false otherwise
bool isEmpty(list l) {
    return l->size == 0;
}

void printNodeGoNext(Node *node) {
    cout << node->data << " ";
    if (node->next != nullptr) {
        printNodeGoNext(node->next);
    }
}

//prints the list in a single line with spaces and a new line at
void printList(list l) {
    if (isEmpty(l)) {
        cout << "List is empty \n";
        return;
    }
    cout << "Current list state: ";
    printNodeGoNext(l->head);
    cout << "\n";
}

//inserts a node at the start of the list
void insertFront(list l, int x) {
    auto buffer = l->head;
    l->head = new Node;
    l->head->next = buffer;
    l->head->data = x;
    l->size++;
}

//inserts a node at the end of the list
void insertBack(list l, int x) {
    if (isEmpty(l)) {
        l->head = new Node;
        l->head->next = nullptr;
        l->head->data = x;
        l->size++;
        return;
    }
    auto current = l->head;
    while (current->next) {
        current = current->next;
    }
    current->next = new Node;
    current->next->next = nullptr;
    current->next->data = x;
}

//deletes the first node at the head of the list
void deleteFront(list l) {
    if (isEmpty(l)) {
        return;
    }
    auto buffer = l->head->next;
    delete l->head;
    l->head = buffer;
    l->size--;
}

void freeNodes(Node * node){
    if(node== nullptr){
        return;
    }
    freeNodes(node->next);
    delete node;
}

int main(int argc, char **argv) {
    list l = new List;
    makeEmpty(l);
    printList(l);
    insertBack(l, 1);
    printList(l);
    insertBack(l, 2);
    printList(l);
    insertFront(l, 3);
    insertFront(l, 4);
    insertFront(l, 5);
    printList(l);
    deleteFront(l);
    insertFront(l, 6);
    insertBack(l, 7);
    insertBack(l, 8);
    printList(l);
    freeNodes(l->head);
    delete l;
//    system("pause"); This line doesn't work on Ubuntu. pause isn't bash command
    return 0;
}
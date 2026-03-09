#include<iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

Node* mergeTwoSortedLists(Node* l1, Node* l2) {
    if (l1 == nullptr) return l2;
    if (l2 == nullptr) return l1;

    Node* mergedHead = nullptr;
    if (l1->data < l2->data) {
        mergedHead = l1;
        mergedHead->next = mergeTwoSortedLists(l1->next, l2);
    } else {
        mergedHead = l2;
        mergedHead->next = mergeTwoSortedLists(l1, l2->next);
    }
    return mergedHead;
}
void printList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}
int main() {
    Node* l1 = new Node(1);
    l1->next = new Node(3);
    l1->next->next = new Node(5);

    Node* l2 = new Node(2);
    l2->next = new Node(4);
    l2->next->next = new Node(6);

    cout << "List 1: ";
    printList(l1);
    cout << "List 2: ";
    printList(l2);

    Node* mergedList = mergeTwoSortedLists(l1, l2);
    cout << "Merged List: ";
    printList(mergedList);

    return 0;
}


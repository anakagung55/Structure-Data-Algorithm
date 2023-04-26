#include <iostream>
#include "LinkedList.h"
using namespace std;

//insertToHeadFunction
void LinkedList::insertToHead(int input){
	
	Node *newNode = new Node();
	newNode->value = input;
	
	newNode->next = head;
	head = newNode;
	
	if (tail==NULL)
		tail = head;
		
}
//insertToTailFunction	
void LinkedList::insertToTail(int input){
    Node *newNode = new Node();
    newNode->value = input;
    newNode->next = NULL;
    
    if (tail == NULL) {
        head = tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
}
//insertAfterFunction
void LinkedList::insertAfter (int input, int after){
    Node *newNode = new Node();
    newNode->value = input;
    newNode->next = NULL;
    
    Node *temp = head;
    while (temp != NULL) {
        if (temp->value == after) {
            if (temp == tail) {
                temp->next = newNode;
                tail = newNode;
            } else {
                newNode->next = temp->next;
                temp->next = newNode;
            }
            break;
        }
        temp = temp->next;
    }
}
//deleteFromHeadFunction
void LinkedList::deleteFromHead(){
    if (head != NULL) {
        Node *temp = head;
        head = head->next;
        delete temp;
        
        if (head == NULL) {
            tail = NULL;
        }
    }
}
//deleteFromTailFunction
void LinkedList::deleteFromTail(){
    if (tail != NULL) {
        Node *temp = head;
        while (temp->next != tail) {
            temp = temp->next;
        }
        delete tail;
        tail = temp;
        tail->next = NULL;
    }
}
//deleteByValueFunction
void LinkedList::deleteByValue(int value){
    if (head == NULL) {
        return;
    }
    
    if (head->value == value) {
        deleteFromHead();
        return;
    }
    
    Node *temp = head;
    while (temp->next != NULL) {
        if (temp->next->value == value) {
            Node *toBeDeleted = temp->next;
            temp->next = temp->next->next;
            delete toBeDeleted;
            if (temp->next == NULL) {
                tail = temp;
            }
            return;
        }
        temp = temp->next;
    }
}

//printAllFunction
void LinkedList::printAll(){
	
	Node *tmp = head;
	while (tmp!=NULL){
		cout << tmp->value << "->";
		tmp = tmp->next;
	}
	cout <<endl;
}

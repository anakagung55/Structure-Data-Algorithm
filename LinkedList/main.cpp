#include <iostream>
#include "LinkedList.h"
using namespace std;

//main//
int main(int argc, char** argv) {
	
	LinkedList List1;
	
	List1.insertToHead(10);
	List1.insertToHead(20);
	List1.insertToHead(30);
	List1.insertToHead(50);
	List1.insertToHead(60);
	
	cout << "head: " << List1.head->value <<endl;
	cout << "tail: " << List1.tail->value <<endl;
	cout << List1.head->next->next->value <<endl;
	
	List1.printAll();

	
	//insertToHeadValue
	List1.insertToHead(24);					
	
	List1.printAll();
	//insertTotailValue
	List1.insertToTail(54);
    	List1.insertToTail(65);
    
   	List1.printAll();
    	//insertAfterValue
    	List1.insertAfter(98, 20);
    	List1.printAll();
    
    	//deleteFromHeadValue
    	List1.deleteFromHead();
    	List1.printAll();

    	//deleteFromTailValue
    	List1.deleteFromTail();
    	List1.printAll();

    	//deleteByValue
    	List1.deleteByValue(98);
    	List1.deleteByValue(54);
    	List1.printAll();
	
	return 0;
} 

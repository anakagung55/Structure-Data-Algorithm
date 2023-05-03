class Node{ // Node class represents each element in the singly linked list
	public:
		int value;
		Node *next;
		
		Node(){
			next=NULL;
		}
};
class Stack{ // Stack class utilizes the Node class to create the stack	
	public:
		Node* top; // pointer to the top of the stack
		
		void push(int );
		void pop();
		bool isEmpty();
		
		void printAll();
		
		Stack(){
			top=NULL; // initialize top to null
		}
};

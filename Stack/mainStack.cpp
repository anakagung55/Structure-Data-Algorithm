#include <iostream>
#include "queue.h"
using namespace std;

int main(int argc, char** argv) {
	Queue queue1;
	
	queue1.enqueue(10);
	queue1.enqueue(20);
	queue1.enqueue(30);
	queue1.enqueue(40);
	queue1.enqueue(50);
	queue1.dequeue();
	
	cout <<"rear: " <<queue1.rear->value<<endl;
	cout <<"front: " <<queue1.front->value<<endl;
	
	queue1.printAll();
	return 0;
}


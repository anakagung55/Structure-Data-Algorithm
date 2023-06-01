#include <iostream>
#include <string>
#include "BinaryTree.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {


int val;
	
	BinaryTree bin;
	
	bin.insert(10);
	bin.insert(5);
	bin.insert(2);
	bin.insert(7);
	bin.insert(15);
	bin.insert(20);
	bin.insert(17);
	bin.insert(25);
	
	bin.insert(30);
	//bin.insert(50);
	
	cout<<"Example."<<endl;
	cout<< bin.root->right->right->Id<<endl<<endl;
	
	cout<<"Output Pre-Order Traversal: "<<endl;
	bin.preOrder();
	cout<< endl;
	cout<<"Output In-Order Traversal: "<<endl;
	bin.inOrder();
	cout<<endl;
	cout<<"Output Post-Order Traversal: "<<endl;
	bin.postOrder();
	
	cout<<endl<<endl;
	cout<<"Enter the value : ";
	cin>>val;
	bin.search(val);
	
	cout<<endl;
	//cout<<"Find Minimum value in the tree"<<endl;
	bin.findMin();
	bin.findMax();
	
 return 0;
}

#include "Heap.h"
#include "Heap.cpp"
int main(int argc, char *argv[]){
	Heap heap = Heap();
	heap.insert();
	heap.insert();
	heap.insert();
	heap.insert();
	heap.insert();
	heap.print();
	heap.increaseKey(4);
	cout << "increased index 4" << endl;
	heap.print();
	heap.increaseKey(0);
	cout << "increased index 0" << endl;
	heap.print();
	heap.increaseKey(1);
	cout << "increased i 1 " <<endl;
	heap.print();
	cout << heap.extractMax() << endl;
	heap.print();
}

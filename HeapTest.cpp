#include "Heap.h"
int main(int argc, char *argv[]){
	Heap heap = new Heap(5);
	heap.insert(0);
	heap.insert(1);
	heap.insert(2);
	heap.insert(3);
	heap.insert(4);
	heap.print();
	heap.increaseKey(0);
	heap.print();
}

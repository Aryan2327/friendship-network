#include "Heap.h"
#include <iostream>
using namespace std;
Heap::Heap(int cap){
	capacity = cap;
	numElements = 0;
	arr = new int[cap];
}
int Heap::left(int i) {
	return (2*i)+1;
}
int Heap::right(int i) {
	return (2*i)+2;
}
int Heap::parent(int i) {
	return (i-1)/2;
}
void Heap::insert(int key) {
	if(numElements == capacity){
		cout << "Overflow Error in insert()\n";
		return;
	}
	int i = numElements;		//inserts key at the end
	numElements++;
	arr[i] = key;
	//may have to implement a fix to the heap here
}
int Heap::extractMax() {
	if(numElements <= 0){
		return -1;			//might have to change
	}
	if(numElements == 1){
		numElements--;
		return arr[0];
	}
	int root = arr[0];
	arr[0] = arr[numElements - 1];
	numElements--;
	maxHeapify(0);
	return root;
}
void Heap::maxHeapify(int i) {
	int l = left(i);
	int r = right(i);
	int max = i;
	if(l < numElements && arr[l] > arr[i])
		max = l;
	if(r < numElements && arr[r] > arr[i])
		max = r;
	if(max != i){
		swap(&arr[i], &arr[max]);
		maxHeapify(max);
	}
}
void Heap::swap(int pos1, int pos2){
	int temp = arr[pos1];
	pos1 = pos2;
	pos2 = temp;
}
void Heap::increaseKey(int i) {
	arr[i] = arr[i] + 1;
	while(i != 0 && arr[parent(i)] < arr[i]){
		swap(i, parent(i));
		i = parent(i);
	}
}
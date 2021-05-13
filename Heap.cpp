#include "Heap.h"
#include <iostream>
using namespace std;
Heap::Heap(){
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
void Heap::insert() {	//no key parameter since all values start at 0
	list.push_back(0);
	//may have to implement a fix to the heap here
}

int Heap::extractMax() {
	int temp = list.front();
	list.erase(list.begin());
	return temp;
}

void Heap::swap(int pos1, int pos2){
	int temp = list[pos1];
	list[pos1] = list[pos2];
	list[pos2] = temp;

}
void Heap::increaseKey(int i) {
	while(i != 0 && list[parent(i)] < list[i]){
		swap(i, parent(i));
		i = parent(i);
	}
}
void Heap::print() {
	for(int i : list){
		cout << i << " ";
	}
	cout << endl;
}
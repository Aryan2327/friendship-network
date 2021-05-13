#include "Heap.h"
#include "Song.cpp"
#include <iostream>
using namespace std;
Heap::Heap(){
	numElements = 0;
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
void Heap::insert(Song s) {	//no key parameter since all values start at 0
	//may have to implement song existence check
	s.resetListens();
	s.setIndex(numElements);
	list.push_back(s);
	numElements++;
	//may have to implement a fix to the heap here
}

Song Heap::extractMax() {
	Song temp = list.front();
	list.erase(list.begin());
	numElements--;
	for(Song s : list){
		s.setIndex(s.getIndex() - 1);
	}
	return temp;
}

void Heap::swap(int pos1, int pos2){
	Song temp = list[pos1];
	list[pos1] = list[pos2];
	list[pos2] = temp;

}
void Heap::increaseKey(int i) {
	hAddListen(list[i]);
	/*while(i != 0 && list[parent(i)].getListens() < list[i].getListens()){
		int temp = i;
		swap(temp, parent(temp));
		list[temp].setIndex(parent(temp));
		list[parent(temp)].setIndex(temp);
	}*/
}
void Heap::print() {
	for(Song s : list) {
		cout << "Title: " << s.getTitle() << endl
			 << "Index: " << s.getIndex() << endl
			 << "Listens: " << s.getListens() << endl << endl;
	}
}
void Heap::hAddListen(Song s) {
	s.addListen();
}
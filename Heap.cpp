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
	print();
	numElements--;
	for(int i = 0; i < numElements; i++){
		Song & temp1 = getSong(i);
		temp1.setIndex(temp1.getIndex() - 1);
	}
	return temp;
}
/*Song Heap::testEM() {
	Song & temp = getSong(0);

}*/

void Heap::swap(int pos1, int pos2){
	Song temp = list[pos1];
	list[pos1] = list[pos2];
	list[pos2] = temp;

}
void Heap::increaseKey(int i) {
	Song & s = getSong(i);
	s.addListen();
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
Song & Heap::getSong(int i) {
	return list[i];
}
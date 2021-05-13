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
	Song & temp = getSong(0);
	list.erase(list.begin());
	numElements--;
	for(int i = 0; i < numElements; i++){
		Song & temp1 = getSong(i);
		temp1.setIndex(temp1.getIndex() - 1);
	}
	return temp;
}

void Heap::swap(int pos1, int pos2){
	Song & s1 = getSong(pos1);
	Song & s2 = getSong(pos2);
	Song & temp = getSong(pos1);
	s1 = s2;
	s2 = temp;
}
void Heap::increaseKey(int i) {
	Song & s = getSong(i);
	s.addListen();
	cout << s.getTitle() << " " << s.getListens() << endl;
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
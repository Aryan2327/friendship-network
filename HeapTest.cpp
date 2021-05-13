#include "Heap.h"
#include "Heap.cpp"
#include "Song.h"
int main(int argc, char *argv[]){
	Heap heap = Heap();
	Song s1 = Song("Song 1");
	Song s2 = Song("Song 2");
	Song s3 = Song("Song 3");
	Song s4 = Song("Song 4");
	Song s5 = Song("Song 5");
	heap.insert(s1);
	heap.insert(s2);
	heap.insert(s3);
	heap.insert(s4);
	heap.insert(s5);
	heap.print();
	heap.increaseKey(s4.getIndex());
	cout << "s4 listens: " << s4.getListens() << endl;
	heap.print();
	/*heap.increaseKey(4);
	cout << "increased index 4" << endl;
	heap.print();
	heap.increaseKey(0);
	cout << "increased index 0" << endl;
	heap.print();
	heap.increaseKey(1);
	cout << "increased i 1 " <<endl;
	heap.print();
	cout << heap.extractMax() << endl;
	heap.print();*/
}

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
	heap.insert(*s1);
	heap.insert(*s2);
	heap.insert(*s3);
	heap.insert(*s4);
	heap.insert(*s5);
	heap.print();
	heap.increaseKey(s4.getIndex());
	cout << "s4 listens: " << s4.getListens() << endl;
	heap.print();
	cout << "s4 listens: " << s4.getListens() << endl;
	cout << "s4 index: " << s4.getIndex() << endl;
}

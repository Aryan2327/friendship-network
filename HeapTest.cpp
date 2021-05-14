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
	heap.insert(&s1);
	heap.insert(&s2);
	heap.insert(&s3);
	heap.insert(&s4);
	heap.insert(&s5);
	heap.increaseKey(s4.getIndex());	//s4 should now be at start
	heap.increaseKey(s4.getIndex());
	heap.increaseKey(s1.getIndex());
	heap.increaseKey(s1.getIndex());
	heap.increaseKey(s1.getIndex());
	Song* s = heap.extractMax();
	cout << s->getTitle() << " " << s->getListens() << " " << s->getIndex() << endl;
	cout << endl;
	heap.print();
}

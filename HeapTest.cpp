#include "Heap.h"
#include "Heap.cpp"
#include "Song.cpp"
#include "Song.h"
int main(int argc, char *argv[]){
	Heap heap = Heap();
	for(int i = 1; i < 10; i++){
		string s = "Song " + i;
		Song ss = Song(s);
		heap.insert(ss);
	}
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

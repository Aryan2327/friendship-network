#ifndef HEAP_H
#define HEAP_H	//might have to change to HEAP_H
#include <vector>
#include "Song.h"
using namespace std;
class Heap{
public:
	Heap();
	int parent(int);
	int left(int);
	int right(int);
	Song* extractMax();
	//Song testEM();
	void reset(Song*);
	void insert(Song*);
	void swap(int, int);
	void increaseKey(unsigned int);	//may need to add another parameter for new value if needed, for now adds 1
	void print();
private:		//WE CAN ADJUST FUNCTIONS AND ADD PRIVATE VARIABLES IF NEEDED
	vector<Song*> list;
	unsigned int numElements;
};
#endif //HEAP_H

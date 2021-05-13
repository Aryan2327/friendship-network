#ifndef CS_240_HEAP_H
#define CS_240_HEAP_H	//might have to change to HEAP_H
#include <vector>
#include "Song.h"
using namespace std;
class Heap{
public:
	Heap();
	int parent(int);
	int left(int);
	int right(int);
	Song extractMax();
	void insert(Song);
	void swap(int, int);
	void increaseKey(int);	//may need to add another parameter for new value if needed, for now adds 1
	void print();
	Song & getSong(int);
private:		//WE CAN ADJUST FUNCTIONS AND ADD PRIVATE VARIABLES IF NEEDED
	vector<Song> list;
	unsigned int numElements;
};
#endif //CS_240_HEAP_H

#ifndef CS_240_HEAP_H
#define CS_240_HEAP_H	//might have to change to HEAP_H
using namespace std;
class Heap{
public:
	Heap(int);
	int parent(int);
	int left(int);
	int right(int);
	int extractMax();
	void maxHeapify(int);
	void insert(int);
	void swap(int, int);
	void increaseKey(int, int);
private:		//WE CAN ADJUST FUNCTIONS AND ADD PRIVATE VARIABLES IF NEEDED
	int *arr; // pointer to array of elements in heap
	int capacity; // maximum possible size of heap
	int numElements; // Current number of elements in heap
};
#endif //CS_240_HEAP_H

#ifndef CS_240_HEAP_H
#define CS_240_HEAP_H	//might have to change to HEAP_H
#include <vector>
using namespace std;
class Heap{
public:
	Heap();
	int parent(int);
	int left(int);
	int right(int);
	int extractMax();
	void insert();
	void swap(int, int);
	void increaseKey(int);	//may need to add another parameter for new value if needed, for now adds 1
	void print();
private:		//WE CAN ADJUST FUNCTIONS AND ADD PRIVATE VARIABLES IF NEEDED
	vector<int> list;
	int *arr; // pointer to array of elements in heap
	int capacity; // maximum possible size of heap
	int numElements; // Current number of elements in heap
};
#endif //CS_240_HEAP_H

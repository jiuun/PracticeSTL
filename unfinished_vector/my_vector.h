#pragma once

#define iterator int*&

class my_vector
{
public:
	my_vector();
	~my_vector();

public:
	// Element access
	int& operator[] (int index);
	int& front();
	int& back();
	int*& data();

	// Iterator
	int*& begin();
	int*& end();

	// Capacity
	bool empty();
	int size();
	void reserve();
	int capacity();

	// Modifiers
	void clear();
	void insert(iterator iter, int num);
	iterator erase(iterator position);
	void push_back(int num);
	void pop_back();

	// Remove element by O(1)
	void removeUnordered(iterator iter);

private:
	const int DEFAULT_CAPACITY;
	int mCapacity;
	int mCount;
	int* mData;
};

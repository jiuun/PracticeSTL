#pragma once

#define iterator int*&

class unfinished_vector
{
public:
	unfinished_vector();
	~unfinished_vector();

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
	// void reserve();
	int capacity();

	// Modifiers
	void clear();
	void insert(iterator iter, int num);
	void push_back(int num);


private:
	const int CAPACITY = 8;
	int mCount;
	int* mData;
};

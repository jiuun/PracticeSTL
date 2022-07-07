#include <assert.h>
#include "unfinished_vector.h"


unfinished_vector::unfinished_vector() :
	mCount(0)
{
	mData = new int[CAPACITY + 1];
}

unfinished_vector::~unfinished_vector()
{
	delete[] mData;
}

int& unfinished_vector::operator[] (int index)
{
	assert(index < mCount);
	return mData[index];
}

int& unfinished_vector::front()
{
	assert(!empty());
	return *mData;
}

int& unfinished_vector::back()
{
	assert(!empty());
	return mData[mCount - 1];
}

int*& unfinished_vector::data()
{
	assert(!empty());
	return mData;
}


// Iterator
int*& unfinished_vector::begin()
{
	assert(!empty());
	return mData;
}

int*& unfinished_vector::end()
{
	assert(!empty());
	int* ret = mData + mCount;
	return ret;
}

// Capacity
bool unfinished_vector::empty()
{
	return mCount == 0;
}
int unfinished_vector::size()
{
	return mCount;
}

// void reserve();
int unfinished_vector::capacity()
{
	return CAPACITY;
}

// Modifiers
void unfinished_vector::clear()
{
	mCount = 0;
}
void unfinished_vector::insert(iterator iter, int num)
{
	for (int* rbegin = end(); rbegin != iter; --rbegin)
	{
		*rbegin = *(rbegin - 1);
	}

	*iter = num;
}

void unfinished_vector::push_back(int num)
{
	if (mCount == CAPACITY)
	{
		return;
	}

	mData[mCount++] = num;
}
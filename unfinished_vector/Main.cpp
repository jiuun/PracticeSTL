#include <assert.h>
#include <vector>
#include "unfinished_vector.h"
#include "my_vector.h"


int main() 
{
	{
		my_vector vec;

		for (int i = 0; i < 16; ++i)
		{
			vec.push_back(i);
		}

		assert(vec.size() == 16);

		vec.clear();

		assert(vec.empty());
		assert(vec.capacity() >= 16);

		for (int i = 0; i < 2048; ++i)
		{
			vec.push_back(i);
		}

		assert(vec.size() == 2048);

		vec.clear();

		assert(vec.empty());
		assert(vec.capacity() >= 2048);
	}

	{
		my_vector vec;

		vec.reserve(8);
		assert(vec.empty());
		assert(vec.capacity() >= 8);

		for (int i = 0; i < 8; ++i)
		{
			vec.push_back(i);
		}

		for (int i = 0; i < 8; ++i)
		{
			iterator start = vec.begin();
			vec.erase(start);
		}

		assert(vec.empty());
	}

	{
		my_vector vec;
		vec.reserve(8);

		for (int i = 0; i < 8; ++i)
		{
			vec.push_back(i);
		}

		for (int i = 0; i < 8; ++i)
		{
			vec.pop_back();
		}

		assert(vec.empty());
		assert(vec.capacity() >= 8);
	}

	{
		my_vector vec;
		vec.reserve(8);

		for (int i = 0; i < 8; ++i)
		{
			vec.push_back(i);
		}

		vec.removeUnordered(vec.begin());

		assert(vec.size() == 7);
		assert(vec.front() == 7);

		vec.erase(vec.begin());

		assert(vec.front() == 1);

		vec.removeUnordered(vec.begin());

		assert(vec.front() == 6);
	}


	return 0;
}
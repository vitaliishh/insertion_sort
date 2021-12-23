#pragma once

#include<iostream>
#include <vector>

using namespace std;


template<typename T>
T* insertion_sort(T* arr, int sizeL);

template<typename T>
vector<T> insertion_sort(vector<T> vec);


template<typename T>
inline T* insertion_sort(T* arr, int sizeL)
{
	int size = sizeL;
	T* sort_arr = new T[size];
	sort_arr[0] = arr[0];

	for (int i = 1; i < size; i++)
	{
		sort_arr[i] = arr[i];

		int countCh = 0;

		for (int j = i - 1; j >= 0; j--)
		{
			if (sort_arr[i - countCh] < sort_arr[j])
			{
				T tmp = sort_arr[j];

				sort_arr[j] = sort_arr[i - countCh];
				sort_arr[i - countCh] = tmp;

				countCh++;
			}
		}
	}


	return sort_arr;
}


template<typename T>
inline vector<T> insertion_sort(vector<T> vec)
{
	vector<T> sort_vec;
	sort_vec.resize(vec.size());
	sort_vec.push_back(vec[0]);

	for (int i = 1; i < vec.size(); i++)
	{
		sort_vec[i] = vec[i];

		int countCh = 0;

		for (int j = i - 1; j >= 0; j--)
		{
			if (sort_vec[i - countCh] < sort_vec[j])
			{
				T tmp = sort_vec[j];

				sort_vec[j] = sort_vec[i - countCh];
				sort_vec[i - countCh] = tmp;

				countCh++;
			}
		}
	}

	return sort_vec;
}



#include "insertion_sort.h"

//int* insertion_sort(int* arr, int sizeL)
//{
//	int size = sizeL;
//	int* sort_arr = new int[size];
//	sort_arr[0] = arr[0];
//
//	for (int i = 1; i < size; i++)
//	{
//		sort_arr[i] = arr[i];
//
//		int countCh = 0;
//
//		for (int j = i - 1; j >= 0; j--)
//		{
//			if (sort_arr[i - countCh] < sort_arr[j])
//			{
//				int tmp = sort_arr[j];
//
//				sort_arr[j] = sort_arr[i - countCh];
//				sort_arr[i - countCh] = tmp;
//
//				countCh++;
//			}
//		}
//	}
//
//	return sort_arr;
//}

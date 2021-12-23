// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

#include "insertion_sort.h"

using namespace std;

int main()
{
    //int arr[]{3,4,2,1,9,0,-1,-4,3,4,-20,-25,-7};
    //double arr[]{3.4,3,4,2,1,9,0,-1,-4,3,4,-20,-25,-7,343.23,1.465,-234.4};
    //string arr[]{"efefe","swssws","aaaaaaaaa","avfvf","ppp"};
   
    //int size = sizeof(arr) / sizeof(arr[0]);


    //vector<string> vec = {"efefe","swssws","aaaaaaaaa","avfvf","ppp"};
    vector<double> vec = { 3.4,3,4,2,1,9,0,-1,-4,3,4,-20,-25,-7,343.23,1.465,-234.4 };

  
    //string* res = insertion_sort(arr, size);
    vector<double> res = insertion_sort(vec);


    for (int i = 0; i < vec.size(); i++)
    {
        cout << res[i] << " ";
    }

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

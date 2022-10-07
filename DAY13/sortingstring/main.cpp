#include <iostream>
#include <cstring>

using namespace std;


void bubbleSort(string array[], int n)
{
int i, j;
for (i = 0; i < n-1; i++)
    for (j = 0; j < n-i-1; j++)
        if (array[j].length() > array[j+1].length())
            swap(array[j], array[j+1]);
}

void printArray(string array[], int size)
{
int i;

for (i=0; i < size; i++)
cout << "\n"<<array[i];
}

int main()
{
    string array[20] = {"abcde", "abc", "abcdef", "ab", "abcd"};
    int size = sizeof(array)/sizeof(array[0]);
    bubbleSort(array, size);
    cout << ("Sorted array:\n");
    printArray(array, size);
    return 0;
}

#include <iostream>
#include <algorithm> 

void removeDuplicates(int* arr, int& n)
{
    
    std::sort(arr, arr + n);

    int j = 0;
    for (int i = 0; i < n - 1; i++)
        if (arr[i] != arr[i + 1])
            arr[j++] = arr[i];
  
    arr[j++] = arr[n - 1];

    n = j;
}

int main()
{
    int n;
    std::cout << "Enter the size of the array: ";
    std::cin >> n;

    int* arr = new int[n];  // allocate memory for the array dynamically

    std::cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
        std::cin >> arr[i];

    std::cout << "Original array: ";
    for (int i = 0; i < n; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;

    removeDuplicates(arr, n);

    std::cout << "Array after removing duplicates: ";
    for (int i = 0; i < n; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;

    delete[] arr;  // deallocate the memory

    return 0;
}

#include <iostream>
using namespace std;

int BinarySearch(int arr[], int ele, int n)
{
    int beg = 0, end = n - 1, mid = (end + beg) / 2;

    while (beg <= end)
    {

        if (arr[mid] == ele)
        {
            return mid;
        }
        else if (arr[mid] < ele)
        {
            beg = mid + 1;
        }
        else if (arr[mid] > ele)
        {
            end = mid - 1;
        }
        return -1;
    }
}

int main()
{
    int arr[100], ele;
    int pos;
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Enter Element to be Searched for";
    cin >> ele;
    pos = BinarySearch(arr, ele, n);
    if(pos!=0){
        cout<<"Element is found at index "<<pos;
    }
    else
    cout<<"Element is  not present in the array";
    return 0;
}
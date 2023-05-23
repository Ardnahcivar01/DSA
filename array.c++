#include <iostream>
using namespace std;
// #define size 10
int main()
{
    int size;
    cout << "enter the size of the array" << endl;
    cin >> size;
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cout << "enter the elements of the array " << i + 1 << " : ";
        cin >> arr[i];
    }

    cout << "Before deletion and insertion array is  : " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " " << endl;
    }
    int position;
    cout << "enter the position of the element :";
    cin >> position;
    int element;
    cout << "enter the element :";
    cin >> element;
    size++;
    if (position > size)
    {
        cout << "invalid position " << endl;
    }
    else
    {
        for (int i = size - 1; i >= position - 1; i++)

            arr[i + 1] = arr[i];
        arr[position - 1] = element;
    }
    cout << "After deletion and insertion array is : " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " " << endl;
    }
    cout << "array deletion of the given element:";
    cout << "enter the position of the element";
    cin >> position >> element;
    if (position > size)
    {
        cout << "invalid position " << endl;
    }
    else
    {
        for (int i = position - 1; i >= size - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        cout << "array after deletion of the given element";
        for (int i = 0; i < size -1; i++)
        {
            cout << arr[i] << " " << endl;
        }
    }
    return 0;
}
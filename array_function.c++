#include<iostream>
using namespace std;

int insertion(int arr[],int size){
    int position = 0,element;
    cout<<"enter the position of the element "<<endl;
    cin>>position;
    cout<<"enter the element "<<endl;
    cin>>element;
    if(position > size){
        cout<<"Error : position"<<endl;
    }
    else{
        for (int i = size - 1; i >= position - 1; i++){
            arr[i+1]=arr[i];
            arr[position - 1] = element;
        }
    }
    return 0;
}

int deletion(int arr[],int size){
    int position = 0, element;
    cout<<"enter the position of the element "<<endl;
    cin>>position;
    cout<<"enter the element "<<endl;
    cin>>element;
    if(position > size){
        cout<<"Error : position"<<endl;
    }
    else{
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

int main()
{
    int size;
    cout<<"enter the size of the array "<<endl;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cout<<"enter the element of array :"<< i+1 << endl;
        cin>>arr[i];
    }

    int insert ;
    cout<<insertion( arr,size)<<endl;
    cout<<deletion(arr,size)<<endl;
}
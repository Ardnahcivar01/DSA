#include<iostream>
#include<iomanip>
using namespace std;


int main(){
    int size;
    float mean = 0, sum=0;
    
    cout<<"Enter Size of Array:";
    cin>>size;
    
    float *p = new float[size];
    
    cout<<"\nEnter Elements of Array:"<<endl;
    for(int i=0; i<size; i++){
        cout<<"\nElement "<<i+1<<":";
        cin>>p[i];
        sum+=p[i];
    }
    
    mean = sum/size;
    cout<<"\nSum  ="<<setw(10)<<fixed<<setprecision(3)<<sum<<endl;
    cout<<"Mean = "<<setw(9)<<fixed<<setprecision(3)<<mean<<endl;
    
    delete []p;
    return 0;
}
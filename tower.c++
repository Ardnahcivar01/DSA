// #include<iostream>
// using namespace std;

// void tower_of_hinoi(int n,char from_rod,char to_rod,char auxi)
// {
//     if(n==1)
//     {
//         cout<<"Move disk " <<n<<"from A to c"<<endl;
//         return ;
//     }
//     tower_of_hinoi(n-1,from_rod,auxi,to_rod);
//     cout<<"Move disk "<<n<<"from "<<from_rod<<"to"<<to_rod<<endl;
//     tower_of_hinoi(n-1,auxi,to_rod,from_rod);
//     cout<<"Move disk"<<n<<"from"<<auxi<<"to:"<<to_rod<<endl;
// }
// int main()
// {
//     int n;
//     cout<<"Enter the number of rings"<<endl;
//     cin>>n;
//     tower_of_hinoi(n,'A','B','C');
//     return 0;
// }
#include<iostream>
using namespace std;

void tower_of_hanoi(int n,char from_rod,char to_rod,char auxi){
    if(n==1){
        cout<<" Move disk "<<n<<" from A to C"<<endl;
    }
    tower_of_hanoi(n-1,from_rod,auxi,to_rod);
    cout<<"Move disk "<<n<<" from"<<from_rod<<" to"<<to_rod<<endl;
    tower_of_hanoi(n-1,auxi,to_rod,from_rod);
    cout<<"Move disk"<< n<<" from "<<auxi<<" to "<<to_rod<<endl;
}

int main(){
    int n;
    cout<<"enter number of rings";
    cin>>n;
    tower_of_hanoi(n,'A','C','B');
    return 0;
}
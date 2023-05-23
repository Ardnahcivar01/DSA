#include<iostream>
using namespace std;

class bank{
    private:
    char Depositor[50],AccNo[25],AccType[25];
    double DepositAmt,AccBalance;
    
    public:
    void GetDeposit(void){
        cout<<"Enter the first name of depositor: "; cin>>Depositor;
        cout<<"Enter the account number: ";
        cin>>AccNo;
        cout<<"Enter the type of account: ";
        cin>>AccType;
        cout<<"Enter the available balance in account(in Rs.): "; cin>>AccBalance;
        cout<<"Enter the amount to be deposited(in Rs.): "; cin>>DepositAmt;
    }
    void Deposit(void){
        AccBalance +=DepositAmt;
        cout<<"Rs"<<DepositAmt<<"Are deposited"<<endl;
    }
    void display(void){
        cout<<"Available balance is : "<<AccBalance;
    }
};
int main(){
    bank depo[3];
    for(int i=0;i<3;i++){
        cout<<endl<<"Enter the details of transaction (deposit) :"<<i+1<<endl;
        depo[i].GetDeposit();
        depo[i].Deposit();
        depo[i].display();
    }
    return 0;
}
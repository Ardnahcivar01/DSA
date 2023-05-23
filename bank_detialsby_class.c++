// Bank program to implementing the concept of the Object orinted programming
#include<iostream>
using namespace std;
class bank{
    private:
    char Depositor[50],Accno[30],AccType[25];
    double Accbalance,DepositAmt,WithdrowAmt;
    public:
    void GetDeposit(void){
        cout<<"Enter name of Depositor:";
        cin>>Depositor;
        cout<<"Enter Account number of Depositor:";
        cin>>Accno;
        cout<<"Enter Account type : ";
        cin>>AccType;
        cout<<"Enter the Available balance in account (in Rs) : ";
        cin>>Accbalance;
        cout<<"Enter the Amount br deposit : ";
        cin>>DepositAmt;
        cout<<"Enter the Withdrow Amount :";
        cin>>WithdrowAmt;
    }
    void Deposit(void){
        Accbalance +=DepositAmt;
        cout<<"Rs "<<DepositAmt<<" Creduted to your bank Account "<<endl;
    }
    void Withdrow(void){
        Accbalance -=DepositAmt;
        cout<<"Rs"<< DepositAmt<<" Withdrow to your bank account"<<endl;
    }
    void display(void){
        cout<<"Available balance is : "<<Accbalance<<endl;
    }
    
};

int main(){
    bank depo;
    depo.GetDeposit();
    
    char choice;
    cout<<"Enter your choice (Deposit-->'D' / Withdrow-->'W') : ";
    cin >> choice ;
    // apply switch case for choice of user
    switch(choice){
        case 'D':depo.Deposit();
               depo.display(); 
        break;
        case 'W':depo.Withdrow();
               depo.display();
        break;
        default:cout<<" Wrong coice be choosen !!"<< endl;
        break;
    }
    
    
    return 0;
    
}

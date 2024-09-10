#include<bits/stdc++.h>
using namespace std;

void showmenu(){
    cout<<"********Menu********"<<endl;
    cout<<"1.check balance"<<endl;
    cout<<"2.deposit"<<endl;
    cout<<"3.withdraw"<<endl;
    cout<<"4.exit"<<endl;
    cout<<"*********************"<<endl;
}

int main(){
    int option;
    double balance=500;
    do{
    showmenu();
    cout<<"option: ";
    cin>>option;
    system("cls");
    switch(option){
        case 1:cout<<"balance is: "<<balance<<endl;break;
        case 2:cout<<"deposit amount:";
               double depositamount;
               cin>>depositamount;
               balance+=depositamount;
               break;
        case 3:cout<<"withdraw amount:";
               double withdrawamount;
               cin>>withdrawamount;
               if(withdrawamount<=balance)
                    balance-=withdrawamount;
                else
                     cout<<"not enough money"<<endl;
               break;
    }
    }while(option!=4);
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    do {
		cout<<"\t*** ATM - Auto Teller Machine ***"<<endl;
        cout<<"[1].Check Balance"<<endl;
        cout<<"[2].Deposit"<<endl;
        cout<<"[3].Withdraw"<<endl;
        cout<<"[4].Exit\n";
        int number;
        float balance = 1000.00;
        cout<<"choose number: ";cin>>number;
        switch (number)
        {
            case 1:
            	break;
			
			case 4:
                cout<<"Exit Program...";
                exit(0);
                break;
        
            default:
                cout<<"Wrong number input again\n";
                break;
        }
        
    } while (true);

    return 0;
}

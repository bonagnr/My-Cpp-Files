// C++_test_1
#include<iostream>
using namespace std;
int main(){
    int i = 0,number;
    do {
        cout<<"i = "<<i<<endl;
        cout<<"[0].exit\n";
        cout<<"[1].continue count";
        cout<<"choose one number: ";cin>>number;
        i++; // i = i + 1
        if ((number == 0))
        {
            cout<<"\nexit the program..."<<endl;
            exit(0);
        }
    } while (true);
    return 0;
}

/*
    do-while loop C++
    int i = 0;
    do {
        cout << i << endl;
        i++;
    } while (i < 10);
*/

//Author: Zakary Kuns
#include<iostream>
#include<string>
using namespace std;

int main()
{
        string list[5]; //array of 5 strings
        int numItems = 0;
        char input;
        string input2;

        do {
                cout<<"\n==GROCERY LIST MANAGER==";
                cout<<"\nEnter your choice: ";
                cout<<"\n (A)dd an item";
                cout<<"\n (Q)uit";
                cout<<"\nYour choice (A/Q): ";
                cin>>input;

                if (input == 'A' || input == 'a') {

                        cout << "What is the item?" << endl;
                        cin >> input2;

                        if (numItems < 5) {
                                list[numItems];
                                numItems++;
                        }
                        
                        else {
                        cout << "You'll need a bigger list!" <<endl;
                        
                        }
                


                }
        }

        while (input != 'Q' && input != 'q'); 



        return 0;
}

#include<bits/stdc++.h>
#include<unistd.h>
using namespace std;

int main()
{
    int amt, rem, total;
    cout<<"Enter amount: ";
    cin >> amt;

    int choice;
    

    while (amt != 0)
    {
        if (amt == 0 || rem == 0)
        {
            sleep(2);
            cout<<"Exiting display...!"<<endl<<endl;
            break; 
        }
        else
        {
            cout<<"Enter the type of notes you have to count: ";
            cin >> choice;

            int quot;
            switch(choice)
            {
                case 500:
                {
                    if (rem > 500 || amt > 500)
                    {   
                        quot = amt / 500;
                        rem = amt % 500;
                        cout<<"Number of 500Rs notes: "<<quot<<endl;
                        cout<<"Balance amount: "<<rem<<endl;
                        break;
                    }
                    else
                    {
                        cout<<"0 notes needed!"<<endl;
                        break;
                    }
                }
                case 100:
                {
                    if (rem > 100 || amt > 100)
                    {   
                        quot = amt / 100;
                        rem = amt % 100;
                        cout<<"Number of 100Rs notes: "<<quot<<endl;
                        cout<<"Balance amount: "<<rem<<endl;
                        break;
                    }
                    else
                    {
                        cout<<"0 notes needed!"<<endl;
                        break;
                    }
                }

                case 50:
                {
                    if (rem > 50 || amt > 50)
                    {
                        quot = rem / 50;
                        rem = rem % 50;
                        cout<<"Number of 50Rs notes: "<<quot<<endl;
                        cout<<"Balance amount: "<<rem<<endl;   
                    }
                    else
                    {
                        cout<<"0 notes needed!"<<endl;
                        break;
                    }
                    break;
                }

                case 20:
                {
                    if (rem > 20 || amt > 20)
                    {
                        quot = rem / 20;
                        rem = rem % 20;
                        cout<<"Number of 20Rs notes: "<<quot<<endl;
                        cout<<"Balance amount: "<<rem<<endl;  
                    }
                    else
                    {
                        cout<<"0 notes needed!"<<endl;
                        break;
                    }
                    break;
                }

                case 10:
                {
                    if (rem > 10 || amt > 10)
                    {
                        quot = rem / 10;
                        rem = rem % 10;
                        cout<<"Number of 10Rs notes: "<<quot<<endl;
                        cout<<"Balance amount: "<<rem<<endl;  
                    }
                    else
                    {
                        cout<<"0 notes needed!"<<endl;
                        break;
                    }
                    break;
                }

                case 1:
                {
                    if (rem > 1 || amt > 1)
                    {
                        quot = rem / 1;
                        rem = rem % 1;
                        cout<<"Number of 1Rs coins: "<<quot<<endl;
                        cout<<"Balance amount: "<<rem<<endl<<endl; 
                    }
                    else
                    {
                        cout<<"0 notes needed!"<<endl;
                        break;
                    }
                    break;
                }
                case 0:
                {
                    cout<<"Exiting display...!";
                    exit(0);
                }
            }  
        }      
    }
    
    return 0;
}
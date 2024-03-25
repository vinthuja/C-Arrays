#include <iostream>
using namespace std;
void display_menu();
void display_accounts();
void search_account();
void deposit_amount();
void withdraw_amount();
void interest_amount();
int y=0;
float number[5];
float current[5];
string type[] = {"AccountNumber", "CustomerName", "NIC_Number", "Account - Type", " Balance"};
float num[]{153000.00, 25000.00, 85000.00, 62000.00, 178000.00};
string details[5][4] = {{"4810055992", "Tom Lara", "965622411V", "Saving"},
                        {"4962006345", "Simon David ", "931122456V ", "Current"},
                        {"4753008741", "Ben Stacy", "927391333V", "Fixed"},
                        {"3345256348", "John Mark", "961343267V", "Current"},
                        {"4954083265", "Cooper Jake", "967591530V", "Saving"}};
int main()
{
    int number;
    char choice;
    do
    {
        display_menu();
        cout << "enter choice: " << endl;
        cin >> number;
        switch (number)
        {
        case 1:
            display_accounts();
            break;
        case 2:
            search_account();
            break;
        case 3:
            deposit_amount();
            break;
        case 4:
            withdraw_amount();
            break;
        case 5:
            interest_amount();
            break;
        default:
            cout << "thank you.\n";
        }
        cout << "Would you like to use this app once more? " << endl;
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');
}
void display_menu()
{
    cout << "1 - Customer Details\n"
         << "2 - Search Account Details\n"
         << "3 - Deposit\n"
         << "4 - Withdrawal\n"
         << "5 - Interest \n";
}
void display_accounts()
{
    for (string y : type)
    {
        cout << y << "  ";
    }
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << details[i][j] << "      ";
        }
        cout << num[i] << endl;
    }
}
void search_account()
{
    string nic;
    cout << "enter NIC Number: " << endl;
    cin >> nic;
    
    for (int i = 0; i < 5; i++)
    { 
        if (nic == details[i][2])
        {              
            y = y + i; 
        }
        else
        {
            cout << "wrong"<<endl;
        }
    }

    if (y < 5)
    {
        for (string z : type)
        {
            cout << z << "  ";
        }
        cout << endl;

        for (int j = 0; j < 4; j++)
        {
            cout << details[y][j] << "   "; // 2 0
        }

        cout << num[y] << endl;
    }
}
void deposit_amount()
{
    string account;
    float deposit;
    cout << "enter the account Number: " << endl;
    cin >> account;
    cout << "deposited ammount: " << endl;
    cin >> deposit;
    for (int i = 0; i < 5; i++)
    {
        if (account == details[i][0])
        {   y=y+i;
            
        }
        else
        {
            cout << "wrong" << endl;
        }}
        if (y < 5){
            num[y] = num[y] + deposit;
            for (string x : type)
            {
                cout <<x<< "  ";
            }
            cout << endl;
                for (int j = 0; j < 4; j++)
                {
                    cout << details[y][j] << "   ";
                }
                cout << num[y] << endl;
            }
            
        }
       
       
    

void withdraw_amount()
{
    string account;
    float widthdrow;
    cout << "enter the account Number: " << endl;
    cin >> account;
    cout << "withdrow ammount: " << endl;
    cin >> widthdrow;
    for (int i = 0; i < 5; i++)
    {
        if (account == details[i][0])
        {
            if ((num[i] + 10000) > widthdrow)
            {
                num[i] = num[i] - widthdrow;
                for (string y : type)
                {
                    cout << y << "  ";
                }
                cout << endl;
                for (int z = 0; z < 5; z++)
                {
                    for (int j = 0; j < 4; j++)
                    {
                        cout << details[z][j] << "   ";
                    }
                    cout << num[z] << endl;
                }
                break;
            }
            else
            {
                cout << "The balance is not sufficient to withdraw." << endl;
            }
        }
    }
}
void interest_amount()
{
    
    int saving = 10, currents = 8, fixed = 13;
    for (int i = 0; i < 5; i++)
    {

        if ("saving" == details[i][3])
        {
            cout<<"wefdgffff";
            number[i] = (num[i] * 10) / 100;
            current[i]= number[i] + num[i];
            cout <<number[i] <<current[i];
        }
        else if ("current" == details[i][3])
        {
            number[i] = (num[i] * 8) / 100;
            current[i] = number[i] + num[i];
        }
        else if ("fixed" == details[i][3])
        {
            number[i] = (num[i] * 13) / 100;
            current[i] = number[i] + num[i];
        }
    }


    for(float y:number){
        cout<<y<<"\t";
    }


string cur[] = {"Interest", "CurrentBalance"};
for (string y : type)
{

        cout << y << "  ";
}
for(string a:cur){
    cout<<a<<"   ";
}
cout << endl;
for (int z = 0; z < 5; z++)
{
        for (int j = 0; j < 4; j++)
        {
        cout << details[z][j] << "   ";
        }
        cout << num[z] <<"    "<<number[z]<<"   "<<current[z]<< endl;
}

}
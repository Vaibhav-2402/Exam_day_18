#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"\n Enter the number of digits u want in pyramid : "; cin>>n;

    int row = 1;
    int count = 1;

    while(row <= n)
    {
        // Pehle spaces print karo
        int space = row - 1;
        while(space)
        {
            cout<<" ";
            space--;
        }
        // ab stars print karte hai

        int col = 1;
        int stars = n - row + 1;
        while(col <= stars){
            cout<<count;
            col++;
            count++;
        }
        cout<<endl;
        row++;

    }
    return 0;
}
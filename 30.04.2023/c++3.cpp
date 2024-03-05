#include<iostream>
int main()
{
    using namespace std;
    int n;

    cout<<"Aby poznac maja ulubiona liczbe podawaj: ";
    cout<<"liczy od 1 do 10\n";

    do
    {
        cin>>n;
    }while(n!=7);
    cout<<"Tak moja ulubiona liczba to 7";
    cin.get();
    cin.get();
    return 0;
}
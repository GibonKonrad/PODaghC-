#include<iostream>
int main()
{
    using namespace std;
    cout<<"Podaj liczbe wierszy: ";
    int liczba;
    cin>>liczba;
    char tablica[liczba][liczba]{0};
    for(int a=0;a<liczba;a++)
    {
        for(int c=0; c<liczba-1-a;c++)
        {
            tablica[a][c]=' ';
        }
        for(int b=liczba-1-a;b<liczba;b++)
        {
            tablica[a][b]='*';
        }
    }
    for(int a=0;a<liczba;a++)
    {
        for(int b=0; b<liczba; b++)
        {
            cout<<tablica[a][b];
        }
        cout<<endl;
    }
    cin.get();
    cin.get();

    return 0;
}
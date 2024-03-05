#include<iostream>
int main()
{
    using namespace std;
    cout<<"Podaj ilosc wierszy: ";
    int ilosc;
    cin>>ilosc; 
    char* wskaznik[ilosc];
    for(int a=0;a<ilosc;a++)
    {
        *(wskaznik+a)=new char[ilosc];
    }
    for(int a=0;a<ilosc;a++)
    {
        for(int b=0;b<ilosc-a-1;b++)
        {
            *(*(wskaznik+a)+b)=' ';
        }
        for(int b=ilosc-a-1;b<ilosc;b++)
        {
            wskaznik[a][b]='*';
        }
    }
    for(int a=0; a<ilosc; a++)
    {
        for(int b=0; b<ilosc; b++)
        {
            cout<<wskaznik[a][b];
        }
        cout<<endl;
    }
    cin.get();
    cin.get();
    return 0;
}
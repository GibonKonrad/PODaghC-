#include<iostream>
int main()
{
    using namespace std;
    int liczba;
    cout<<"Podaj liczbe calkowita: ";
    cin>>liczba;
    int suma=0;
    while(liczba!=0)
    {
        suma+=liczba;
        cout<<"Podaj liczbe calkowita: ";
        cin>>liczba;
    }
    cout<<"Suma wynosi : "<<suma<<endl;
    cin.get();
    cin.get();
    return 0;
}
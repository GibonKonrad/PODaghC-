#include<iostream>
int main()
{
    using namespace std;
    int a,b;
    cout<<"Podaj liczbe calkowita pierwsza: ";
    cin>>a;
    cout<<"Podaj druga liczbe calkowita: ";
    cin>>b;
    int suma;
    for(suma=0;a<=b;a++)
    {
        suma+=a;
    }
    cout<<"Suma wynosi: "<<suma;
    cin.get();
    cin.get();
    return 0;
}
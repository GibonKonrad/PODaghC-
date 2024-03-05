#include<iostream>
using namespace std;
    struct pizza
    {
        char nazwa[20];
        int srednica;
        float waga;
    };
int main()
{
    pizza* wskaznik=new pizza;
    cout<<"Podaj srednice pizzy: ";
    cin>>wskaznik->srednica;
    cout<<"Srednica: "<<wskaznik->srednica<<'\n';
    cin.get();
    cout<<"Podaj nazwe firmy produkujacej pizze: ";
    cin.getline(wskaznik->nazwa,20);
    cout<<"Nazwa: "<<wskaznik->nazwa<<'\n';
    cout<<"Podaj wage pizzy: ";
    cin>>wskaznik->waga;
    cout<<"Waga: "<<wskaznik->waga<<'\n';
    cin.get();
    cin.get();
    return 0;
}
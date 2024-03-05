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
    pizza p1;
    cout<<"Podaj nazwe firmy produkujacej pizze: ";
    cin.getline(p1.nazwa,20);
    cout<<"Nazwa: "<<p1.nazwa<<'\n';
    cout<<"Podaj srednice pizzy: ";
    cin>>p1.srednica;
    cout<<"Srednica: "<<p1.srednica<<'\n';
    cout<<"Podaj wage pizzy: ";
    cin>>p1.waga;
    cout<<"Waga: "<<p1.waga<<'\n';
    cin.get();
    cin.get();
    return 0;
}
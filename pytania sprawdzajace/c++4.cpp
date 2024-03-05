#include<iostream>
using namespace std;
struct osoba
{
    string imie;
    string nazwisko;
    string napis;
};
int main()
{
    osoba os1;
    cout<<"Podaj imie: ";
    getline(cin,os1.imie);
    cout<<"Podaj nazwisko: ";
    getline(cin,os1.nazwisko);
    os1.napis=os1.imie+", "+os1.nazwisko;
    cout<<"Oto informacje zestawione w jeden napis: "<<os1.napis;
    cin.get();
    cin.get();
    return 0;
}
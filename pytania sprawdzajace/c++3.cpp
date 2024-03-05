#include<iostream>
#include<cstring>
using namespace std;
struct osoba
{
    char imie[40];
    char nazwisko[20];
};
int main()
{
    using namespace std;
    osoba os1;
    cout<<"Podaj imie: ";
    cin.getline(os1.imie,20);
    cout<<"Podaj nazwisko: ";
    cin.getline(os1.nazwisko,20);
    strcat(os1.imie,", ");
    strcat(os1.imie,os1.nazwisko);
    char* wskaznik=new char[strlen(os1.imie)+1];
    strcpy(wskaznik,os1.imie);
    cout<<"Oto inforamcje zestawione w jeden napis: "<<wskaznik;
    cin.get();
    cin.get();
    return 0;
}
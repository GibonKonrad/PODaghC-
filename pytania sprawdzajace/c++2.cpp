#include<iostream>
struct osoba
{
    std::string imie;
    std::string nazwisko;
    int ocena;
    int lata;
};
int main()
{
    using namespace std;
    osoba os1;
    cout<<"Jak masz na imie? :";
    getline(cin,os1.imie);
    cout<<"\n"<<"Jak sie nazywasz? :";
    getline(cin,os1.nazwisko);
    cout<<"Na jaka ocene zaslugujesz? :";
    cin>>os1.ocena;
    cout<<"Ile masz lat? :";
    cin>>os1.lata;
    cout<<"Nazwisko: "<<os1.nazwisko<<","<<os1.imie<<"\n";
    cout<<"Ocena: "<<os1.ocena-1<<endl;
    cout<<"Wiek: "<<os1.lata<<endl;
    cin.get();
    cin.get();
    return 0;
}
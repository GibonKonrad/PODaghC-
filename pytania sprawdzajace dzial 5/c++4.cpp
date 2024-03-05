#include<iostream>
#include<string>
int main()
{
    using namespace std;
    string tablica[12]
    {
        "Styczen","Luty","Marzec","Kwiecien",
        "Maj","Czerwiec","Lipiec","Sierpien",
        "Wrzesien","Pazdziernik","Listopad","Grudzien"
    };
    int tablica1[12];
    for(int a=0; a<12; a++)
    {
        cout<<"Podaj ilosc sztuk sprzedanych w "<<tablica[a]<<endl;
        cin>>tablica1[a];
    }
    int suma=0;
    for(int a=0;a<12;a++)
    {
        suma+=tablica1[a];
    }
    cout<<"Roczna sprzedaz lacznie wynosi "<<suma<<endl;
    cin.get();
    cin.get();
    return 0;
}
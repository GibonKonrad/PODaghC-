#include<iostream>
int main()
{
    using namespace std;
    int tablica[3][12];
    const char* tablica1[12]
    {"Styczen","Luty","Marzec","Kwiecien",
    "Maj","Czerwiec","Lipiec","Sierpien",
    "Wrzesien","Pazdziernik","Listopad",
    "Grudzien"};
    int suma=0;
    for(int a=0;a<3;a++)
    {
        for(int b=0;b<12;b++)
        {
            cout<<"Podaj liczbe sprzedanych sztuk w: "<<tablica1[b]<<" roku: "<<a+1<<endl;
            cin>>tablica[a][b];
            suma+=tablica[a][b];
        }
    }
   long suma1=0,suma2=0,suma3=0;
    for(int a=0;a<12;a++)
    {
        suma1+=tablica[0][a];
        suma2+=tablica[1][a];
        suma3+=tablica[2][a];
    }
    cout<<"Laczna sprzedaz dla roku: 1 wynosi: "<<suma1<<endl;
    cout<<"Laczna sprzedaz dla roku: 2 wynosi: "<<suma2<<endl;
    cout<<"Laczna sprzedaz dla roku: 3 wynosi: "<<suma3<<endl;
    cout<<"Laczna sprzedaz za 3 lata wynosi: "<<suma<<endl;
    cin.get();
    cin.get();
    return 0;
}
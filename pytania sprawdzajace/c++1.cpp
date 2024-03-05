#include<iostream>
#include<array>
#include<vector>
int main()
{
    using namespace std;
    //ZAD 1
    char aktorzy[30];
    short betsie[100];
    float chuck[13];
    long double dipsea[64];
    //ZAD 2
    array<char,30>aktorzy1;
    array<short,100>betsie1;
    array<float,13>chuck1;
    array<long double,64>dipsea1;
    //ZAD3
    int tablica[5]{1,3,5,7,9};
    //ZAD4
    int even=tablica[0]+tablica[sizeof(tablica)/sizeof(int)-1];
    //ZAD5
    float ideas[10];
    cout<<ideas[1];
    //ZAD6
    char tablica2[]{"cheeseburger"};
    //ZAD7
    string lancuch="Waldorf Salad";
    //ZAD8
    struct ryba
    {
        string rodzaj;
        float waga;
        float dlugosc;
    };
    //ZAD9
    ryba mazur{"losos",230.98,23.5};
    //ZAD10
    enum Odpowiedz{Nie,Tak,Chyba};
    //ZAD11
    double ted=5.98;
    double* wskaznik=&ted;
    *wskaznik;
    //ZAD12
    float treacle[10];
    float* wskaznik2=treacle;
    *wskaznik2;
    wskaznik2=wskaznik2+9;
    *wskaznik2;
    //ZAD13
    int a;
    cout<<"Podaj liczbe calkowita dodatnia: ";
    cin>>a;
    int* wskaznik3=new int[a];
    vector<int>tablica4(a);
    //ZAD14
    //POKAZE ADRES PIERWSZEGO ZNAKU
    //ZAD15
    ryba* wskaznik4=new ryba;
    (*wskaznik4).rodzaj;
    wskaznik4->rodzaj;
    //ZAD16
    const int c=10;
    vector<string>obiekt(c);
    array<string,c>obiekt2;    

    return 0;
}
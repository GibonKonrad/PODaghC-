#include<iostream>
#include<array>
const int Artsize=101;
int main()
{
    using namespace std;
    array<long double,Artsize>tablica;
    tablica[0]=tablica[1]=1.0L;
    for(int a=2; a<Artsize;++a)
        tablica[a]=tablica[a-1]*a;
    for(int a=0;a<Artsize;a++)
        cout<<tablica[a];
    cout<<"Wartosc silni 100! wynosi: "<<tablica[100]<<endl;
    cin.get();
    cin.get();
    return 0;
}
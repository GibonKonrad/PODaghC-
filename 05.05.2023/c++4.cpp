#include<iostream>
#include<array>
int main()
{
    using namespace std;
    array<double,10>tablica;
    cout<<"Podaj"<<10<<" wartosci ";
    int i=0;
    cin>>tablica[0];
    if(!cin)
    {
        cin.clear();
        while(cin.get()!='\n');
    }
    while(i++<10)
    {
        cin>>tablica[i];  
        if(!cin)
    {
        cin.clear();
        while(cin.get()!='\n');
    }
    }
    int suma=0;
    for(int a=0; a<10; a++)
    {
        suma+=tablica[a];
    }   
    cout<<"Srednia to: "<<suma/10<<endl;
    for(int a=0; a<10; a++)
    {
        if(suma/10<tablica[a])
        {
            cout<<tablica[a];
        }
        continue;
    }
    cin.get();
    cin.get();
    return 0;
}
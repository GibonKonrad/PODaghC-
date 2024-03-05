#include<iostream>
#include<cstring>
int main()
{
    using namespace std;
    char tablica[20];
    int licznik=0;
    cout<<"Podawaj slowa: ";
    cin.get(tablica,19);
    cin.get();
    while(strcmp(tablica,"gotowe"))
    {
        licznik++;
        cout<<"podawaj slowa: ";
        cin.get(tablica,19);
        cin.get();
    }
    cout<<licznik<<endl;
    cin.get();
    cin.get();
    return 0;
}
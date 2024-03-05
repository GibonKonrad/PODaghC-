#include<iostream>
int main()
{
    using namespace std;
    
    cout<<"Program ten moze sformatowac twoj dysk\n"
        "i zniszczyc wszystkie znajdujace sie na nim dane.\n"
        "Czy mam kontynuowac<t/n> ";
    char ch;
    cin>>ch;
     cin.get();
    cin.get();
    if(ch=='t'||ch=='T')
        cout<<"Ostrzegalem\a\a\a\n";
    else if( ch=='n'|| ch=='N')
        cout<<"Bardzo rozsadnie... Do widzenia\n";
    else
        cout<<"Nie wybrano t ani n, najwyrazniej"
        "nie rozumiesz instrukcji, wiec "
        "i tak zniszcze cala zawartosc dysku.\a\a\a\a\n";
    cin.get();
    cin.get();
    cin.get();
    return 0;
}
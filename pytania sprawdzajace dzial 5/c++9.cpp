#include<iostream>
#include<string>
int main()
{
    using namespace std;
    string nazwa;
    int licznik=0;
    cout<<"Podaj nazwe: ";
    getline(cin,nazwa);
    while(nazwa!="gotowe")
    {
         licznik++;
        cout<<"Podaj nazwe: ";
        getline(cin,nazwa);
    }
    cout<<licznik<<endl;
    cin.get();
    cin.get();
    return 0;
}
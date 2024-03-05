#include<iostream>
int main()
{
    using namespace std;
    int donuts=6;
    double cups=4.5;

    cout<<"wartosc zmiennej donuts = "<<donuts;
    cout<<", a adres tej zmiennej= "<<&donuts<<endl;
    cout<<"wartosc zmennej cups= "<<cups;
    cout<<", a adres tej zmiennej = "<<&cups<<endl;
    cin.get();
    cin.get();
    return 0;
}
#include<iostream>
struct car
{
    char marka[20];
    int rok_budowy;
};
int main()
{
    using namespace std;
    int ilosc;
    cout<<"Podaj liczbe katalogowanych aut\n";
    cin>>ilosc;
    cin.get();
    car* wskaznik=new car[ilosc];
    int a=0;
    while(a<ilosc)
    {
        cout<<"Podaj nazwe "<<a+1<<" pojazdu: ";
        cin.get((wskaznik+a)->marka,19);
        cout<<"Podaj rok: ";
        cin>>(wskaznik+a)->rok_budowy;
        cin.get();
        a++;
    }
    int c=0;
    while(c<ilosc)
    {
        cout<<(wskaznik+c)->rok_budowy<<" "<<(wskaznik+c)->marka<<endl;
        c++;
    }
    cin.get();
    cin.get();
    return 0;
}

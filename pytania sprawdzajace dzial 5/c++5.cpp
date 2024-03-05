#include<iostream>
int main()
{
    using namespace std;
    int licznik=1;
    for(long double a=105.0,b=110.0;a<b; a*=1.05,b+=10,licznik++)
    ;
    cout<<"Inwestycje Cleo przekrocza co do wysokosci inwestycje Dafne po: "<<licznik<<"latach"
    <<endl;
    int licznik2=0;
    for(long double a=100, b=100; licznik2<=licznik; a*=1.05, b+=10,licznik2++)
    {
        cout<<a<<"\t"<<b<<endl;
    }
    cin.get();
    cin.get();
    return 0;
}
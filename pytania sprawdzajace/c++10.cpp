#include<iostream>
#include<array>
int main()
{
    using namespace std;
    array<float,3>wyniki;
        cout<<"Podaj wynik[1]";
        cin>>wyniki[0];
        cout<<"Podaj wynik[2]";
        cin>>wyniki[1];
        cout<<"Podaj wynik[3]";
        cin>>wyniki[2];
    double srednia=(wyniki[0]+wyniki[1]+wyniki[2])/3;
    cout<<wyniki[0]<<" , "<<wyniki[1]<<" , "<<wyniki[2]<<"\n";
    cout.put(ios_base::fixed);
    cout<<"Srednia to: "<<srednia;
    cin.get();
    cin.get();
    return 0;
}
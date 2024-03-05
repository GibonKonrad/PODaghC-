#include<iostream>
int main()
{
    using namespace std;
    cout<<"Cudowny Kalkulator bedzie sumowal i liczyl srednia: \n";
    cout<<"Pieciu liczb \n";
    cout<<"Podaj pierc wartosci: \n";
    double number;
    double sum=0.0;
    for(int i=1; i<=5; ++i)
    {
        cout<<"Wartosc: "<<i<<": ";
        cin>>number;
        sum+=number;
    }

    cout<<"Doprawdy pierc wspanialych liczb! ";
    cout<<"iCH suma to: "<<sum<<", "<<endl;
        sum/=5;
    cout<<" a srednia "<<sum<<".\n";
    cout<<"Cudowny kalkulator zegna sie z toba! \n";
    cin.get();
    cin.get();
    return 0;
}
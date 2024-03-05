#include<iostream>
using namespace std;
struct Batonik
{
    string marka;
    float waga;
    int kalorie;
};
int main()
{
    Batonik b1{"Mocha Munch",2.3,350};
    cout<<"Marka to: "<<b1.marka<<"\n"
    <<"Waga to: "<<b1.waga<<"\n"
    <<"Kalorie to: "<<b1.kalorie;
    cin.get();
    cin.get();
    return 0;
}
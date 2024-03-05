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
    Batonik b1[3]{{"mazur",2.4,23},{"stafin",4.3,32},{"paplotny",3.2,32}};
    cout<<b1[0].kalorie<<'\n'<<b1[0].marka<<'\n'<<b1[0].waga<<endl;
    cout<<b1[1].kalorie<<'\n'<<b1[1].marka<<'\n'<<b1[1].waga<<endl;
    cout<<b1[2].kalorie<<'\n'<<b1[2].marka<<'\n'<<b1[2].waga<<endl;
    cin.get();
    cin.get();
    return 0;
}
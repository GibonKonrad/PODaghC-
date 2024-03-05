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
    Batonik* wskaznik=new Batonik[3]{{"mazur",3.4,32},{"stafin",2.3,65},{"stafinoza",5.4,52}};
    cout<<(*wskaznik).kalorie<<'\n'<<(*wskaznik).marka<<'\n'<<(*wskaznik).waga<<endl;
    cout<<(*(wskaznik+1)).kalorie<<(*(wskaznik+1)).marka<<'\n'<<(*(wskaznik+1)).waga<<endl;
    cout<<(*(wskaznik+2)).kalorie<<'\n'<<(*(wskaznik+2)).marka<<'\n'<<(*(wskaznik+2)).waga<<endl;
    cin.get();
    cin.get();
    return 0;
}
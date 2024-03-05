#include<iostream>
int main()
{
    
    using namespace std;
    cout.setf(ios_base::boolalpha);
    int x=6;
    cout<<(x>5 && x<10);
    int wiek=10;
    int waga=60;
    cout<<(wiek>30 && wiek<45 || waga>300);
    int datek=6000;
    cout<<(wiek>50||waga>300)&&datek>1000;
    cout<<!(0 && 1.0/x>100,0);
    cout<<!(x>5)<<(x<=5);
    cout<<(!x>5);
    cin.get();
    cin.get();
    return 0;
}
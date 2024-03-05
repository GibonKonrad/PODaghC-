#include<iostream>
int main()
{
    using namespace std;
    int updates=6;
    int*p_updates=&updates;

    p_updates=&updates;

    cout<<"Wartosci : updaes = "<<updates;
    cout<<":, *p_updates = "<<*p_updates<<endl;

    cout<<"Adresy:&updaes = "<<&updates;
    cout<<". p_updates = "<<p_updates<<endl;

    *p_updates=*p_updates+1;
    cout<<"Teraz updates= "<<updates<<endl;
    int *A,*B;
    
    cin.get();
    cin.get();
    return 0;
}
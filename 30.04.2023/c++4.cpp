#include<iostream>
int main()
{
    using namespace std;
    int tablica[10]{1,2,3,4,5,6,7,8,9,10};
    for(int &x:tablica)
    {
        x=5;
    }
    for(int x:tablica)
    {
        cout<<x<<endl;
    }
    for(int a:{1,2,3,4,5,6,7})
    {
        a=a+1;
        cout<<a<<endl;        
    }
    cin.get();
    cin.get();    
    return 0;
}
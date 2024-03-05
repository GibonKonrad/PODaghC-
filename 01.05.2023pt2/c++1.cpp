#include<iostream>
int main()
{
    using namespace std;
    int x=5;
    int y=++x;
    cout<<y<<"\t"<<x<<endl;
    int z=5;
    int c=z++;
    cout<<z<<"\t"<<c;
    int guests=0;
    while(guests++<10)
    {
        cout<<guests<<endl;
    }
    cin.get();
    cin.get();
    return 0;
}
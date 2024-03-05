#include<iostream>
int main()
{
    using namespace std;
    int x;
    for(cin>>x; x==0; cin>>x)
    {
        cout<<"dzien dobry: ";

    }
    int y=2;
    bool cos;
    cos=x+3>6-2;
    cout.setf(ios_base::boolalpha);
    cout<<cos<<endl;
    int cos2;
    cos2=x+(3>y)-2;
    cout<<cos2<<endl;
    cin.get();
    cin.get();
    return 0;
}
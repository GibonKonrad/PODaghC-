#include<iostream>
int main()
{
    using std::cout;
    using std::endl;
    using std::cin;

    int x=20;
    {
        cout<<x<<endl;
        int x=10;
        cout<<x<<endl;
    }
    cout<<x<<endl;
    cin.get();
    cin.get();
    return 0;
}
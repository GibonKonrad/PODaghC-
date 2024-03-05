#include<iostream>
int main()
{
    using namespace std;
    char ch;
    int count=0;
    cin.get(ch);
    while(cin.fail()==0, cin.eof()==0)
    {
        cout<<ch;
        ++count;
        cin.get(ch);
    }
    cout<<endl<<"wczytano: "<<count<<"znakow\n";
    cin.clear();
    cin.get();
    cin.get();
    return 0;
}
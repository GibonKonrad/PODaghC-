#include<iostream>
int main()
{
    using namespace std;
        int quizscores[10]{20,20,20,20,20,29,20,28,20,20};
    
    cout<<"Bezblednie\n";
    int i;
    for(i=0;quizscores[i]==20;i++)
        cout<<"test "<<i<<"ma wartosc: 20 "<<endl;
    //bledy
    for(i=0; quizscores[i]=20; i++)
        cout<<"test "<<i<<"ma wartosc 20\n";
    cin.get();
    cin.get();
    return 0;
}
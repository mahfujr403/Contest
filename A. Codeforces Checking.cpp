#include<iostream>
using namespace std;

void solve()
{
    char ch;
    cin>>ch;

    if(ch == 'c' | ch == 'o' | ch == 'd' | ch == 'e' | ch == 'r' | ch == 's' | ch == 'f' )
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}



int main()
{
 int n;
 cin>>n;

 while(n--)
 {
     solve();
 }
    return 0;
}

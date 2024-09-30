#include <iostream>
#include <stack>
#include <string>

using namespace std ;
int main() {
    int t ;
    cin>> t ;
    while (t--)
    {
        stack <int> uppercase ;
        stack <int> lowercase ;
        string str ;
        cin >> str ;
        int len = str.length();
        for( int i=0 ; i< len ; i++)
        {
            if( str[i]>='A' && str[i]<='Z')
            {
            if( str[i]!='B' )
            {
            uppercase.push(i) ;
            }
            if( str[i]=='B')
            {
                str[i] = '0';
                if(!uppercase.empty())
                {
                str[uppercase.top()]='0';
                uppercase.pop() ;
                }
            }
            }
            else 
            {
             if( str[i]!='b' )
            {
            lowercase.push(i) ;
            }
            if( str[i]=='b')
            {
                str[i] = '0';
                if(!lowercase.empty())
                {
                str[lowercase.top()]='0';
                lowercase.pop() ;
                }
            }
            }
            
        }
        for( int i=0 ; i<len ; i++)
        {
            if( str[i]!='0')
            {
                cout<<str[i];
            }
        }
        cout<<'\n';
    }
    return 0;
}
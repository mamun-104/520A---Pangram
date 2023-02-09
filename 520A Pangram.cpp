#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    string s;
    cin>>n;
    cin>>s;
    for(i=0;i<n;i++)
    {
        s[i]=toupper(s[i]);
    }

    if(n>=26){
            //now A initializer kore ni
            char j = 'A';

            for( i=0;i<26;i++){

            if(s.find(j)!=-1)
            {
                j++;
            }
            else
            {
                cout<<"NO\n";
                return 0;
            }
            }
            cout<<"YES\n";

    }
    else{
         cout<<"NO\n";
        return 0;
    }






    return 0;
}

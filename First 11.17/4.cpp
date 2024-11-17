#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s[100];
    cin>>s;
    int t=0;
    int n=strlen(s);
    for (int i=0;i<n;i++)
    if(s[i]=='.'||s[i]=='/'||s[i]=='%') t=i;//考虑小数、分数、和百分数
    if (t==0)
    {
        reverse(s,s+n);
        int j=0;
        while (s[j]=='0') ++j;
        if (j==n) cout<<"0";
        else cout<<s+j;
    }
    else if (t==n-1)
    {
        reverse(s,s+n-1);
        int j=0;
        while (s[j]=='0') ++j;
        if (j==n-1) cout<<"0%";
        else cout<<s+j;
    }
    else if (s[t]=='/')
    {
        reverse(s,s+t);
        int j=0;
        while (s[j]=='0') ++j;
        if (j==t) cout<<"0/";
        else
        {
            for (int i=j;i<=t;i++) cout<<s[i];
        }
        reverse(s+t+1,s+n);
        j=t+1;
        while(s[j]=='0') ++j;
        cout<<s+j;
    }
    else
    {
        reverse(s,s+t);
        int j=0;
        while (s[j]=='0') ++j;
        if (j==t) cout<<"0.";
        else 
        {
            for (int i=j;i<=t;i++) cout<<s[i];
        }
        reverse(s+t+1,s+n);
        j=t+1;
        while (s[j]=='0'&&j<n) ++j;
        int k=n-1;
        while (s[k]=='0'&&k>t) --k;
        if (j>k) cout<<'0';
        else 
       {
            for (int i=j;i<=k;i++) cout<<s[i];
        }
    }
    return 0;
}
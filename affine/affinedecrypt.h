#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int inverse (int a)
{
    for (int i=0;i<26;i++)
    {
        if(((a%26)*(i%26))%26 ==1)
        {
            if(i<0)
            {
              i = 26+i;
            }
            return i;
        }
    }
}
string decrypt(string str,int a,int b,int n)
{
    str = chartoint(str,n);
    int c = inverse(a);
    for(int i=0;i<n;i++)
    {
        if(int(str[i]) !=32)
        {
            str[i] = (c *(str[i]-b)%26);
            if(int(str[i])<0)
            {
              str[i] = -26 - str[i];
              if(int(str[i])<0)
              {
                str[i] = -(str[i]);
              }
            }
        }
    }
    str = asc(str,n);
    return str;
}

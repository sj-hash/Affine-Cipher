#include<iostream>
#include<cstring>
using namespace std;
string chartoint(string str ,int n)
{
  for(int i=0;i<n;i++)
  {
    if(str[i]!=32)
    {
      str[i] = str[i]-97;
    }
  }
  return str;
}
string asc(string str,int n)
{
    for(int i=0;i<n;i++)
    {
        if(int(str[i] != 32 ))
        {
             str[i] = str[i]+97;
        }
    }
    return str;
}
string encrypt (string str,int a,int b,int n)
{
    str = chartoint(str,n);
    for (int i=0;i<n;i++)
    {
        if(int(str[i] != 32 ))
        {
            str[i] = (str[i] *a)+b;
            str[i] = str[i]%26;
        }

    }
    str = asc(str,n);
    return str;
}

#include<iostream>
#include"affineencrypt.h"
#include"affinedecrypt.h"
using namespace std;
int main()
{
  string s,str;
  int a,b;
  cout<<"Enter a string ";
  getline(cin,s);
  cout<<"Enter the keypairs ";
  cin>>a>>b;
	char cha;
	cout<<"Enter the operation (encryption / decryption ) ";
	cin>>cha;
  int length =s.length();
	if(cha == 'e'|| cha == 'E')
	{
		 str = encrypt(s,a,b,length);
	}
	else if(cha == 'd'||cha =='D')
	{
		 str = decrypt(s,a,b,length);
	}
	else
		{
			cout<<"Input error ";
			return 1;
		}
  cout<<str;
  return 0;
}

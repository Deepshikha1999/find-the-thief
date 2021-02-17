//find the theif and rescue the queen
#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s[]={"king","queen","thief","cop"};
	int a[]={0,1,2,3};
	string b[4];
	bool v=true;
	while(v==true)
	{
	unsigned seed=0;
	random_shuffle(a,a+4);
	for(int i=0;i<4;i++)
	{
		b[a[i]]=s[i];
	}
	for(int i=0;i<4;i++)
	{
		if(b[i]=="king"||b[i]=="cop")
		cout<<"player "<<i+1<<": "<<b[i]<<endl;
		
		else
		cout<<"player "<<i+1<<": XXXXXX"<<endl;
		
	}cout<<endl<<endl;
	int x;
	cout<<"who is the thief?"<<endl;
	cin>>x;
	
	if(b[x-1]=="thief")
	cout<<"WINNER"<<endl;
	
	else
	cout<<"LOOSER"<<endl;
	for(int i=0;i<4;i++)
	{
		cout<<"player "<<i+1<<": "<<b[i]<<endl;
	}
	cout<<"want to play more: ";
	cin>>v;
	}
	
}

#include <bits/stdc++.h>
using namespace std;

int my(string s){
	//set variables
	int l=s.length(),count=0;
	for(int i=0;i<l;i++){
		//count no of 1's
		if(s[i]!='0') 
			count++;
	}
	//if no of 1=total length then no 1[0]1 pattern
	if(count==l) 
		return 0;
	
	int i=0,flag=0,start=0,end=1;
	count=0;

	while(i<l){
		//go to first '1' of a pattern
		while(s[i]!='1'){ 
			i++;
		}
		//first 1 is found,check the next
		i=i+1;
		//if next is a 0
		if(s[i]=='0'){ 
			//procedd till elements are 0
			while(s[i]=='0')
				i++;
			//if the element after end of 0 substring is 1
			if(s[i]=='1'){
				//pattern is found & increase count
				count++;
			}
		}
	}
	return count; //return no of pattern
}

int main()
{  

	cout<<"program to find no of 1[0]1 patterns in string"<<endl;
	string s;
	cout<<"enter string"<<endl;  
	cin>>s;
	int k=my(s);
	cout<<k<<endl;    

	return 0;
}

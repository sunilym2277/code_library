#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,k;
	//n is no of students, k is the input K

	cout<<"enter no of student\n";
	scanf("%d",&n);
	
	map<int,vector<int>,greater <int>> records;//declare records
	set<int,greater<int>> numbers;//declare numbers
	
	int no;
	cout<<"enter the marks of the students\n";
	for(int i=0;i<n;i++){
		cin>>no;
		//for key value build the vector list
		records[no].push_back(i); 
		//to avoid duplicate
		if(numbers.find(no)==numbers.end()) 
			numbers.insert(no); //insert marks to set
	}
	
	cout<<"enter K\n";
	cin>>k; //input K

	cout<<"Toppers are: ";
	//printing the indices
	for(int i=0;i<k;i++){ 
		auto ij=numbers.begin();
		advance(ij,i);
		//printing the associated vector
		for(auto it=records[*ij].begin();it!=records[*ij].end();it++){ 
			printf("%d ",*it);
		}
	}

	cout<<endl;
	
	return 0;
}

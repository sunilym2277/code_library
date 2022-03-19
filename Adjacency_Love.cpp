#include <bits/stdc++.h>
using namespace std;
#define pb push_back

int main() {
	int t;
	cin>>t;
	while(t--){
	    int N1;
	    cin>>N1;
	    std::vector<int>A11;
	    std::vector<int>A22;
	    for(int i=0;i<N1;i++){
	        int tmp1;
	        cin>>tmp1;
	        if(tmp1&1) A11.pb(tmp1);
	        else A22.pb(tmp1);
	    }
	    if(A11.size()==N1&&(N1&1)) cout<<-1<<endl;
	    else if(A11.size()==1&&A22.size()>0) cout<<-1<<endl;
	    else if(A11.size()==1&&A22.size()==0) cout<<A11[0]<<endl;
	    else if(A11.size()>=2){
	        if(A11.size()&1){cout<<A11[0]<<" ";
	        for(int i=0;i<A22.size();i++){
	            cout<<A22[i]<<" ";
	        }
	        for(int i=1;i<A11.size();i++){
	            cout<<A11[i]<<" ";
	        }
	        cout<<endl;
	    }else{
	        for(int i=0;i<A22.size();i++){
	            cout<<A22[i]<<" ";
	        }
	        for(int i=0;i<A11.size();i++){
	            cout<<A11[i]<<" ";
	        }
	        cout<<endl;
	    }
	}else{
	    cout<<-1<<endl;
	}
	}
	return 0;
}

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	  
	    string x;
	      cin>>x;
	    int l=x.size();int c=0;int ans=0;
	    for(int i=0;i<l;i++){
	        if((x[i]!=x[0])&&x[i]!=x[l-1])
	            c=c+1;
	            else
	            c=0;
	            ans=max(ans,c);}
	         if(ans==0)
	             cout<<-1<<endl;
	             else
	             cout<<ans<<endl;
	}
	return 0;
}

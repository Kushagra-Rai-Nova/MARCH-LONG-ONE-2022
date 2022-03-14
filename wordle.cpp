#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a;
	
	cin>>a;
	while(a--){
	    string b,t,m=" ";
	    cin>>b;
	  
	    cin>>t;
	    for(int i=0;i<5;i++){
	        if(b[i]==t[i])
	        m=m+"G";
	        else
	        m=m+"B";
	    }
	    cout<<m<<endl;
}
	return 0;
}

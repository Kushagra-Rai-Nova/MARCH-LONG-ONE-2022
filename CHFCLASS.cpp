#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    if(n<6){
	    cout<<"0"<<endl;}
	    else{
	    int l=(n+1)/7;
	    cout<<l<<endl;}
	}
	return 0;
}

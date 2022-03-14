#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,a,b,c,large;
	cin>>t;
	while(t--){
	    cin>>a>>b>>c;
	    large = a > b ? (a > c ? a : c) : (b > c ? b : c) ;
	    cout<<large<<endl;
	}
	return 0;
}

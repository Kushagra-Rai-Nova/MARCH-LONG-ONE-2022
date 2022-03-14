#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x,y,val,sal;
	cin>>t;
	while(t--){
	    cin>>x>>y;
	    val=2*y;
	    sal=x/val;
	    cout<<sal<<endl;
	}
	return 0;
}

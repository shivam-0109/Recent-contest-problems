#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string s1="START38",s2="LTIME108";
	    int n;
	    cin>>n;
	    int n1=0,n2=0;
	    for(int i=0;i<n;i++){
	        string s;
	        cin>>s;
	        n1+=s==s1;
            n2+=s==s2;
	    }
	     cout<<n1<<" "<<n2<<"\n";
	}
	return 0;
}

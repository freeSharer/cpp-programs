#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin >>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n-1];
	    for(int i=0;i<n-1;i++)
	        cin>>a[i];
	        
	   int sum=0;
	   for(int i=0;i<n-1;i++)
	        sum+=a[i];
	        
	   int sum1=(n+1)*(n)/2;
	   cout << sum1-sum<<endl;
	}
	return 0;
}
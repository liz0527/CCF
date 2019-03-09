#include <iostream>
using namespace std;
int main(){
	int n,count=0;
	cin >> n;
	int num[n];
	for(int i=0;i<n;i++){
		cin >> num[i];
	}
	for(int i=1;i<n-1;i++){
		if((num[i]-num[i-1])*(num[i+1]-num[i])<0){
			count++;
		}
	}
	cout << count;
	return 0;
}
#include <iostream>
using namespace std;
struct window {
	int num;
	int x1,y1,x2,y2;
};
int main(){
	int n,m,x,y;
	cin >> n >> m;
	window win[n+m];
	for(int i=0;i<n;i++){
		win[i].num = i+1;
		cin >> win[i].x1 >> win[i].y1 >> win[i].x2 >> win[i].y2;
	}
	int count = n-1;
	for(int i=0;i<m;i++){
		cin >> x >> y;
		int flag=0;
		for(int j=count;j>=0;j--){
			if(win[j].num!=-1 && x>=win[j].x1 && x<=win[j].x2 && y>=win[j].y1 && y<=win[j].y2){
				cout << win[j].num << endl;
				flag=1;
				count++;
				win[count].num = win[j].num;
				win[count].x1 = win[j].x1;
				win[count].x2 = win[j].x2;
				win[count].y1 = win[j].y1;
				win[count].y2 = win[j].y2;
				win[j].num = -1;
				break;
			}
		}
		if(flag==0) cout << "IGNORED" << endl;
	}
	return 0;
}
#include<iostream>
#include<algorithm>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect *R ,Rect *S){
	Rect ans;
	ans.x = min(R->x+R->w,S->x+ S->w) -max(R->x,S->x);
	ans.y = min(R->y,S->y) -max(R->y-R->h,S->y-S->h);
	if (ans.x*ans.y<0) return 0;
	else{
		return ans.x*ans.y;
	}
}
int main(){
	Rect R1 = {-1,2,6.9,9.6};
	Rect R2 = {0,0,1.2,2.5};	
	cout << overlap(&R1,&R2);
	return 0;
}

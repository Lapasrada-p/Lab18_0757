#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect R,Rect S){
	double L1,L2;
	L1 = min(R.x+R.w,S.x+S.w) -max(R.x,S.x);
	L2 = min(R.y,S.y) -max(R.y-R.h,S.y-S.h);
	if (L1*L2<0) return 0;
	else{
		return L1*L2;
	}
}

int main(){
	Rect R1 = {-1,2,6.9,9.6};
	Rect R2 = {0,0,1.2,2.5};	
	cout << overlap(R1,R2);	
	return 0;
}

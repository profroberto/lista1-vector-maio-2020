#include <bits/stdc++.h>
using namespace std;
float p,s=0;
int qp=0;
int main() {
    cin>>p;
    while(p!=0 && qp<7 && s<560){
        s+=p;
        qp++;
        cin>>p;
    }
    cout<<qp<<endl<<fixed<<setprecision(1)<<s;
	return 0;
}
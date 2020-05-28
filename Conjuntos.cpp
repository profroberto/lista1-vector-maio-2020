#include<bits/stdc++.h>
using namespace std;
vector <int>a,b,c;
int main(){
    for(int i=0;i<5;i++){
        int aux;
        cin>>aux;
        a.push_back(aux);
    }
    for(int i=0;i<5;i++){
        int aux;
        cin>>aux;
        b.push_back(aux);
    }
    vector<int>::iterator it;
    for(int i=0;i<5;i++){
        it= find(b.begin(),b.end(),a.at(i));
        if(it!=b.end())c.push_back(a.at(i));
    }
    for(int i=0;i<c.size();i++)cout<<c.at(i)<<" ";

}
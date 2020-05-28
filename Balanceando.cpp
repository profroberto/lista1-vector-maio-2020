#include<bits/stdc++.h>
using namespace std;
vector <int>p,s;
int n,a,f,c;
int main(){
    cin>>a>>f>>n;
    for(int i=0;i<n;i++){
        int aux;
        cin>>aux;
        s.push_back(aux);
    }
    for(int i=0;i<n;i++){
        if(s.at(i)==a){
            p.push_back(a);
        }else{
            if(p.empty()){
                cout<<"Desbalanceada!";
                return 0;
            }else{
                c=p.at(p.size()-1);
                p.pop_back();
                if(c!=a){
                    cout<<"Desbalanceada!";
                    return 0;
                }
            }
        }

    }
    if(p.size()==n)cout<<"Desbalanceada!";else cout<<"Balanceada!";
}

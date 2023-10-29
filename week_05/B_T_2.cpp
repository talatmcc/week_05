#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector <int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    sort(v.begin() , v.end());
    int q; cin>>q;
    while(q--){
        int x; cin>>x;

        auto it_u = upper_bound(v.begin() , v.end() , x );
        auto it_l = lower_bound(v.begin() , v.end() , x );

        if( it_l == v.begin()){
            cout<<"X"<<" ";
        }
        else{
            it_l--;
            cout<<*it_l<<" ";
        }

        if(it_u == v.end()){
            cout<<"X"<<endl;
        }
        else{
            cout<<*it_u<<endl;
        }

    }    
    return 0;
}
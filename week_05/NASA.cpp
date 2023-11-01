#include<bits/stdc++.h>
using namespace std;

bool isPalindrome( int n ){
    string str = to_string(n);
    string copy = str;
    reverse(copy.begin() , copy.end());
    return str == copy;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector <int> v(n);

        for(int i=0;i<n;i++){
            cin>>v[i];
        }

        int count = 0;
        for( int i=0;i<n;i++){
            for( int j=0; j<n; j++){
                int val = v[i] ^ v[j];
                if( isPalindrome(val)){
                    // cout<< v[i]<<" "<<v[j]<<"=="<<val<<endl;
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
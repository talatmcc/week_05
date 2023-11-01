#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        set <char> my_set;
        int ans = 1;
        
        for(int i=0;i<s.length();i++){
            my_set.insert(s[i]);
            if(my_set.size() > 3){
                ans++;
                my_set.clear();
                my_set.insert(s[i]);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
/*#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>nums;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        int count=0;
        nums.push_back(x);
        for(int j=1;j<=x;j++){
            if(x%j==0){
                count++;
            }
        }
        if(count==3){
            cout<<"YES"<<endl;
        } else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
    */

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<long long> nums;

    for(int i = 0; i < n; i++){
        long long x;
        cin >> x;
        nums.push_back(x);

        int count = 0;

        long long root = sqrt(x);

        if(root * root == x){
            bool prime = true;

            if(root < 2){
                prime = false;
            } else{
                for(long long j = 2; j * j <= root; j++){
                    if(root % j == 0){
                        prime = false;
                        break;
                    }
                }
            }

            if(prime){
                count = 3;
            }
        }

        if(count == 3){
            cout << "YES\n";
        } else{
            cout << "NO\n";
        }
    }

    return 0;
}
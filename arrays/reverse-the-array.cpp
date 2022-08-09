#include<bits/stdc++.h>
using namespace std;

int main(){
freopen("../input.txt", "r", stdin);
freopen("../output.txt", "w", stdout);
    
    vector<int> v{12,23,45,67,78,89};

    for(int i=0; i<v.size()/2; i++){
        int temp = v[i];
        v[i]=v[v.size()-i-1];
        v[v.size()-i-1]= temp;
    }

    //printing the vector
    for (int i = 0; i < v.size(); i++)
    {
       cout<<v[i]<<endl;
    }
    
    return 0;
}
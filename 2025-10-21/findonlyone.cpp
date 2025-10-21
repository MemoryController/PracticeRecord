#include<bits/stdc++.h>
using namespace std;
string str;
int nums[26]; //存储每个字母出现的次数
char finded[26]; //出现过的
bool flag = false; //有没有出现
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    for(int i=0;i<26;i++){
        nums[i] = 0;
    }
    cin>>str;
    for(int i=0;i<str.length();i++){
        nums[str[i]-'a']++; //计数加一
    }
    for(int i=0;i<str.length();i++){
        //找第一个出现一次的
        if(nums[str[i]-'a'] == 1){
            flag = true;
            cout<<str[i]<<'\n';
            break;
        }
        
    }
    
    if(!flag){
        cout<<"no\n";
    }
   

    return 0;

}
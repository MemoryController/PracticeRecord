#include<bits/stdc++.h>
using namespace std;

const char enum_digit[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
string trans(int n, int base,string result){
    // 外部调用时result应当为""
    if((int)(n/base)){
        // 还剩若干位
        result = result.insert(0,1,enum_digit[n%base]);
        return trans((int)(n/base),base,result);

        
    }else{
        //如果只剩一位了
        return result.insert(0,1,enum_digit[n]); // 在索引0 插入一个
        
    }

}
int num,digit_base;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin>>num>>digit_base;
    cout<<trans(num,digit_base,"")<<'\n';


    return 0;
}
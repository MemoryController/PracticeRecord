#include <bits/stdc++.h>
using namespace std;
string word,text;
long long num,first_idx = -1; 
int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(0); 
    getline(cin,word);
    getline(cin,text);
    for(long long i=0;i<word.length();i++){
        if(word[i]<='z' && word[i]>='a'){
            word[i] = word[i] + 'A' - 'a';
        }
    }
    for(long long i=0;i<text.length();i++){
        if(text[i]<='z' && text[i]>='a'){
            text[i] = text[i] + 'A' - 'a';
        }
    }
    num = 0;
    for(long long i=0;i<text.length()-word.length()+1;i++){
        bool finded = true;
        if((i+word.length())<text.length()){
            if(text[i+word.length()] != ' '){
                //保证单词后面是空格或者末尾
                continue;
            }
        }
        if(i!=0){
            if(text[i-1] != ' '){
                //保证单词前是空格或者头部
                continue;
            }
        }
        
        for(long long j=i;j<word.length()+i;j++){
            if(text[j]==' '){
                //检测区域不要空格
                finded = false;
                break;
            }
            if(text[j]!=word[j-i]){
                finded = false;
                break;
            }
        }
        if(finded){
            num++;
            if(first_idx==-1){
                //第一个出现的位置
                first_idx = i;
            }
        }
    }
    if(num!=0){
        cout<<num<<' '<<first_idx<<'\n';
    }else{
        cout<<-1<<'\n';
    }
    
    return 0;
}
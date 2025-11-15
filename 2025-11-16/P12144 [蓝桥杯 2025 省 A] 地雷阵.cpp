#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int N = 1e5+10;
typedef pair<int,int> pii;
typedef pair<double,double> pdd;

double distance(int xa,int ya,int xb, int yb){
    return sqrt((xb-xa)*(xb-xa)+(yb-ya)*(yb-ya));
}
pdd angle_range(int x,int y,int r){
    double sin_num =(double)r/distance(0,0,x,y);
    double angle_delta = asin(sin_num); // 角度变化量相较于中心
    //求圆心位置找theta
    double theta = atan2(y,x);
    
    return pdd(theta-angle_delta,theta+angle_delta);

}

int num;
pdd ranges[N];
double ans=0;
void solve(){
    cin>>num;
    for(int i=1; i<=num; i++){
        int x,y,r;
        cin>>x>>y>>r;
        ranges[i] = angle_range(x,y,r);
    }
    sort(ranges+1,ranges+1+num);

    double l=-1,r=-1;
    for(int i=1; i<=num; i++){
        if(ranges[i].first>r){
            ans += r-l;
            l = ranges[i].first;
            r = ranges[i].second;
        }else if(ranges[i].second>r){
            r = ranges[i].second;
        }
    }
    ans += r-l;
    printf("%.3f",1-ans/M_PI*2);



}

int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int _=1;
    while(_--){
        solve();
    }
    return 0;
}
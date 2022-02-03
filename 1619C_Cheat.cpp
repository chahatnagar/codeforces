#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
/*cmrcet*/
void run(){
 string a,s,b1="";
 cin>>a>>s;
 ll as,ss;
 while(a.size()<s.size()){
  a='0'+a;
 }
 while(a.size()!=0 && s.size()!=0){
  as=a.size(), ss=s.size();
  ll re=0;
  ll n=(s[ss-1]-'0')-(a[as-1]-'0')-re;
  if(n<0){
   re=1;
   n+=10;
   if(s[ss-2]!='1'){
    cout<<-1<<endl;
    return;
   }
   a.erase(as-1,1);
   s.erase(ss-2,2);
  }else {
   a.erase(as-1,1);
   s.erase(ss-1,1);
  }
  b1=char(n+'0')+b1;
 }
 while(b1[0]=='0') b1.erase(0,1);
 while(a[0]=='0') a.erase(0,1);
 if(a.size()==0 && s.size()==0) cout<<b1<<endl;
 else cout<<-1<<endl;
}
main(){
 ll t;
 cin>>t;
 while(t--) run();
 return 0;
}
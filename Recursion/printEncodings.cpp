#include <bits/stdc++.h>
#include<sstream>
using namespace std;
void printAllEncoding(string ques,string asf){
    if(ques.length()==0){
        cout<<asf<<endl;
        return;
    }
    else if(ques.length()==1){
        char ch=ques[0];
        if(ch=='0')return;
        else {
            int chv=ch-'0';
            char code=(char)('a'+chv-1);
            cout<<asf+code<<endl;
            return;
        }
    }
    else {
        char ch=ques[0];
        string roq=ques.substr(1);
        if(ch=='0'){
            return;
            
        }
        else {
            int chv=ch-'0';
            char code=(char)('a'+chv-1);
            
            printAllEncoding(roq,asf+code);
        }
        string ch12=ques.substr(0,2);
        string roq12=ques.substr(2);
        stringstream ss;
        ss<<ch12;
        int chv;
        ss>>chv;
        if(chv<=26){
            char code=(char)('a'+chv-1);
            printAllEncoding(roq12,asf+code);
        }
        

    }
}
int main(){
    string number;
    cin>>number;
    printAllEncoding(number,"");
}
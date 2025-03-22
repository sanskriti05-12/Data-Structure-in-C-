#include<iostream>

#include<unordered_map>
using namespace std;
int romantoint(string s)
{
    unordered_map<char,int>up{{'I,1'},{'v',5},{'x',10}};
    int r=0;
    for(int i=0;i<s.size();i++)
    {
        if(up[s[i]]<up[s[i+1]])
        {
            r=r-up[s[i]];
        }
        else
        {
            r=r+up[s[i]];
        }
    }
    return r;

    
}
int main(){
    string s="XI";
    cout<<romantoint(s);
}
// 21 march interview questions 
// time complexity order of 1//map =log n


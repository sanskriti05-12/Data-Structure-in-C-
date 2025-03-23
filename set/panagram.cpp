#include<iostream>
#include<unordered_map>
using namespace std;
int panagram(string &s)
{
    unordered_map<char,int>up{{'a,1'},{'b',2},{'c',3},{'d',4},{'e',5}};

}

int main(){
    // string s="quick brown fox jumps over the lazy dog";
    if(panagram(s))
    {
        cout<<"it is panagram";
    }
    else{
        cout<<"not";
    }

}
// #include<iostream>

// #include<map>
// using namespace std;
// int main(){
//     map<int,int>student;
//     student.insert({102,21});

//      student.insert({103,44});
//       student.insert({101,66});
//       student[162]=20;
//       student[132];
//       student[132]++;
//     for(auto p:student)
//     {
//         cout<<p.first<<","<<p.second<<"\n";
//     }
    

// // }
// // occureence of characters
// #include<iostream>

// #include<map>
// using namespace std;
// void occur(string s)
// {
// map<char,int>mp;
// for(int i=0;i<s.size();i++)
// {
// mp [s[i]]++; 
// }
// for (auto p:mp)
// {
//     cout<<p.first<<"="<<p.second<<"\n";
// }
// }

// int main(){
//     string s="wellcome";
//     occur (s);
// } 
//20 th march

//input lena dynamic programming

// }
// occureence of characters
#include<iostream>

#include<map>
using namespace std;
int main(){
    map<int,string>mp;
    int roll ,n;
    string name;
    cout<<"enter how many records";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<"enter roll no";
        cin>>roll;
        cout<<"enter name";
        cin>>name;
        mp.insert({roll,name});

    }
    cout<<"\n records are \n";
    for(auto p:mp)
    {
        cout<<p.first<<":"<<p.second<<"\n";

    }
    cout<<"enter roll no.for searching";
    cin>>roll;
     auto k=mp.find(roll);
    if( k!=mp.end())
    {
        // cout<<k->first<<","<<k->second<<"\n";
        mp.erase(roll);
    }
    else
    {
        cout<<"not found";
    }

}

 



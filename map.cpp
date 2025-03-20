#include<iostream>

#include<map>
using namespace std;
int main(){
    map<int,string>student{{101,"amit"},{102,"sumit"},{103,"ani"}};
    for(auto p:student)
    {
        cout<<p.first<<","<<p.second<<"/n";
    }
    cout<<"size="<<student.size()<<"\n";
    for(auto p=student.begin();p!=student.end();p++)
    {
      cout<<p->first<<","<<p->second<<"/n";   
    }

}
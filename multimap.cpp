#include<iostream>

#include<map>
using namespace std;
int main()
{
    multimap<int,string>multi;
    multi.insert({101,"sunny"});
      multi.insert({91,"ravi"});
        multi.insert({101,"honey"});
          multi.insert({901,"ruhi"});
          for(auto p:multi)
          {
            cout<<p.first<<","<<p.second;

          }
        auto=it multi.find(101);
        if(it!=multi.end())
        {
            multi.erase(it);
        }
        else{
            cout<<"not found";

        }
        cout<<"\n";
        for(auto p:multi)
        {
            cout<<p.first<<","<<p.second;
        }
}

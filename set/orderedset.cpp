#include<iostream>

#include<set>
using namespace std;
int main(){
    set<int>student;
    student.insert(10);
     student.insert(9);
      student.insert(4);
       student.insert(23);
       for (auto p:student)
       {
        cout<<p<<"\n";
       }
       student.erase(4);
       cout<<"\n";
       for(auto p:student)
       {
        cout<<p<<"\n";
       }

}
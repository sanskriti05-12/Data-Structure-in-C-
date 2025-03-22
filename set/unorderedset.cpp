#include<iostream>

#include<unorderedset>
using namespace std;
int main(){
    unordered_set<int>student;
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
//  quick brown fox jumps over the lazy dog panagram sentences jisme 26 alphabet pure present hona chaiye
//  wap to check the given string is panagram or not
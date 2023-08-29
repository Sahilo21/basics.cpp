#include<iostream>
#include<deque>

using namespace std;
int main(){

deque<int> d;

d.push_back(4);
d.push_front(2);
d.push_back(3);

for(int i:d){
    cout<<i<<endl;
}

cout<<"Print first element-> "<<d.at(0)<<endl;

cout<<"Before erease ->"<<d.size()<<endl;
d.erase(d.begin(),d.begin()+1);
cout<<"After erase ->"<<d.size()<<endl;

return 0;
}

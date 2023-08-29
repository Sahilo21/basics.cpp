#include<iostream>
#include<list>

using namespace std;

int main(){

list<int> l;

//transfer into new list
list<int> n(5,100);
for(int i:n){
    cout<<i<<endl;
}

l.push_front(1);
l.push_back(2);
l.push_back(3);

for(int i:l){
    cout<<i<<" "<<endl;
}

l.erase(l.begin());
for(int i:l){
    cout<<i<<" "<<endl;

}


}

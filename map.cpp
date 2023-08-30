#include<iostream>
#include<map>

using namespace std;
int main()
{
    //sorted map me humesesah sequence se kaam hota h
    //unoreded hota hai unsorted
    map<int,string> m;

    m[1]="SAHIL";
    m[13]="kumar";
    m[2]="BHOT";

    m.insert( {5,"bheem"});
    for(auto i:m)
    {
        cout<<i.first<<"  "<<i.second<<endl;
    }

}


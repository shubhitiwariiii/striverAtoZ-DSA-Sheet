#include<bits/stdc++.h>
using namespace std;


// as we talked about set-> it means sorted and unique.
// time complexity of set insert , erase is O(log n)
void explainSet(){
    set<int> st;
    st.insert(1);
    st.emplace(2);
    st.insert(2);
    st.insert(4);
    st.insert(3);
    st.insert(5);

    //functionality of insert into vector can be used also, 
    // that only increases effieciency.
    //begin(), end(), rbegin(), rend(),size(), empty(), and swap() same as vector.
    
    //{1 , 2 , 3 , 4 , 5}
    auto it = st.find(3);
    //{1 , 2 , 3 , 4 , 5}
    auto it = st.find(3);

    //(1, 4, 5)
    st.erase(5); //erase 5 (take log time)

    int cnt = st.count(1);
    auto it = st.find(1);
    st.erase(it); // takes constant time

    auto it1 = st.find(2); 
    auto it2 = st.find(4); 
    st.erase(it1, it2);// after erase (1, 4, 5) [first, last)
    
    // lower_bound() and upper_bound() function works in same way as in vector it does.
    
    auto it = st.lower_bound(2);
    auto it = st.upper_bound(3);


}

void multiSet(){ 
    // it stores sorted and duplicate also.
    multiset<int> ms;
    ms.insert(1);
    ms.emplace(1);
    ms.insert(1);

    //(1, 1, 1)
    ms.erase(1); //erase all 1's 

    int cnt = ms.count(1);

    //only single one erased
    ms.erase(ms.find(1));

    // ms.erase(ms.find(1), ms.find(1)+2); 

    // reset all function same as set
}

void explainUSet(){
    unordered_set<int, int> st;
    // in most cases it TC : O(1)

    // lower_bound() and upper_bound() doesn't work, rest of all functions are as same above
    // it does not store in any particular order , it has better time complexity than set in most cases
    // except some when collisions happens.
     
}

void explainMap(){
    //map stores unique keys in sorted order.
    map<int, int> mpp;
    map<int, pair<int, int>> mpp;
    map<pair<int, int>, int> mpp;

    mpp[1] = 4; // {1,2}
    // mp.emplace({3,1});
    mpp.insert({2,4}); //{2,4}
    // mpp[{2,3}] = 10; // {{2,3}, 10}
    // {
    //     {1, 2}
    //     {2, 4}
    //     {3, 1}
    // }
    for(auto it : mpp){
        cout << it.first << " "<< it.second;
    }
    cout << mpp[1];
    cout << mpp[5];

    auto it = mpp.find(3);
    // cout << *(it).second;

    auto it = mpp.find(5);

    //this is the syntax
    auto it = mpp.lower_bound(3);
    auto it = mpp.lower_bound(5);

    // erase, swap, size, empty are all same as above.
}

void explainMultiMap(){
    // everything same as map,  only it can store multiple key
    // only mpp[key] cannot used here.

}

void explainUnorderedMap(){
    //  unique but not sorted keys
    // same as set and unordered_set difference
}




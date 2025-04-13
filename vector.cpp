#include <iostream>
#include <vector>
using namespace std;
 

int main (){

    vector <int> v;

    v.push_back(1);

    cout<<" capacity is :"<< v.capacity() <<endl;
    cout <<"size is :" <<v.size();
    
    v.push_back(2);
    cout<< "capacity is : " << v.capacity () <<endl;
    cout << "size is  :"  << v.size ();

    v.push_back(3);
    cout<< "capacity is : " << v.capacity () <<endl;
    cout << "size is  :"  << v.size ();

    return 0;
}

#include <iostream>

#include <vector>

using namespace std;

int main (){
     
vector<int>v;
 
cout <<"entr 5 element :";

for(int i = 0;i<5;i++){
    int element ;
    cin >>element;
    v.push_back(element);
}
 
for(int i =0 ;i<v.size() ;i++){
    cout << v[i];
}
cout <<endl;
v.insert(v.end(), 7);

for(int i = 0;i<v.size();i++){
    cout <<v[i];
}

cout <<endl;

v.erase(v.end()-1);

for(int i = 0;i<v.size();i++){
    cout <<v[i];
}
 cout <<endl;
int  x ;
cout <<"enter value of x: ";
cin>>x;
//cout <<endl;
for(int i = 0;i<v.size();i++){
    if(x==v[i]){
        cout << i;
    }
} 


cout <<endl;

}
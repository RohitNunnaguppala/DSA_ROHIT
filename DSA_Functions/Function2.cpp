#include<bits/stdc++.h>
using namespace std;

void introdueMe(string name,string city,int age=0){
     cout<<"My name is "<<name<<endl;
     cout<<"I am from "<<city<<endl;
     if(age>0)
            cout<<"My age is"<<age<<endl;
}


int main(){

    string name1,city1;
    int age1;
    cout<<"Name: ";
    cin>>name1;
    cout<<"city: ";
    cin>>city1;
    cout<<"age: ";
    cin>>age1;
    introdueMe(name1, city1, age1);
    //  introdueMe("Rohit","Vizag",19);
    //  introdueMe("Bobby","Bangalore");
    return 0;
}
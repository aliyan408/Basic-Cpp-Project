#include<iostream>
using namespace std;

int main(){
    int total_marks;
    float obtain_marks;
    cout<<"enter total marks=";
    cin>>total_marks;
    cout<<"enter obtain marks=";
    cin>>obtain_marks;
    float percentage=(obtain_marks/total_marks)*100;
    cout<<"percentage="<<percentage<<"%";
}
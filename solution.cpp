#include<iostream>
using namespace std;

string Solve(bool guard,bool door){
    if(guard){
        if(door) return "Safe";
        else return "Return to start";
    }else{
        if(door) return "Trap";
        else return "Safe Exit";
    }
}
int main(){
    bool guard,door;
    cout<<"Is guard telling the truth(1/0)?";
    cin>>guard;
    
    cout<<"Is door marked safe(1/0)?";
    cin>>door;

    string res=Solve(guard,door);
    cout<<"Chosen Door: "<<res<<endl;
    return 0;
}
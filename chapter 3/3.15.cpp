#include<iostream>
#include<string>
using namespace std;

class heartrates{
private:
    string FN,LN;
    int D,M,Y;
    int yy=2019,age,hr,thr;
    
public:
    heartrates(string f,string l,int dd,int o,int b){
        FN=f;
        LN=l;
        D=dd;
        M=o;
        Y=b;
        }
    void getName(){
        cout<<"Name:"<<FN<<LN<<endl;
        }
    void setpart(string a){
        FN=a;
        }
    void memfun(){
        cout<<"Enter Age:"<<D<<"/"<<M<<"/"<<Y<<endl;
        
        age=2019-Y;
        hr=220-age;
        thr=hr-70;
    }
    void output(){
        memfun();
        cout<<"Date of Birth:"<<age<<endl;
        cout<<"Your Heart rate:"<<hr<<endl;
        cout<<"Target Heart rate:"<<thr<<endl;
        }
    };
int main()
{
    heartrates z("waleed","khan",4,24,1999);
    z.getpart();
    z.output();
    
    return 0;
}


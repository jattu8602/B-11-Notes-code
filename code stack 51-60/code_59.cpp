//wap for arithmatic class to add , subtract,multiplication,division and remainder 
// taking 2 variables
class arithmetic{
    private:
    int a;
    int b;
    public:
    void get();
    void add();
    void sub();
    void multi();
    void div();
    void mod();

};
void arithmetic :: get(){
    cout<<"enter first value:"<<endl;
    cin>>a;
    cout<<"enter second value:"<<endl;
    cin>>b;
}

void arithmetic :: add(){cout<<a+b<<endl;
    
}
void arithmetic :: sub(){cout<<a-b<<endl;
    
}
void arithmetic :: multi(){cout<<a*b<<endl;
    
}
void arithmetic :: div(){cout<<a/b<<endl;
    
}
void arithmetic :: mod(){cout<<a%b<<endl;
    
}
#include<iostream>
using namespace std;

int main(){
    arithmetic a;
    a.get();
    a.add();
    a.multi();
    a.sub();
    a.mod();
    a.div();
    return 0;
}
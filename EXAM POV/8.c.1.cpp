                       /*
                            METHOD -1
                            X=Y
                            */
#include<iostream>
using namespace std;
class rectangle{
    private:
    int l,b;
    public:
    rectangle(int x,int y){
        l = x;
        b = y;

    }
    void area(){
        int area;
        area = l*b;
        cout<<"area is :"<<area<<endl;
    }
};

int main(){
    rectangle r1(55,45);
    rectangle r2 = r1;

    r1.area();
    r2.area();
    return 0;
}
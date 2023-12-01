#include <iostream>
using namespace std;
class magicwand{
    public:
    string wandMaterial;
    int length;
    magicwand(string w=" ",int l =0)
    {
        wandMaterial=w;
        length=l;
    }

    friend magicwand operator+(magicwand x,magicwand y);

};
    magicwand operator+(magicwand x,magicwand y){
        magicwand temp;
        temp.length=x.length+y.length;
        if(x.length>y.length){
            temp.wandMaterial=x.wandMaterial;
        }
        else{
            temp.wandMaterial=y.wandMaterial;
        }
        return temp;
        
    }

int main(){
    magicwand w1("Phoenix Feather",9),w2("Dragon Heartstring",10);
    magicwand w3=w1+w2;

    cout<<"A combined wand with core material= "<<w3.wandMaterial<<" and length "<<w3.length<<" inches"<<endl;


}
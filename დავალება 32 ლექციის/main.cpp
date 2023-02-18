#include <iostream>
using namespace std;


class Square{
    private:
    int length;
    int width;

    public:
    int getlength(){
        return length;
    }
    void setlength(int x){
        length = x;
    }
    int getwidth(){
        return width;
    }
    void setwidth(int y){
        width = y;
    }

    int perimetri(){
        return 2*(width+length);
    }
};


int main(){
    Square square;
    square.setlength(100);
    square.setwidth(200);

    cout << "length and width:  " << square.getlength() << " " << square.getwidth()<<endl;
    cout << "perimetri aris:  " << square.perimetri() << endl; 

    cin.get();
    return 0;
}
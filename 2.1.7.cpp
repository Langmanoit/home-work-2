#include <iostream>
#include <cstring>

struct vector {
    float x;
    float y;
    float z;
};

void plus(vector& aa, vector& bb) {
    aa.x+=bb.x;
    aa.y+=bb.y;
    aa.z+=bb.z;
}
void minus(vector& aa, vector& bb) {
    aa.x-=bb.x;
    aa.y-=bb.y;
    aa.z-=bb.z;
}
void umn_с(vector& aa, float c) {
    aa.x*=c;
    aa.y*=c;
    aa.z*=c;
}
void del_с(vector& aa, float c) {
    aa.x/=c;
    aa.y/=c;
    aa.z/=c;

}
void scal(vector& aa, vector& bb) {
    aa.x*=bb.x;
    aa.y*=bb.y;
    aa.z*=bb.z;
}
bool eq(vector& aa, vector& bb) {
    bool x=0;
    if (aa.x==bb.x && aa.y==bb.y && aa.z==bb.z){
        x=1;
    }
    
} 

int main() {
    vector aa;
    vector bb;
    vector cc;
    
    aa.x=5.4;
    aa.y=5.4;
    aa.z=5.4;
    bb.x=5.4;
    bb.y=5.4;
    bb.z=5.4;
    
    float c=2.2;
    
    plus(aa, bb);
    std::cout << aa.x<< " " << aa.y << " "<< aa.z << std::endl;
    minus(aa, bb);
    std::cout << aa.x<< " " << aa.y << " "<< aa.z << std::endl;
    umn_с(aa, c);
    std::cout << aa.x<< " " << aa.y << " "<< aa.z << std::endl;
    del_с(aa, c);
    std::cout << aa.x<< " " << aa.y << " "<< aa.z << std::endl;
    scal(aa, bb);
    std::cout << aa.x<< " " << aa.y << " "<< aa.z << std::endl;
    bool f;
    f = eq(aa, bb);
    std::cout << f << std::endl;
    return 0;
}
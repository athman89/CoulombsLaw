#include <iostream>
#include <cmath>
/*Coulombs law of electric charge that show the force between two
 * stationary charge.
 * The electric potential V at point(x,y) due to a charged particle is given by
 * V = kq/r,where q is the charge value,r is the distance form point(x,y) to the charge,k = 8.99×10^9 */
using namespace std;
class charge{
private:
    double rx,ry,q;
public:
    charge(double x1,double y1,double q1){
        rx = x1;
        ry = y1;
        q = q1;
    }
    double potentialAt(double x,double y);
    void toString();
    ~charge();
};

double charge::potentialAt(double x, double y) {
    double k =  8.99e09;
    double dx = x - rx;
    double dy = y - ry;
    return k * q / sqrt(dx*dx + dy*dy);// V = kq/r
}

void charge::toString() {
    cout << q << " at (" << rx << ", " << ry << ")"<<endl;
}

charge::~charge() = default;

int main() {
    double x,y;
    cout <<"Enter two points" <<endl;
    cin >> x >> y;
    charge c1{0.51, 0.63, 21.3};
    charge c2{0.13, 0.94, 81.9};
    double v1 = c1.potentialAt(x,y);
    double v2 = c2.potentialAt(x,y);
    cout << v1 + v2 <<endl;
    c1.toString();
    c2.toString();
    return 0;
}

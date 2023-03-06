#include <iostream>
using namespace std;

struct StructuraMea {
    int x;
    float y;

    void afiseaza() {
        cout << "x = " << x << ", " << "y = " << y << endl;
    }
};

class ClasaMea {
    int x;
    float y;

    public:
        ClasaMea() {
            cout << "constructor apelat" << endl;
        }

        ClasaMea(int x, float y) {
            this->x = x;
            this->y = y;
        }

        ~ClasaMea() {
            cout << "obiectul (" << x << ", " << y << ") este distrus" << endl;
        }

        void setX(int x) {
            this->x = x;
        }

        void setY(float y) {
            this->y = y;
        }

        int getX() {
            return x;
        }

        int getY() {
            return y;
        }

        void afiseaza() {
            cout << "x = " << x << ", " << "y = " << y << endl;
        }
};

template<typename Z>
class Something {
    public:
        Z getValue(Z x) {
            return x;
        }
};

int functie () {
    ClasaMea cm2(90, 76.4);
    cm2.afiseaza();
}

int mod(int a) {
    a = 1000;
}
int mod_ref(int &a) {
    a = 1000;
}

template<typename X>
void printInfo(X myVar) {
    cout << "myVar = " << myVar << endl;
    cout << "sizeof(myVar) = " << sizeof(myVar) << endl;
}

int main() {
    // int x;
    // cin >> x;
    // cout << "Hello, Gigel! I got " << x << " from the PA team!";

    StructuraMea sm;
    sm.x = 8;
    sm.y = 8.7;
    cout << "sizeof(8.7) = " << sizeof(8.7) << endl; // 8
    cout << "sizeof(sm.y) = " << sizeof(sm.y) << endl; // 4
    sm.afiseaza();

    functie();

    ClasaMea cm = ClasaMea();
    cm.setX(9);
    cm.setY(9.7);
    cm.afiseaza();

    ClasaMea cm1 = ClasaMea(2, 3.4);
    cm1.afiseaza();

    int a = 7;
    int *vc = (int *) calloc(4, sizeof(int));
    cout << "vc = " << vc << endl;
    cout << "vc + 1 = " << vc + 1 << endl;
    cout << "vc[1] = " << vc[1] << endl;
    cout << "*(vc+1) = " << *(vc+1) << endl;
    
    int *vcpp = new int[4]; // 0 by default?
    cout << "vcpp = " << vcpp << endl;
    cout << "vcpp + 1 = " << vcpp + 1 << endl;
    cout << "vcpp[1] = " << vcpp[1] << endl;
    cout << "*(vcpp+1) = " << *(vcpp+1) << endl;

    ClasaMea *cms = new ClasaMea[4];
    cms[2].setX(8);
    cms[2].afiseaza();
    ClasaMea *cms_calloc = (ClasaMea *) calloc(4, sizeof(ClasaMea));
    cms_calloc[2].setX(80000000);
    cms_calloc[2].afiseaza();

    // free(cms_calloc+2);
    // delete (cms_calloc+2);
    // delete(cms_calloc);

    auto var_x = true;
    cout << "var_x = " << var_x << endl;
    cout << "sizeof(var_x) = " << sizeof(var_x) << endl; // 8

    var_x = 8.9;
    cout << "var_x = " << var_x << endl;
    cout << "sizeof(var_x) = " << sizeof(var_x) << endl; // ?

    int z = 9;
    printf("z = %d\n", z); // 9
    mod(z);
    printf("z = %d\n", z); // 9
    mod_ref(z);
    printf("z = %d\n", z);

    printInfo<int>(8);
    printInfo<double>(8.7);


    Something<int> somethingInt;
    cout << somethingInt.getValue(90) << endl;

    Something<ClasaMea> somethingClasaMea;
    ClasaMea cmLatest = ClasaMea(80000, 70.32323);
    ClasaMea cmLatestResponse = somethingClasaMea.getValue(cmLatest);
    cout << cmLatestResponse.getX() << ", " << cmLatestResponse.getY() << endl;

    return 0;
}

#include <iostream>

using namespace std;

struct Trojuhelnik{
    int a;
    int b;
    int c;
};

bool lzeSestroit(Trojuhelnik* t){
    return (t->a + t->b > t->c) && (t->a + t->c > t->b) && (t->b + t->c > t->a);
}

int main() {
    int numOfTriangles;
    Trojuhelnik* triangles;

    cout << "Zadejte pocet trojuhelniku: ";
    cin >> numOfTriangles;
    triangles = new Trojuhelnik[numOfTriangles];

    for (int i = 0; i < numOfTriangles; i++){
        cout << "Zadejte udaje pro trojuhelnik #" << (i + 1) << endl;
        cout << "Zadejte stranu a: ";
        cin >> triangles[i].a;
        cout << "Zadejte stranu b: ";
        cin >> triangles[i].b;
        cout << "Zadejte stranu c: ";
        cin >> triangles[i].c;

        if (lzeSestroit(&triangles[i])){
            cout << "Tento trojuhelnik lze sestrojit" << endl;
        }else{
            cout << "Tento trojuhelnik nelze sestrojit" << endl;
        }
    }

    return 0;
}

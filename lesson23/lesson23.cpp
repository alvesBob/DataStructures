#include <iostream>
#include <cstdio>

using namespace std;

class Rectangle {
private:
    int length;
    int breadth;
public:
    // Construtor
    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }

    // Métodos
    int area() {
        return length * breadth;
    }

    int perimeter() {
        return 2 * (length + breadth);
    }

    // Acessadores e Modificadores (opcionais)
    void setLength(int l) {
        length = l;
    }

    void setBreadth(int b) {
        breadth = b;
    }

    int getLength() {
        return length;
    }

    int getBreadth() {
        return breadth;
    }
};

int main() {
    int l, b;
    cout << "Enter length and breadth: ";
    cin >> l >> b;

    Rectangle r(l, b);

    int area = r.area();
    int perimeter = r.perimeter();

    printf("Area: %d\nPerimeter: %d\n", area, perimeter);

    return 0;
}

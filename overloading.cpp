#include <vector>

void f(int n);
void f(double x) {}
void f(char c) {}
void f(char c, int n) {}

void f(std::vector<int>) {}

void f(double& x) {}
void f(double* x) {}

void f(const double& x) {}

class Name {
public:
    int f() { return 1; }
};

class NAME {
public:
    int f() { return 1; }
};

int main() {

    Name name;
    name.f();

    NAME name2;
    name2.f();

    return 0;
}

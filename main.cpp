using namespace std;
#include <iostream>

//This is a single line comment

int Add(int *pInt, int *pInt1);

/*
 * This is a multi line comment
 * */
int main() {
    int x{};int y{};
    x=5, y=6;
    int* pntx = &x;
    int* pnty= &y;
    int sum = Add(pntx,pnty);
    cout << sum;
    return 0;
}

int Add(int* pInt, int* pInt1) {
    int px = *pInt;
    int py = *pInt1;
    return px + py;
}
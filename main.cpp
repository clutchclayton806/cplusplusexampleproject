using namespace std;
#include <iostream>

//This is a single line comment

//int Add(int *pInt, int *pInt1);
int* AddVal(int* pointInt, int* pointInt1, int* pointInt2);

/*
 * This is a multi line comment
 * */
int main() {
    int x{};int y{};
    x=5, y=6;
    int* pntx = &x;
    int* pnty= &y;

    /*
    part 1 function call
    int sum = Add(pntx,pnty);
    */
    int* pntz = {};
    pntz = AddVal(pntx, pnty,pntz);
    //cout << sum;
    cout << *pntz;
    return 0;
}

/*
int Add(int* pInt, int* pInt1) {
    int px = *pInt;
    int py = *pInt1;
    return px + py;
}
*/

int* AddVal(int* pointInt, int* pointInt1, int* pointInt2){
    int xpointInt = *pointInt; int ypointInt = *pointInt1;
    int pz = xpointInt + ypointInt;
    int* zpointer = &pz;
    return zpointer;
}
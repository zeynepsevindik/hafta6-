#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
    srand(time(0));

    for (int i = 0; i< 5; ++i) {
         int randomSayi = rand() % 100 + 1;
         cout << i+1 << ". sayi: " <<randomSayi << endl;
    }

    return 0;
}






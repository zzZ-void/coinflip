#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
        srand(time(0));
        int heads = rand() % 2;
        
        if(heads == 1) cout << "heads" << endl;
        else if(heads == 0) cout << "tails" << endl;

        return 0;
}

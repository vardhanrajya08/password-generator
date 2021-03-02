#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

static const char rajya[]=
"0123456789"
"!@#$%^&*"
"QWERTYUIOPASDFGHJKLZXCVBNM"
"qwertyuiopasdfghjklzxcvbnm";

int size = sizeof(rajya)-1;

int main()
{
    srand(time(0));
    for(int i=0; i<8; i++) //password length is 8
    {
        cout<<rajya[rand() % ::size];
    }
    return 0;
}

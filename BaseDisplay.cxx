#include "BaseDisplay.hxx"

#include <iostream>
using namespace std;

void BaseDisplay::showInfoToUser(const char* message)
{
    if (message)
    {
        cout << message ;
    }
}

void BaseDisplay::showBalance(double balance)
{
    cout << " : " << balance << endl;
}

void foo4() {
    int* ptr;
    
    if(ptr > 0){         // 违规
        //...
    }
    
    if(ptr < (int*)0){   // 违规
        //...
    }
    
    if(NULL >= ptr){     // 违规
        //...
    }
}

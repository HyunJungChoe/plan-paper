#include <iostream>
using namespace std;
int main()
{
    int A, B;
    
    while (scanf("%d %d", &A, &B) != EOF) 
    {
    if(A==0&&B==0)
        return 0;
    else   
    cout << A + B << '\n';
    }
}
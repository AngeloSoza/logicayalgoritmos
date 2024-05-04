/*Desarrollar un programa que imprima los números impares en orden
descendente que hay entre 1 y 100.
*/

#include<iostream>
using namespace std;

int main()
{
    int i;

    for(i=100;i>=1;i--)
    {
        if(i%2!=0)
        {
            cout<<i<<endl;
        }
    }

    return 0;
}
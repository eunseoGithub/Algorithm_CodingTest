#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(int a, int b, int n) {
    int cola = n;//현재 가진 콜라 개수
    int leftCola = 0;//그전에 남은 콜라
    int total = 0;//총 가졌던 콜라개수
    
    while(cola >= a)
    {
        int tmp = cola;
        leftCola = cola % a;
        cola = (cola / a) * b;
        total += cola;
        cola += leftCola;
        cout << leftCola << ", " << cola << ", "<<total << endl;
    }
    return total;
}
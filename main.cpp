#include <iostream>
#include <cmath>
// 

using namespace std;

int main() {

    /* Цели и задачи. Нахождение корней. a*x^2+b*x+c */
    // Задачи:
    // 1. Получение данных a,b,c.
    // 2. Нахождение дискриминанта. D=b^2-4*a*c.
    // 3. Нахождение корней x1 = (-b - sqrt(D)) / 2*a. x2 = (-b + D^(0.5)) / 2*a.

    int a,b,c;

    cout << "Введите значение a,b,c:";
    cin >> a >> b >> c;

    int D;
    D=b*b-4*a*c;

    if(D<0) {
        cout << "Корней нет"; 
    }
    else if(D==0) {
        int x=-b/2*a; cout << "x=" << x << endl;
        cout << "Один корень"; 
    }
    else if (D>0) {
        int x1 = (-b - sqrt(D)) / 2*a; cout << "x1=" << x1 << endl;
        int x2 = (-b + sqrt(D)) / 2*a; cout << "x2=" << x2 << endl;
        cout << "Два корня" << endl; 
    }
    
    cout << endl;
    system("pause");
}
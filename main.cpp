#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d;
    char d1, d2, d3;
    cin >> a >> d1 >> b >> d2 >> c >> d3 >> d;
    if((a>=0) && (a<=255) && (b>=0) && (b<=255) && (c>=0) && (c<=255) && (d>=0) && (d<=255) && (d1 == '.') && (d2 == '.') && (d3 == '.'))
        cout << "YES";
    else
        cout << "NO";
return 0;
}

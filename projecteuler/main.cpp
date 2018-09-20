#include <iostream>
#include <cmath>

using namespace std;



int main()
{
    /*//PROBLEM 1
    long int u = 1000;
    long int sum = 0;
    for(int x = 1; x < u; x++)
    {
        if(x % 3 == 0 || x % 5 == 0)
        {
            sum = sum + x;
        }
    }
    cout << sum << '\n';




    //PROBLEM 2


    long long int sum = 0;
    long long int fb = 0;
    long long int fb1 = 0;
    long long int fb2 = 1;

    while(fb < 4000000)
    {
        fb = fb1 + fb2;
        fb1 = fb2;
        fb2 = fb;
        if(fb % 2 == 0)
            sum = sum + fb;

    }

    cout << sum << '\n';



    //PROBLEM 3

    long long int n = 600851475143;
    for(int x = 2; x < n; x++)
    {
        if(n % x == 0)
        {
            n = n / x;
        }
    }
    cout << n << endl;



    //PROBLEM 4

    long int c1, c2, c3, c4, c5 , r;
    long  int grate = 0;
    long int p ;



    for(int x = 100; x < 1000; x++)
    {
        for(int y = 100; y < 1000; )
        {
            p = x * y ;
            if (p > 100000 )
            {
                c1 = p / 100000;
                r = p % 100000;
                c2 = r / 10000;
                r = r % 10000;
                c3 = r / 1000;
                r = r % 1000;
                c4 = r / 100;
                r = r % 100;
                c5 = r / 10;
                r =  r % 10;
                if(c1 == r && c2 == c5 && c3 == c4)
            {
                grate = x * y ;
            }
            y = y + 1;
            }
            else
                y = y + 1;
    }
    }
    cout << "EL mayor numero palindorme es "  << grate << '\n';

    //PROBLEM 5

    int number = 2520;
    bool r = true;
    while(r)
    {
        if (number % 1 == 0 )
        {
            if(number % 2 == 0)
            {
                if(number % 3 == 0)
                {
                    if(number % 4 == 0)
                    {
                        if(number % 5 == 0)
                        {
                            if(number % 6 == 0)
                            {
                                if(number % 7 == 0)
                                {
                                    if(number % 8 == 0)
                                    {
                                        if(number % 9 == 0)
                                        {
                                            if(number % 10 == 0)
                                            {
                                                if(number % 11 == 0)
                                                {
                                                    if(number % 12 == 0)
                                                    {
                                                        if(number % 13 == 0)
                                                        {
                                                            if(number % 14 == 0)
                                                            {
                                                                if(number % 15 == 0)
                                                                {
                                                                    if(number % 16 == 0)
                                                                    {
                                                                        if(number % 17 == 0)
                                                                        {
                                                                            if(number % 18 == 0)
                                                                            {
                                                                                if(number % 19 == 0)
                                                                                {
                                                                                    if(number % 20 == 0)
                                                                                    {
                                                                                        break;
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                            }
                        }
                    }
                }
            }
        }
        number++;
    }
cout << number << '\n';
int cont2 = 1;
int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20}
for(int x = 0;x < 19; x++)
{
    if(arr[x] % 2 == 0)
}


//PROBLEM 6

long int sum = 0;
long int square;
long int sum2 = 0;
for(int x = 1; x <= 100; x++)
{
    square = x * x;
    sum = sum + square;
}

for(int x = 1; x <= 100; x++)
{
    sum2 = sum2 + x ;
}

cout << (sum2 * sum2) - sum << '\n';


//PROBLEM 7

int cont1 = 0;
int t = 1;
int pr;

for (int x = 1; ; x++ )
{
    cont1 = 0;
    for(int y = 1; y <= x ; y++)
    {

        if(x % y == 0)
            {
                cont1 = cont1 + 1;
            }

    }
    if(cont1 == 2)
        {
            pr = x;
            t++;
             if(t > 10001)
            {
                    break;
            }
        }


}
cout << pr << '\n';




//PROBLEM 8


//PROBLEM 9

int a,b,c;
int atri,btri,ctri,ntri;
int number2 = 1000;
int cont1 = 1;
for(a = 1; a <( number2 / 3); a++ )
{
    for(b = a; b < (number2 / 2); b++)
    {
            c = number2 - (a + b);
            atri = (a*a);
            btri = (b*b);
            ctri = (c*c);
            if( atri + btri == ctri )
                {
                    cont1 = 0;
                    break;
                }
    }
    if(cont1 == 0)
    {
        break;
    }

}
cout << (a * b * c) << '\n';


//PROBLEM 10*/

int cont = 0;
long long int sumpr = 2;long long int sumpr2 = 0;
for( int x = 1; x <= 2000000;  )
{
    cont = 0;
    for(int y = 1;y <= x; y++)
    {
        if(x % y == 0)
        {
            cont = cont + 1;
        }
    }
    if(cont == 2)
    {
        sumpr = sumpr + x;
    }
    x = x + 2;
}
cout << sumpr + sumpr2 << '\n';



return 0;
}

#include <iostream>

using namespace std;

double power(double p, double q){
double c=1;
if(q> 0){
    for( int i=0; i < q; i++){
        c*=p;}
    }
    else if (q<0){
        double co = 1;
        for(int i=0; i< -q; i++){
            co*=p;
        }
        c=1/co;
    }
    return c;
}

int main()
{
    int a;
    cout << "1. Addition\n" << "2. subtraction\n" << "3. multiplication\n" << "4. division\n" << "5.sinx\n" << "6.tanx\n" << "7. cosx\n" << "8.Exponential\n"<< "What do you want to perform :";
    cin >> a;
    if(a == 1){
        int c,d;
        cout<< "enter first number:\n";
        cin>> c;
        cout<< "enter second number:\n";
        cin>> d;
        cout<< c+d;

    }

    else if (a==2){int c,d;
        cout<< "enter first number:\n";
        cin>> c;
        cout<< "enter second number:\n";
        cin>> d;
        cout<< c-d;


    }

    else if (a==3){int c,d;
        cout<< "enter first number:\n";
        cin>> c;
        cout<< "enter second number:\n";
        cin>> d;
        cout<< c*d;

    }
    else if (a==4){int c,d;
        cout<< "enter first number:\n";
        cin>> c;
        cout<< "enter second number:\n";
        cin>> d;
        cout<< c/d;

    }

    else if (a==5){ double a;
        cout<< "enter your angle in degrees:\n";
        cin>> a;
        double b= a*0.0174532925;
        cout<< b - (power(b,3))/6 + (power(b,5))/120 - (power(b,7))/5040 + (power(b,9))/362880 -(power(b,11))/39916800 ;

    }
    else if(a==6){ double a;
    cout<< "enter your angle in degrees:\n";
    cin>> a;
    double b= a*0.0174532925;
    cout<< b+ (power(b,3))/3 + ((power(b,5))*2)/15 + ((power(b,7))*17)/315 ;


    }
    else if(a==7){double c;
            cout<< "enter your angle in degrees:\n";
    cin>> c;
    double b= c*0.0174532925;
    cout<< 1-(power(b,2))/2 + (power(b,4))/24 - (power(b,6))/720 + (power(b,8))/40320 -(power(b,10))/3628800;

    }
    else if(a==8){
        double a,b;
        cout<< "enter base:\n";
        cin>> a ;
        cout<< "enter power:\n";
        cin>> b;
        cout<< power(a,b);
    }
    else{
        cout << "Invalid input";
    }
    return 0;
}


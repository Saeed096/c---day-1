#include <iostream>

using namespace std;

struct fraction
{
    int x, y;
    void print ()
    {
        cout<< "enter numerator \n";
         cin>> x;
        cout<< "enter denominator \n";
        cin>> y;
        cout<< x <<"/"<<y;
    }

     fraction add(fraction sum1 , fraction sum2)
     {
         cout<< "\nenter first num numerator : ";
         cin>> sum1.x;

         cout<< "enter first num denominator : ";
         cin>> sum1.y;

         cout<< "enter second num numerator : ";
         cin>> sum2.x;

         cout<< "enter second num denominator : ";
         cin>> sum2.y;


         fraction f3;
         f3.x= (sum1.x * sum2.y) + (sum2.x * sum1.y);
         f3.y= sum1.y * sum2.y;

         return f3;
     }


       fraction sub(fraction sum1 , fraction sum2)
     {
         cout<< "\nenter first num numerator : ";
         cin>> sum1.x;

         cout<< "enter first num denominator : ";
         cin>> sum1.y;

         cout<< "enter second num numerator : ";
         cin>> sum2.x;

         cout<< "enter second num denominator : ";
         cin>> sum2.y;


         fraction f3;
         f3.x= (sum1.x * sum2.y) - (sum2.x * sum1.y);
         f3.y= sum1.y * sum2.y;

         return f3;
     }

     fraction simplify(fraction sum1)               // enter numerator and denominator in main func   and make one if for the minimum
     {
           cout<< "\nenter numerator : ";
             cin>> sum1.x;
             cout<< "enter denominator : ";
             cin>> sum1.y;
             if(sum1.x<sum1.y)
         {
            int i=sum1.x;
                    while (1)
                {
             if(sum1.x %i==0 && sum1.y %i==0)
             {
                 sum1.x/=i;
                 sum1.y/=i;
                 break;
             }
             else
            {
              i--;
            }
                }
        }
        else if(sum1.y<sum1.x)
           {
            int i=sum1.y;
            while (1)
                {
             if(sum1.x %i==0 && sum1.y %i==0)
             {
                 sum1.x/=i;
                 sum1.y/=i;
                 break;
             }
             else
            {
              i--;
            }
                }
        }
        else
        {
        sum1.x =1;
        sum1.y =1;
        }

         fraction f3;
         f3.x = sum1.x;
         f3.y = sum1.y;
         return f3;
     }

};

int main()
{

    cout << "Hello world!" << endl;
    fraction f1;
    fraction f2;
    f1.print();
   f2 = f1.add(f1,f2);
   cout<< f2.x << "/" << f2.y;

   f2 = f1.sub(f1,f2);
   cout<< f2.x <<"/" << f2.y;


   f2 = f1.simplify(f1);
   cout<< f2.x << "/" << f2.y;
    return 0;
}

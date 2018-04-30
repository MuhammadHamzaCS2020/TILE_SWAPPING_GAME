#include <iostream>
#include<conio.h>
#include<iomanip>
#include<stdlib.h>
                       /// Muhammad Hamza
using namespace std;

int main()
{
    char c;
    int count=1,m,n,p=0;
    int x[4][4];
    //Givig the input values
   for(int a=0;a<4;a++)
   for(int b=0;b<4;b++)
   {
       if (count<16)
       {
            x[a][b]=rand()%50;
            count++;
       }
   }

   m = 3,n=3,count=0;
   x[3][3]=0;

   //Diplay the input array
   for(int a=0;a<4;a++)
   for(int b=0;b<4;b++)
   {
       if (a==m && b==n)
       {
           cout <<setw(4)<<" ";
           count++;
        }
       else
    {
        cout<<setw(4)<<x[a][b];
        count++;
    }
    if(count==4){
        cout<<endl;
    count=0;}
   }

   //Loop for arrow keys
    while(true)
    {
        if (x[0][0]<=x[0][1] && x[0][1]<=x[0][2] && x[0][2]<=x[0][3] && x[0][3]<=x[1][0] && x[1][0]<=x[1][1] && x[1][1]<=x[1][2] && x[1][2]<=x[1][3] && x[1][3]<=x[2][0] && x[2][0]<=x[2][1] && x[2][1]<=x[2][2] && x[2][2]<=x[2][3] && x[2][3]<=x[3][0] && x[3][0]<=x[3][1] && x[3][1]<=x[3][2] && x[3][3]==0)
         break;
        c=getch();
        if(c==72 && (m-1)>=0)
        {
            x[m][n]=x[m-1][n]+x[m][n];
            x[m-1][n]=x[m][n]-x[m-1][n];
            x[m][n]=x[m][n]-x[m-1][n];
            m = m-1;
        }

        else
         if(c==80 && (m+1)<4)
        {
            x[m][n]=x[m][n]+x[m+1][n];
            x[m+1][n]=x[m][n]-x[m+1][n];
            x[m][n]=x[m][n]-x[m+1][n];
            m = m+1;
        }
        else

        if(c==75 && (n-1)>=0)
        {
            x[m][n]=x[m][n]+x[m][n-1];
            x[m][n-1]=x[m][n]-x[m][n-1];
            x[m][n]=x[m][n]-x[m][n-1];
            n = n-1;
        }
        else

        if(c==77 && (n+1)<4)
        {
            x[m][n]=x[m][n]+x[m][n+1];
            x[m][n+1]=x[m][n]-x[m][n+1];
            x[m][n]=x[m][n]-x[m][n+1];
            n = n+1;
        }

        //Displaying output
        if (c==72 || c==80 || c==75 || c==77)
        {for(int a=0;a<4;a++)
        for(int b=0;b<4;b++)
         {
           if (a==m && b==n)
             {
               cout <<setw(4)<<" ";
               count++;
             }

         else
          {
            cout<<setw(4)<<x[a][b];//<<"     ";
            count++;
          }
        if(count==4)
         {
             cout<<endl;
             count=0;
         }
       }

       if ((m-1)>=0 && c==72)
       {p++;
       cout << endl<< endl<<"Move "<<p<<endl<<endl;}
       else
       if ((m+1)<4 && c==80)
       {p++;
       cout << endl<< endl<<"Move "<<p<<endl<<endl;}
       else
       if ((n-1)>=0 && c==75)
       {p++;
       cout << endl<< endl<<"Move "<<p<<endl<<endl;}
       else
       if ((n+1)<4 && c==77)
       {p++;
       cout << endl<< endl<<"Move "<<p<<endl<<endl;}
       }

    }

    return 0;
}

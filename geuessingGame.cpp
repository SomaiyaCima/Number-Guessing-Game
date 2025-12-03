#include<bits/stdc++.h>
using namespace std;
int main()
{
    int guess_number,random_number;
    srand(time(0));
    random_number=rand()%100+1;
   
    while(1)
    {
 
        cout<<"Enter any number from 1 to 100 : "<<endl;
        cin>>guess_number;
        if(guess_number>random_number)
        {
            cout<<"To high! Try again: "<<endl;        
        }
        else if(guess_number<random_number)
        {
            cout<<"To low! Try again: "<<endl;
        }
        else 
        {
            cout<<"You gussed the correct number. congratulations!"<<endl;
            break;        
        }
    }
   
    return 0;
}
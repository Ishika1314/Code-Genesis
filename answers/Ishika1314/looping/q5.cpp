#include <iostream>
using namespace std;
int main() {
    int num,temp,rep=0;
    cin>>num;
    cout<< "enter the size of array.";
    int n[num];
    cout<< "enter the array elements.";

    for(int i =0 ; i<num ; i++) // entering the array elements.
        cin>>n[i];

    for(int i=0; i<num ; i++) //Sorting loops
    {
        for(int j=i+1 ; j<num ;j++)
        {
            if(n[i]>n[j])
            {
                temp= n[i];
                n[i]= n[j];
                n[j] =temp;
            }
            if(n[i]==n[j])
                rep++;
        }
    }

    if(rep==0)
    {
        cout<<n[num-2];
    }
    else if(rep>0)
    {
        cout<<INT_MIN;
    }
    return 0;
}

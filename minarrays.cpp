#include <iostream>

using namespace std;

int main()
{    int i=1,n,no,k,j,a[1000],index,min;
     
    cout<<"enter test cases"<<endl;
    cin>>n;
    while(i<=n){
        min=a[0];
        cin>>no;
         cout<<"Enter rents"<<endl;
        for(int j=0;j<=no-1;j++)
        {
            cin>>a[j];
            cout<<a[j];
        }
        for(int j=0;j<=no-1;j++){
            if(min>a[j]){
                min=a[j];
                index=j;
            }
        }
        
        cout<<min<<endl;
        cout<<index<<endl;
        i++;
    }
    

    return 0;
}

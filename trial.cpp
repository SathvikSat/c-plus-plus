#include <bits/stdc++.h>
using namespace std;




void input(){
    int n,d, i= 0, count;
    cout<< "number of variables: "<<" ";
    cin>>n;
    cout<<"enter number of minterms: "<<" ";
    cin>>count;
   int x =  pow(2, n);
    //int *p = new int[count] ;
    
    int p[count];

    int q[count][n];
    for(i = 0; i<count; i++)
{   
    
    cout<< "enter the minterms in decimal: ";
    cin>>d;    
    p[i] = d;
}

//for( i =0; i< count; i++){
  //  cout<<p[i]<<" ";

}

//delete [] p;
cout<<"successfully deallocated";


/*for(i = 0; i < count; i++){
    for(int j = 0; j< n; j++){
        if( p[i] == 0){

            

        }
        else{
            q[i][j] = p[i] % 2;
            p[i] = p[i] /2;
        }
    }
}*/

for(i = count; i> 0; i++){
    for(int j = n; j> 0; j++){
        cout<<q[i][j];

    }
    cout<<endl;
}






}





int main(){
    //cout<<"decimal: ";
 //  int *p = NULL;
   /*int b[3], i = 0, x;
     cin>> x;
    while(x != 0){
    b[i] = x % 2;
    x = x/2;
    i++;
    }
    for(i =0; i<3; i++){
    cout<<b[i];
    }*/

    input();
    //delete[] p;
    return 0;
}n
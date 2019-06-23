#include<bits/stdc++.h>
using namespace std;


double median(int , int );

int main(){
    vector<int> arr1;
    vector<int> arr2;
    int count1, count2;
    cout<<"enter count1 and count2: "<<endl;
    cin>>count1;
    cin>>count2;

    arr1.resize(count1);
    arr2.resize(count2);

//cout<<arr1.size();
cout<<" First array: "<<endl;
for(int i = 0; i< arr1.size(); i++){
    //cout<<"check";
    cin>>arr1[i];
}
cout<<" second array: "<<endl;
for(int i = 0; i<arr2.size(); i++){
    cin>>arr2[i];
}

/*for(int i =0; i<arr1.size(); i++){
    cout<<arr1[i]<<", "<<arr2[i]<<endl;
}*/
vector<int> arr3;
int size;
cin>>size;
arr3.resize(size);

int i = 0, j = 0, k = 0;
do{
if(arr1[i] < arr2[j] ){
    arr3[k] = arr1[i];
    k++;
    i++;
}
else
{
    arr3[k]  = arr2[j];
    k++;
    j++;
}
}while(arr1[i] || arr2[j] < arr2.size());

for(int i = 0; i<arr3.size(); i++){
    cout<<arr3[i]<<" ";
}


}
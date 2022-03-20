#include<iostream>
using namespace std;
int binary_search(int a[],int item,int s){
    if(s<0){
        return -1;
    }
    if(a[s]==item){
        return s;
    }
        else{
            binary_search(a,item,s-1);
        }
    
}
int main(){
int a[100],i, item, s,index;
cout<<"Enter size of array: "<<endl;
cin>>s;
cout<<"Enter elements of array: "<<endl;
//input elements of arary
for(i=0;i<s;i++){
    cin>>a[i];
}
//output of array
cout<<"Array elements are: [";
for(i=0;i<s;i++){
    cout<<a[i]<<"  ";
}
cout<<"]"<<endl;;

//input item to search
cout<<"Enter item to search in array: "<<endl;
cin>>item;
index=binary_search(a,item,s);
if(index==-1){
    cout<<"Item not found";
}else{
    cout<<"Item found at index "<<index;
}

return 0;
}
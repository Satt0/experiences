#include <iostream>
#include<limits>
using namespace std;
void NhapMang(int * arr, int n){
    for(int i=0;i<n;++i) {
        cout<<"nhap phan tu thu"<<i+1<<"=";
        cin>>arr[i];
    }
}
typedef struct phanTu {
    int index;
    int value;
}phanTu;

phanTu MIN(int * arr,int n){
    int nhoNhat=INT32_MAX,index=0;

    for(int i=0;i<n;++i){

        if(arr[i] < nhoNhat) {
            nhoNhat=arr[i];
            index=i;
        }
    }
    return {index,nhoNhat};

}
int main() {
   int n;
   int arr[600];
   cout<<"nhap so phan tu cua mang=";cin>>n;
   NhapMang(arr,n);
   phanTu nhoNhat=MIN(arr,n);
   cout<<"phan tu nho nhat="<<nhoNhat.value<<", o vi tri="<<nhoNhat.index<<endl;
    return 0;
}

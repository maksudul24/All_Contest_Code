#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t.txt","w",stdout);
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define pii pair<int,int>
#define SIZE 1005

using namespace std;

void merge_array(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;
    int L[n1], R[n2];
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2){
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1){
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2){
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int i, int j)
{
    if (i < j)
    {
        int m = i+(j-i)/2;

        mergeSort(arr, i, m);
        mergeSort(arr, m+1, j);

        merge_array(arr, i, m, j);
    }
}

int main()
{
    int i=0,j=0,k,ts,total_eve=0,total_od=0,x,even[SIZE],odd[SIZE];
    //freopen("in.txt","r",stdin);
    scanf("%d",&ts);
    while(ts--){
        scanf("%d",&x);
        if(x%2==0){
                total_eve+=x;
                even[i++]=x;
        }
        else{
            odd[j++]=x;
            total_od+=x;
        }
    }
    mergeSort(even,0,i-1);
    mergeSort(odd,0,j-1);
    for(k=0;k<i;k++){
        printf("%d ",even[k]);
        if(k==i-1) printf("%d ",total_eve);
    }
    for(k=0;k<j;k++){
        printf("%d ",odd[k]);
        if(k==j-1) printf("%d\n",total_od);
    }
    return 0;
}

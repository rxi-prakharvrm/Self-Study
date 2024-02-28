int findPivot(vector<int> arr,int n){
    int l = 0;
    int h = n-1;
    int m;
    while(l<=h){
        m = l+(h-l)/2;
        if(arr[m]>arr[m+1] && arr[m]>arr[m-1]){
            return m;
        }
        if(arr[l]<=arr[m]){
            l = m+1;
        }
        else h = m - 1;
    }
    return -1;
}

int bs(vector<int> arr,int s,int n,int k){
    int l = s;
    int h = n-1;
    int m;
    while(l<=h){
        m = l+(h-l)/2;
        if(arr[m] ==k){
            return m;
        }
        if(arr[m]>k){
            h = m-1;
        }
        else l = m+1;
    }
    return -1;
}

int search(vector<int>& arr, int n, int k)
{
    int x,y;
    int p = findPivot(arr,  n);
    if(p!=-1){
        x = bs(arr,0,p-1,k);
        y = bs(arr,p+1,n,k);
        if(x!=-1) return x;
    }
    return y;   
}
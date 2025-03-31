
// this approch is to much time consuming and long 
// so dont use this approach

// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main()
// {
//     int arr[100],n;
//      x:cout<<"Enter how much element you want to add:";
//     cin>>n;
//     if(n<=100)
//     {
//         int arr[n],brr[n];
//         for(int i=0;i<n;i++)
//         {
//             cin>>arr[i];
//             if(arr[i]<0)
//             {
//                 arr[i]+=((-2*arr[i]));
//                 brr[i]=arr[i];
//             }
//             else brr[i]=arr[i];
//         }
//         for(int i=0;i<n;i++)
//         {
//             brr[i]*=brr[i];
//         }
//         sort(brr,brr+n);
//         for(int ele:brr)
//         {
//             cout<<ele<<" ";
//         }

//     }
//     else{
//         cout<<"Enter <=100 element";
//         goto x;
//     }

// }
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
     int arr[100],n;
      x:cout<<"Enter how much element you want to add:";
     cin>>n;
   if(n<=100)
     {
       int arr[n],brr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int result[n];
        int i=0,j=n-1,k=n-1;
        while(i<=j && k>=0)
        {
            if(abs(arr[i])>abs(arr[j]))
            {
                result[k]=arr[i]*arr[i];
                i++;
                j--;
            }
            else{
               result[k]=arr[i]*arr[i];
                j--;
                k--; 
            }
        }
        for(int ele:brr)
        {
             cout<<ele<<" ";
        }

}
else{
        cout<<"Enter <=100 element";
        goto x;
     }
}
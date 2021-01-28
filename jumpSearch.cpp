#include<iostream>
#include<cmath>

using namespace std;
int jumpSearch(int a[], int n, int item) {
   int i = 0;
   int m = sqrt(n); 

   while(a[m] <= item && m < n) { 
      i = m;  
      m += sqrt(n);
      if(m > n - 1) 
         return -1; 
   }

   for(int x = i; x<m; x++) { 
      if(a[x] == item)
         return x; 
   }
   return -1;
}

int main() {
   int n, item, l;
   cout << " Enter number of items: "<<endl;
   cin >> n;
   int arr[n]; 
   cout << " Enter items: "<<endl;;

   for(int i = 0; i< n; i++) {
      cin >> arr[i];
   }

   cout << "\n Enter the value: ";
   cin >> item;
   l = jumpSearch(arr, n, item);
   if(l>=0)
      cout << "val is at: " << l<<endl;;
   else
      cout << "val is not found in the list.";
}

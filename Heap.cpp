int* a = NULL;  
int n;           
cin >> n;       
a = new int[n]; 
for (int i=0; i<n; i++) {
    a[i] = 0;   
}
// Use a as a normal array
delete [] a; 
a = NULL;

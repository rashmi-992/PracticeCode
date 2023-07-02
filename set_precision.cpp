//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++


    
    double compute(int a, int b){
    
    //complete the code
        double result=double(a)/b;
    cout<<fixed;
    cout<<setprecision(2);
    if(a%b==0 || (10*a)%b==0)
        cout<<showpoint<<setprecision(1);
    return result;
}
    


//{ Driver Code Starts.
 
int main()
{
    
    int t;
    cin >> t;
    
    while(t--){
        int a, b;
        cin >> a >> b ;
    
        cout << compute(a, b) << endl;
    }
    
    return 0;
} 
// } Driver Code Ends
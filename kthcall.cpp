
#include <iostream>
using namespace std;



int count;
void utility() {
    

    // declare the variable count here
    

    // increases the value of count by 1
    count+=1;

    // print count
    cout << count;
    
}




int main() {
    int t;
    cin >> t;

    int n;
    cin >> n;

    while (n--) {

        utility();
        cout << " ";
    }

    return 0;
}

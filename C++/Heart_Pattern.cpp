
//    *********       *********
//   ***********     ***********
//  *************   *************
// *************** ***************
//  ***********GITTHUB***********
//   ***************************
//    *************************
//     ***********************
//      *********************
//       *******************
//        *****************
//         ***************
//          *************
//           ***********
//            *********
//             *******
//              *****
//               ***

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no of n"<<endl;
    cin>>n;

    for (int i = n/2; i < n+1; i++) {
            if (i%2!=0) {
                for (int j = 1; j <=(n-i)/2; j++) {
                    
                    cout<<" ";
                }
                for (int j = 1; j <= i; j++) {
                    
                    cout<<"*";
                }
                for (int j = 1; j <=((n-i)); j++) {
                    
                    cout<<" ";
                }
                for (int j = 1; j <= i; j++) {
                    
                    cout<<"*";
                }
                
                cout<<endl;
            }
        }
        for (int i = 0; i <1; i++) {
            
            cout<<" ";
        }
        for (int i = 0; i < (n-10)/2; i++) {
            
            cout<<"*";
        }
        for (int i = 0; i < (n/2); i++) {
            
            cout<<"*";
        }
        
        
        cout<<"GITTHUB";
        for (int i = 0; i < (n/2); i++) {
    
            cout<<"*";
        }
        for (int i = 0; i < (n-10)/2; i++) {
    
            cout<<"*";
        }
        
        cout<<endl;
        for (int i = 2*n-4; i >1; i--) {
            if (i%2!=0) {
                for (int j = 1; j <=(2*n-i)/2; j++) {
                    
                    cout<<" ";
                }
                for (int j = 0; j < i; j++) {
                    
                    cout<<"*";
                }
                
                cout<<endl;
            }
        }
    
}
        
        


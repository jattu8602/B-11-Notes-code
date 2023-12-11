//to print
//             *
//         *       *  
//     *       *       *
// *       *       *       *
// C++ code to demonstrate star pattern
// #include <iostream>
// using namespace std;

// // Function to demonstrate printing pattern
// void pypart2(int n)
// {
// 	// Number of spaces
// 	int i, j, k = n;

// 	// Outer loop to handle number of rows
// 	// n in this case
// 	for (i = 1; i <= n; i++) {

// 		// Inner loop for columns
// 		for (j = 1; j <= n; j++) {

// 			// Condition to print star pattern
// 			if (j >= k)
// 				cout << "* ";
// 			else
// 				cout << " ";
// 		}
// 		k--;
// 		cout << "\n";
// 	}
// }

// // Driver Code
// int main()
// {
// 	int n = 5;
// 	// Function Call
// 	pypart2(n);
// 	return 0;
// }
#include<iostream>
using namespace std;

int main(){
	for (int i = 0; i <= 5; i++)
	{for (int j = 5; j >= 0; j--)
	{if (j<=i)
	{cout<<"* ";
		/* code */
	}
	else{
		cout<<" ";
		
	
	}
	
    
		/* code */
	}
	cout<<"\n";
		/* code */
	}
	
	return 0;
}
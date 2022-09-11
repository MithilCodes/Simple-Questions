#include <iostream>
using namespace std;
  int main()
{
    //Getting number of subjects as input
    cout << "Enter Number of subjects(n)";
    int n;
    cin >> n;
    if (n > 10 ) {
  cout << "Enter valid Number of subjects";
}
else if(n<3)
{
  cout << "Enter valid Number of subjects";
}

else
//Getting marks as input
{
	int marks[n];
	cout << "Enter Marks(0-100): " << endl;
  for (int i = 0; i < n; ++i) {
    cin >> marks[i];
 }
  
 //Highest mark
  int len = sizeof(marks) / sizeof(marks[0]); 
        int biggest = marks[0]; 
         
        for ( int i = 1; i < len; i++ ) {
            if ( biggest < marks[i] ) {
                biggest = marks[i]; 
            }
        }
         
        cout << "Highest mark is= " << biggest << endl;
    

 
  //Lowest mark
  int len2 = sizeof(marks) / sizeof(marks[0]); 
        int smallest = marks[0]; 
         
        for ( int i = 1; i < len2; i++ ) {
            if ( smallest > marks[i] ) {
                smallest = marks[i];
            }
        }
         
        cout << "Lowest mark is= " << smallest << endl;
    
    //Average mark
    int sum=0;
    for(int i=0;i<n;i++){
    	sum=sum+marks[i];
    	
	}
	int average=sum/n;
	cout << "Average marks is= " << average<<endl;
}	
 

return 0;
}
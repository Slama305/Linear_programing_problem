#include <iostream>
using namespace std;
///////////////////////////////////////
void matrix(int B , int p1 ,int p2){
	      //////////////////////////
	      if(B!=0){
         	cout<<"\nthis mtrix is non_singular \n\n"
         	<<"this system has a unique solution \n\n";
				 }
			else{
				if(p1!=0 && p2!=0){
				  cout<<"\nthis mtrix is singular & independent \n\n"
            	   <<"this system has No solution \n\n";	
				}
		     	else{
			   	cout<<"\nthis mtrix is singular & dependent \n\n"
            	 <<"this system has infinite solution \n\n";		
				} 
			}
}
void slam(){
	int t=1;
	//cin>>t;
	while(t--){
	//	cout<<"do you want to enter matrix or system equetion ?\n"
	//	<<"1 : matrix  : ";
		int test=1;
		//cin>>test;
		//////////////////////////////////////////
		if(test==1){
			///////////////////
			int matrx[2][2];
       	int sol_matrix[2][1];
       //	cout<<"1: matrix 2*2 : \n";
    	   // <<"2: matrix 3*3 : \n";
    	    int test=1;//cin>>test;
    	    if(test==1){
    	    	cout<<" B= ";
    	      for(int i=0 ;i<2 ;i++)for(int j=0 ;j<2 ;j++)cin>>matrx[i][j];
    	      cout<<"\n b= ";
	         for(int i=0 ;i<2 ;i++)for(int j=0 ;j<1 ;j++)cin>>sol_matrix[i][j];
	         int det_B=matrx[0][0]*matrx[1][1]-matrx[0][1]*matrx[1][0];
	         int det_p1=matrx[0][1]*sol_matrix[0][0]-matrx[1][1]*sol_matrix[0][0];
				int det_p2=matrx[0][0]*sol_matrix[1][0]-matrx[1][0]*sol_matrix[0][0];
			///////////////////
			matrix(det_B,det_p1,det_p2);
	   	}
   	}
		///////////////////////////////////////////////////////////
		else{
			cout<<"no found this option \n";
		}
	}
}
int main(int argc, char** argv) {
	   cout<<"\t enter matrix \n\n";
	   slam();
	return 0;
}
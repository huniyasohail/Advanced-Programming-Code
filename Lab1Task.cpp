#include"Operations.h"

//using namespace std;

int main () {
	//declare variables
  string line;
  char c;
  char  str[80] ;
    char s[2] = " ";
	int matrixC[10][10];
   char *token;
	   int result[10][10];
   int flag=0 , m , n ,k,l,id=0;
   int matrixA[10][10];
   int i=0,j=0,t,q1;
   int r =0,co=0; 
   int matrixB[10][10],o;
   ifstream myfile ("hello.txt");//take file 
   string operation="matrixA +matrixB +matrixC";
 //open file
  if (myfile.is_open())
  {
	
              
	  //get char from file
    while ( myfile.get(c) && id<3 )
    {
		if(flag==0){//check the row in file
			
			if(id==0){
				if(isdigit(c)){//check digit or not
					flag++;
					m=(int)(c - '0');
					r=m;
					cout<<"matrixA"<<m;
				}
			}
			else if(id==1){//other matrix entries get from file
				if(isdigit(c)){
					flag++;
					k=(int)(c-'0');
					cout<<"matrixB"<<k;
					r=k;
				}
			
			}
			else{
				if(isdigit(c)){//check digit or not
					flag++;
					q1=(int)(c-'0');
					cout<<"matrixC"<<q1;
					r=q1;
				}

			}
		}
		else if (flag==1){
			
			if(id==0){
				if(isdigit(c)){//check digit or not
					flag++;
					n=(int)(c - '0');
				co=n;
				
				cout<<"x"<<n<<endl;
				}
				
			}
			else if(id==1){//enter entries into matrix
				if(isdigit(c)){
					flag++;//move the row
					l=(int)(c-'0');
					co=l;
						cout<<"x"<<l<<endl;
				}
			}
			else{
				if(isdigit(c)){//check digit or not
					flag++;
					t=(int)(c-'0');
					co=t;
					cout<<"x"<<t<<endl;
				}
		

			}
		}
		else{
			if(id==0){
				if(i<r ){//if i less then row that read from file
					if(j<co){
						if(isdigit(c)){

						matrixA[i][j]=(int)(c - '0');
						cout<<"matrixA["<<i<<"]["<<j<<"]"<<matrixA[i][j]<<endl;
						j++;
						}
					}
					else
					{
						i++;
						j=0;
					}
				}
				else{
					flag=0;
					id++;//move to next matrix
					i=0;
					j=0;
				}
			}
			else if(id==1)
			{
				if(i<r ){
					if(j<co){
						if(isdigit(c)){

						matrixB[i][j]=(int)(c - '0');
						cout<<"matrixB["<<i<<"]["<<j<<"]"<<matrixB[i][j]<<endl;
						j++;
						}
					}
					else
					{
						i++;
						j=0;
					}
				}
				else{
					i=0;
					j=0;
					flag=0;
					id++;
				}

			}
			else{
					if(i<r ){
					if(j<co){
						if(isdigit(c)){

						matrixC[i][j]=(int)(c - '0');
						cout<<"matrixC["<<i<<"]["<<j<<"]"<<matrixC[i][j]<<endl;
						j++;
						}
					}
					else
					{
						i++;
						j=0;
					}
				}
				else{
					i=0;
					j=0;
					flag=0;
					id++;
				}

			}
		}
	
	}
  
   // myfile.close();
  }
  
  else 
	  cout << "Unable to open file"; 
	/*  
	   char ch='+',a='-',z='*';
       char *ptr;
       ptr = &operation[0];
       for(int i = 0; i<operation.length(); i++)
       {
              if(ch == *(ptr+i)||a == *(ptr+i)||z == *(ptr+i))
              {
				  printf("charcter %c found at location %d\n",*(ptr+i),i);
				  k=*(ptr+i);
				 switch(k){
				 case'+':
					// Addition(m,n,matrixA,k,l,matrixB);
					 break;
				 case'-':
					// Subtraction(m,n,matrixA,k,l,matrixB);
					 break;
				 case'*':
					// multiplication(m,n,matrixA,k,l,matrixB);
					 break;
				 }
                 
              }
       */
	   cout<<"**********Select Menu**************\n\t1.  ";
	  //operations for unit testing 
	   string operation1="matrixA * matrixB";
	   string operation2="(matrixA*matrixB)+matrixC";
	   //take input from user to test
	   cout<<operation<<"\n\t2. "<<operation1<<"\n\t3. "<<operation2<<endl;
      int ko;
	   cin>>ko;
	
	if(ko==1){
		Addition(m,n,matrixA,k,l,matrixB,result);
		Addition(m,n,result,q1,t,matrixC,result);
	}
	if(ko==2)
 multiplication(m,n,matrixA,k,l,matrixB,result);
	if(ko==3){
multiplication(m,n,matrixA,k,l,matrixB,result);
 Addition(m,n,result,q1,t,matrixC,result);
	}
  return 0;
}

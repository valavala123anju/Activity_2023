int main(){ 
  
     int marks; 
     printf("Enter Student marks :- "); 
     scanf("%d",&marks); 
     if(marks<0 || marks>100) 
     { 
         printf("Wrong Entry\n"); 
     } 
     else if(marks<50) 
     { 
         printf("Grade F\n"); 
     } 
     else if(marks>=50 && marks<60) 
     { 
         printf("Grade D\n"); 
     } 
     else if(marks>=60 && marks<75) 
     { 
         printf("Grade C\n"); 
     } 
     else if(marks>=75 && marks<80) 
     { 
         printf("Grade B\n"); 
     } 
     else 
     { 
         printf("Grade A\n"); 
     } 
  
     return 0; 
 }
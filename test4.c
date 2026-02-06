#include<stdio.h>
void pattern(){
	//-----------------problem 1 -------------
/*1. Write program to print the following patterns . Pattern should be scalable, if input
	(number of lines) is 6 then the output should be.*/

int l,i,j;
printf("enter the no of lines the pattern should have");
scanf("%d",&l);
int n=65;
for(i=1;i<=l;i++){
	n=65;
	for(j=1;j<=i;j++){
		printf("%c",n);
		if(j!=i)
			printf("*");
		n++;
	}printf("\n");
}
}

/*output:

A
A*B
A*B*C
A*B*C*D
A*B*C*D*E
*/


////-----------------problem 2 -------------
/* 2. Execute below
A A A A
B B B
C C
D
C C
B B B
*/

void kp(){
	int n,a=65,i,j,p;
	printf("enter no of lines");
	scanf("%d",&n);
	p=n;
	for (i=1;i<=n/2;i++){
		for (j=i;j<=(n/2)+1;j++){
			printf("%c ",a);
		}
	printf("\n");
	a++;
	p--;
	}
	printf("%c\n",a);
	p--;
	for (i=n/2;i>=1;i--){
		if (p!=0){
			a--;
		for (j=i;j<=n/2+1;j++){
				printf("%c ",a);
			}
		p--;
		printf("\n");
		}
		else break;
	}
}

/*output
 enter no of lines6
A A A A
B B B
C C
D
C C
B B B
 */


//--------------------problem 6 ---------------------------
//Write a program to print numbers between 1 to 500 that are divisible by 7 using goto.
void divisible_goto()
{
	int n,x=7;
	printf("enter the number till which the divisibility of 7 need to be verified");
	scanf("%d",&n);
	div:
	printf("%d\n",x);
	x=x+7;
	if(x<=n)
		goto div;
}

/* output:
 enter the number till which the divisibility of 7 need to be verified500
7
14
21
28
35
42
49
56
63
70
77
84
91
98
105
112
119
126
133
140
147
154
161
168
175
182
189
196
203
210
217
224
231
238
245
252
259
266
273
280
287
294
301
308
315
322
329
336
343
350
357
364
371
378
385
392
399
406
413
420
427
434
441
448
455
462
469
476
483
490
497
 */


//-----------------problem 7 -------------
/*Write a program to calculate the sum and average of 10 positive numbers using continue for
skipping invalid input.*/
void sum_and_average()
{
	int n,x,s=0;
	printf("enter the number of inputs you are going to provide for the operations sum and average");
	scanf("%d",&n);
	int p=n;
	while(n>0){
		printf("enter the %d number ",p-n+1);
		scanf("%d",&x);
		if(x<0){
			printf("invalid input not considered enter positive numbers only\n");
			continue;
		}
		s=s+x;
		n--;
	}
	printf("the sum  and average of given %d valid inputs is %d and %d ",p,s,s/p);

}

/* output:
enter the number of inputs you are going to provide for the operations sum and average4
enter the 1 number -1
invalid input not considered enter positive numbers only
enter the 1 number 2
enter the 2 number 3
enter the 3 number 4
enter the 4 number 5
the sum  and average of given 4 valid inputs is 14 and 3 enter which program you want to execute
 */


//-----------------problem 8 -------------
/*Write a program to input a number and a digit and find whether the digit is present in the number
or not, if present, then count the number of times it occurs in the number? Let say 12345 number,
check repetitive digit and count it.
*/

void find_digit(){
	long int n,count=0,d ;
	printf("enter the number  ");
	scanf("%ld",&n);
	printf("enter the digit that need to be found");
	scanf("%ld",&d);
	while(n){
		if(d==n%10)
			count++;
		n=n/10;
	}
if(count==0)
	printf("sorry the digit is not found\n");
else
	printf("yes the digit is found and it is repeated for %ld times in number ",count);

}

/*output:
enter the number  344435
enter the digit that need to be found4
yes the digit is found and it is repeated for 3 times in number
 */

//-----------------problem 9 -------------
//Program to Set a Specific Bit of a Number
void setting_bit(){
	int l=1,n,s;
	printf("enter the number ");
	scanf("%d",&n);
	printf("enter which bit starting with 1 from right you want to set");
	scanf("%d",&s);
	l=l<<(s-1);
	n=n|l;
	printf("the result from the set bit operation is %d",n);
}

/* output:
enter the number 4
enter which bit starting with 1 from right you want to set2
the result from the set bit operation is 6
 */


//-----------------problem 10 -------------
//Program to clear a Specific Bit of a number
void clearing_bit(){
	int l=1,s,n;
	printf("enter the number :");
	scanf("%d",&n);
	printf("enter which bit starting with 1 from the right you want to reset");
	scanf("%d",&s);
	l=~(l<<(s-1));
	n=n&l;
	printf("the result from the set bit operation is %d",n);
}

/* output:
 enter the number :5
enter which bit starting with 1 from the right you want to reset3
the result from the set bit operation is 1
 */

//-----------------problem 11 -------------
//Program to toggle Specific Bit of a number
void toggle_bit(){
	int l=1,s,n;
	printf("enter the number :");
	scanf("%d",&n);
	printf("enter which bit starting with 1 from the right you want to toggle");
	scanf("%d",&s);
	l=(l<<(s-1));
	n=n^l;
	printf("the result from the set bit operation is %d",n);
}

/* output :
enter the number :5
enter which bit starting with 1 from the right you want to toggle3
the result from the set bit operation is 1
 */

//--------------------problem 12--------------------
//Program to Check if a Specific Bit is Set or Clear(status of a bit)
void verification_of_bit(){
	int l=1,n,s;
		printf("enter the number ");
		scanf("%d",&n);
		printf("enter which bit starting with 1 from right you want to check");
		scanf("%d",&s);
		l=l<<(s-1);
		n=n&l;
		if(n==0)
			printf("the bit specified is 0");
		else
			printf("the bit specified is 1");
}

/* output:
enter the number 17
enter which bit starting with 1 from right you want to check4
the bit specified is 0
 */






//main function
int main()
{
	printf("------------assignmment -4-----------\n");
	int ch;
	while(1){
	printf("enter which program you want to execute\n0.exit\n1.pattern\n2.k-pattern\n3.divisible_by_7\n4.sum_and_average\n5.finding frequency of digit\n6.setting bit\n7.resetting bit\n9.checking if bit is set or not\n8.");
	scanf("%d",&ch);
	switch(ch){
	case 0: printf("exiting assignment-4");
			return 0;
			break;
	case 1: pattern();
			break;
	case 2: kp();
			break;
	case 3 : divisible_goto();
			break;
	case 4: sum_and_average();
			break;
	case 5: find_digit();
			break;
	case 6 :setting_bit();
			break;
	case 7 :clearing_bit();
			break;
	case 8 :toggle_bit();
				break;
	case 9: verification_of_bit();
			break;
	/*case 9 : count_set();
			break;
	case 10: count_reset();
			break;
*/
	}}
	return 0;
}


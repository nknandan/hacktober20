# include < stdio .h >
# include < stdbool .h >
# include < stdlib .h >
typedef struct {
int arr [10];
} Stack ;
Stack s ;
int top = -1;

 void push ( int n ) {
 if( top < 9) {
 s . arr [++ top ] = n ;
 }
 }

 int pop () {


 int temp ;
 if( top == -1) {
 return -1;
 }
 else {
 temp = s . arr [ top - -];
 return temp ;
 }
 }
 bool isEmpty () {
 if( top == -1)
 return true ;
 else
 return false ;
 }

 bool isFull () {
 if( top == 9)
 return true ;
 else
 return false ;
 }

 int main () {
 int q , choice , n ;
 scanf ("%d", & q ) ;
 while (q - -) {
 scanf ("%d%d", & choice , & n );
 switch ( choice ) {
 case 0: push ( n ) ;
 break ;
 case 1: printf ("%d\n", pop () ) ;
 break ;
 case 2: printf ("%d\n", isEmpty () ) ;
 break ;
 case 3: printf ("%d\n", isFull () ) ;
 break ;
 }
 }
 return 0;
 }

#include <stdio.h>
#include "reverse.h"

unsigned long emirp(unsigned long n);
void isPrime(unsigned long r, int *a);

int main (int argc, char* argv[]){
	unsigned long n;
	if(scanf("%lu", &n)==1)
	   printf("%lu\n",emirp(n));
}

/*
var i := 1
r := 13
while i != n do
    r := r + 1
    var a := 1
    isPrime(r,a)
    if a = 1 then 
        var s := 0
        reversen(r,s)
        var b := 1
        isPrime(s, b)
        if b = 1 && s != r then
            i = i + 1
od

*/
unsigned long emirp(unsigned long n) {
	int i = 1;
	unsigned long r = 13;
    while (i != n) {
        r = r + 1;
        int a = 1;
        isPrime(r, &a);
        if (a == 1) {
            unsigned long s = 0;
            reversen(r, &s);
            int b = 1;
            isPrime(s, &b);
            if (b == 1 && s != r) {
                i = i + 1;
            }
        }
    }
	return r;
}

/*
var j := 0
while j != r do
    if r mod j = 0 then
        a = 0
    j := j + 1
od
*/
void isPrime(unsigned long r, int *a) {
    unsigned long j = 2;
    while (j != r) {
        if (r % j == 0) {
            *a = 0;
        }
        j = j + 1;
    }
}

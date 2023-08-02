//to check if a number is a palindrome
//where n is the number to be checked, result is the reversed number,
//q is a temporary variable to store the reversed number
//and rem is The remainder of the division of the original number by 10.

int main(){
    int n, result =0, q, rem;
    //prompt the user for input
    printf("Enter a number: ");
    scanf("%d", &n);

    q = n; //temporarily store the value of the inputed number as q

    while(q != 0) //here the while loop starts. It iterates as long as the value of q is not equal to 0
    {
        rem = q %10; //store as the value of rem the remainder of q divided
        result = result*10 + rem;
        q = q/10;
    }

    if(result == n)
        printf("It's a palindrome");
    else
        printf("No! it is not a palindrome");
    return 0;
}

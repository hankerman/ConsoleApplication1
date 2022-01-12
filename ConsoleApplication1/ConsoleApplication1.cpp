#include <iostream>
using namespace std;





bool isPalindrome(int n) {
    
    bool result;
    int a, revers = 0, c;
    a = n;
    while (a != 0) {
        c = a % 10;
        revers = revers * 10 + c;
        a /= 10;
    }
    result = n == revers;
    return result;
}


int main()
{

    int n;
    cin >> n;

    if (isPalindrome(n)) {
        cout << n << " is a palindrome";
    }
    else {
        cout << n << " is NOT a palindrome";
    }
    return 0;

}

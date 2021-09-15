# Bit Magic

## 1. Find first set bit:
    Given an integer an N. The task is to return the position of first set bit found from the right side in the binary representation of the number. Note: If there is no set bit in the integer N, then return 0 from the function.  
    Example 1:
    Input: N = 18
    Output: 2
    Explanation: Binary representation of 18 is 010010,the first set bit from the right side is at position 2.

## 2. Rightmost different bit:
    Given two numbers M and N. The task is to find the position of the rightmost different bit in the binary representation of numbers.
    Example 1: 
    Input: M = 11, N = 9
    Output: 2
    Explanation: Binary representation of the given numbers are: 1011 and 1001, 2nd bit from right is different.

## 3. Check whether Kth Bit is set or not:
    Given a number N and a bit number K, check if Kth bit of N is set or not. A bit is called set if it is 1. Position of set bit '1' should be indexed starting with 0 from LSB side in binary representation of the number.
    Example 1:
    Input: N = 4, K = 0
    Output: No  
    Explanation: Binary representation of 4 is 100, in which 0th bit from LSB is not set. So, return false.

## 4. Toggle bits given range:
    Given a non-negative number N and two values L and R. The problem is to toggle the bits in the range L to R in the binary representation of N, i.e, to toggle bits from the rightmost Lth bit to the rightmost Rth bit. A toggle operation flips a bit 0 to 1 and a bit 1 to 0. Print N after the bits are toggled.
    Example 1:
    Input: N = 17 , L = 2 , R = 3
    Output: 23
    Explanation: (17)10 = (10001)2.  After toggling all the bits from 2nd to 3rd position we get (10111)2 = (23)10
    
## 5. Set Kth Bit:
    Given a number N and a value K. From the right, set the Kth bit in the binary representation of N. The position of Least Significant Bit(or last bit) is 0, the second last bit is 1 and so on. 
    Example 1:
    Input: N = 10, K = 2
    Output: 14
    Explanation: Binary representation of the given number 10 is: 1 0 1 0, number of bits in the binary reprsentation is 4. Thus 2nd bit from right is 0. The number after changing this bit to 1 is: 14(1 1 1 0).

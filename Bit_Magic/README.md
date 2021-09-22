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

## 6. Power of 2:
    Given a non-negative integer N. The task is to check if N is a power of 2. More formally, check if N can be expressed as 2x for some x.
    Example 1:
    Input: N = 1
    Output: true
    Explanation: 1 is equal to 2 raised to 0 (20 = 1).

## 7. Bit Difference:
    You are given two numbers A and B. The task is to count the number of bits needed to be flipped to convert A to B.
    Example 1:
    Input: A = 10, B = 20
    Output: 4
    Explanation: A  = 01010, B  = 10100
    As we can see, the bits of A that need to be flipped are 01010. If we flip these bits, we get 10100, which is B.

## 8. Rotate Bits:
    Given an integer N and an integer D, rotate the binary representation of the integer N by D digits to the left as well as right and print the results in decimal values after each of the rotation.
    Note: Integer N is stored using 16 bits. i.e. 12 will be stored as 0000.....001100.
    Example 1:  
    Input: N = 28, D = 2
    Output: 112, 7
    Explanation: 28 in Binary is: 000...011100
                Rotating left by 2 positions, it becomes 00...1110000 = 112 (in decimal).
                Rotating right by 2 positions, it becomes 000...000111 = 7 (in decimal).

## 9. Swap all odd and even bits:
    Given an unsigned integer N. The task is to swap all odd bits with even bits. For example, if the given number is 23 (00010111), it should be converted to 43(00101011). Here, every even position bit is swapped with adjacent bit on the right side(even position bits are highlighted in the binary representation of 23), and every odd position bit is swapped with an adjacent on the left side.
    Example 1:
    Input: N = 23
    Output: 43
    Explanation: Binary representation of the given number is 00010111 after swapping 00101011 = 43 in decimal.

## 10. Count total set bits:
    You are given a number N. Find the total count of set bits for all numbers from 1 to N(both inclusive).
    Example 1:
    Input: N = 4
    Output: 5
    Explanation: For numbers from 1 to 4.
                    For 1: 0 0 1 = 1 set bits
                    For 2: 0 1 0 = 1 set bits
                    For 3: 0 1 1 = 2 set bits
                    For 4: 1 0 0 = 1 set bits
                Therefore, the total set bits is 5.

## 11. Longest consecutive ones:
    Given a number N. Find the length of the longest consecutive 1s in its binary representation.
    Example 1:
    Input: N = 14
    Output: 3
    Explanation: Binary representation of 14 is 1110, in which 111 is the longest consecutive set bits of length is 3.

## 12. Number is Sparse or not:
    Given a number N. The task is to check whether it is sparse or not. A number is said to be a sparse number if no two or more consecutive bits are set in the binary representation.
    Example 1:
    Input: N = 2
    Output: 1
    Explanation: Binary Representation of 2 is 10,  which is not having consecutive set bits. So, it is sparse number.

## 13. Party of Couples:
    In a party of N people, each person is denoted by an integer. Couples are represented by the same number. Find out the only singe person in the party of couples.
    Example 1:
    Input: N = 5 arr = {1, 2, 3, 2, 1}
    Output: 3
    Explaination: Only the number 3 is single.

## 14. Maximum Subset XOR (DP method):
    Given an array arr[] of N positive integers. Find an integer denoting the maximum XOR subset value in the given array arr[].
    Example 1:
    Input : 
    N = 3
    arr[] = {2, 4, 5}
    Output : 7
    Explanation : The subset {2, 5} has maximum subset XOR value.
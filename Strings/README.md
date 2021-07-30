# Strings

## 1. Reverse words in a given string:
    Given a String S, reverse the string without reversing its individual words. Words are separated by dots.
    Example 1:
    Input:
    S = i.like.this.program.very.much
    Output: much.very.program.this.like.i
    Explanation: After reversing the whole string(not individual words), the input string becomes much.very.program.this.like.i

## 2. Permutations of a given string:
    Given a string S. The task is to print all permutations of a given string.
    Example 1:
    Input: ABC
    Output: ABC ACB BAC BCA CAB CBA
    Explanation: Given string ABC has permutations in 6 forms as ABC, ACB, BAC, BCA, CAB and CBA .

## 3. Longest Palindrome in a string:
    Given a string S, find the longest palindromic substring in S. Substring of string S: S[ i . . . . j ] where 0 ≤ i ≤ j < len(S). Palindrome string: A string which reads the same backwards. More formally, S is palindrome if reverse(S) = S. Incase of conflict, return the substring which occurs first ( with the least starting index).
    Example 1:
    Input: S = "aaaabbaa"
    Output: aabbaa
    Explanation: The longest Palindromic substring is "aabbaa".

## 4. Recursively remove all adjacent duplicates:
    Given a string s, remove all its adjacent duplicate characters recursively. 
    Example 1:
    Input: S = "acaaabbbacdddd"
    Output: "acac"
    Explanation: ac(aaa)(bbb)ac(dddd) -> acac
## 5. Check if String is rotated by 2 places:
    Given two strings a and b. The task is to find if the string 'b' can be obtained by rotating another string 'a' by exactly 2 places. 
    Example 1:
    Input:
    a = amazon
    b = azonam
    Output: 1
    Explanation: amazon can be rotated anti clockwise by two places, which will make it as azonam.

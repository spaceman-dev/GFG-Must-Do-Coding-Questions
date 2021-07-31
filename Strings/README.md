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

## 6. Roman Number to Integer:
    Given a string in roman no format (s)  your task is to convert it to an integer . Various symbols and their values are given below.
    I 1, V 5, X 10, L 50, C 100, D 500, M 1000
    Example 1:
    Input: s = V
    Output: 5

## 7. Anagram:
    Given two strings a and b consisting of lowercase characters. The task is to check whether two given strings are an anagram of each other or not. An anagram of a string is another string that contains the same characters, only the order of characters can be different. For example, “act” and “tac” are an anagram of each other.
    Example 1:
    Input:
    a = geeksforgeeks, b = forgeeksgeeks
    Output: YES
    Explanation: Both the string have same characters with same frequency. So, both are anagrams.

## 8. Remove Duplicates:
    Given a string without spaces, the task is to remove duplicates from it.
    Note: The original order of characters must be kept the same. 
    Example 1:
    Input: S = "zvvo"
    Output: "zvo"
    Explanation: Only keep the first occurrence
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

## 9. Form a palindrome:
    Given a string, find the minimum number of characters to be inserted to convert it to palindrome.
    For Example: ab: Number of insertions required is 1. bab or aba aa: Number of insertions required is 0. aa abcd: Number of insertions required is 3. dcbabcd
    Example 1:
    Input: str = "abcd"
    Output: 3
    Explanation: Inserted character marked with bold characters in dcbabcd

## 10. Longest distinct characters in a string:
    Given a string S, find length of the longest substring with all distinct characters. 
    Example 1:
    Input: S = "geeksforgeeks"
    Output: 7
    Explanation: "eksforg" is the longest substring with all distinct characters.

## 11. Implement AtoI:
    Your task  is to implement the function atoi. The function takes a string(str) as argument and converts it to an integer and returns it.
    Note: You are not allowed to use inbuilt function.
    Example 1:
    Input: str = 123
    Output: 123

## 12. Implement strstr:
    Your task is to implement the function strstr. The function takes two strings as arguments (s,x) and  locates the occurrence of the string x in the string s. The function returns and integer denoting the first occurrence of the string x in s (0 based indexing).
    Note: You are not allowed to use inbuilt function.
    Example 1:
    Input: s = GeeksForGeeks, x = For
    Output: 5
    Explanation: For is present as substring in GeeksForGeeks from index 5 (0 based indexing).

## 13. Longest common prefix in an array:
    Given a array of N strings, find the longest common prefix among all strings present in the array.
    Example 1:
    Input:
    N = 4
    arr[] = {geeksforgeeks, geeks, geek, geezer}
    Output: gee
    Explanation: "gee" is the longest common prefix in all the given strings.

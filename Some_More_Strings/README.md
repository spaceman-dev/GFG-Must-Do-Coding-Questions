# Some more questions on Strings

## 1. Most Frequent Word In Array of Strings:
    Given an array arr containing N words consisting of lowercase characters. Your task is to find the most frequent word in the array. If multiple words have same frequency, then print the word whose first occurence occurs last in the array as compared to the other strings with same frequency.
    Example 1:
    Input: N = 3 arr[] = {geeks,for,geeks}
    Output: geeks
    Explanation: "geeks" comes 2 times.

## 2. Camelcase Pattern Matching:
    Given a dictionary of words where each word follows CamelCase notation, print all words in the dictionary that match with a given pattern consisting of uppercase characters only.
    CamelCase is the practice of writing compound words or phrases such that each word or abbreviation begins with a capital letter. Common examples include: “PowerPoint” and “WikiPedia”, “GeeksForGeeks”, “CodeBlocks”, etc.
    Example 1:
    Input: N=3
        Dictionary=["WelcomeGeek", "WelcomeToGeeksForGeeks","GeeksForGeeks"]
        Pattern="WTG"
    Output: WelcomeToGeeksForGeeks
    Explanation: Since only WelcomeToGeeksForGeeks matches the pattern, it is the only answer.

## 3. String Ignorance:
    Given a string of both uppercase and lowercase alphabets, the task is to print the string with alternate occurrences of any character dropped(including space and consider upper and lowercase as same).
    Input: First line consists of T test cases. First line of every test case consists of String S.
    Output: Single line output, print the updated string.
    Example:
    Input: 2
        It is a long day dear.
        Geeks for geeks
    Output:
        It sa longdy ear.
        Geks fore
    Explanation:For the 1st test case. Print first "I" and then ignore next "i". Similarly print first space then ignore next space. and so on.

## 4. Smallest window in a string containing all the characters of another string:
    Given two strings S and P. Find the smallest window in the string S consisting of all the characters(including duplicates) of the string P.  Return "-1" in case there is no such window present. In case there are multiple such windows of same length, return the one with the least starting index. 
    Example 1:
    Input: S = "timetopractice", P = "toc"
    Output: toprac
    Explanation: "toprac" is the smallest substring in which "toc" can be found.

## 5. Design a tiny URL or URL shortner:
    Design a system that takes big URLs like “http://www.geeksforgeeks.org/count-sum-of-digits-in-numbers-from-1-to-n/” and converts them into a short URL. It is given that URLs are stored in database and every URL has an associated integer id.  So your program should take an integer id and generate a URL. 
    A URL character can be one of the following
    A lower case alphabet [‘a’ to ‘z’], total 26 characters
    An upper case alphabet [‘A’ to ‘Z’], total 26 characters
    A digit [‘0′ to ‘9’], total 10 characters
    There are total 26 + 26 + 10 = 62 possible characters.
    So the task is to convert an integer (database id) to a base 62 number where digits of 62 base are "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"
    Example 1:
    Input: N = 12345
    Output: 
        dnh
        12345
    Explanation: "dnh" is the url for id 12345

## 6. Permutations of a given string:
    Given a string S. The task is to print all permutations of a given string.
    Example 1:
    Input: ABC
    Output: ABC ACB BAC BCA CAB CBA
    Explanation: Given string ABC has permutations in 6 forms as ABC, ACB, BAC, BCA, CAB and CBA .

## 7. Non Repeating Character:
    Given a string S consisting of lowercase Latin Letters. Find the first non-repeating character in S.
    Example 1:
    Input: S = hello
    Output: h
    Explanation: In the given string, the first character which is non-repeating is h, as it appears first and there is no other 'h' in the string.

## 8. Check if strings are rotation of each other or not:
    Given two strings s1 and s2. The task is to check if s2 is a rotated version of the string s1. The characters in the strings are in lowercase.
    Example 1:
    Input: geeksforgeeks, forgeeksgeeks
    Output: 1
    Explanation: s1 is geeksforgeeks, s2 is forgeeksgeeks. Clearly, s2 is a rotated version of s1 as s2 can be obtained by left-rotating s1 by 5 units.

## 9. Save Ironman:
    Jarvis is weak in computing palindromes for Alphanumeric characters.
    While Ironman is busy fighting Thanos, he needs to activate sonic punch but Jarvis is stuck in computing palindromes.
    You are given a string S containing alphanumeric characters. Find out whether the string is a palindrome or not.
    If you are unable to solve it then it may result in the death of Iron Man.
    Example 1:
    Input : S = "I am :IronnorI Ma, i"
    Output : YES
    Explanation: Ignore all the symbol and whitespaces S = "IamIronnorIMai". Now, Check for pallandrome ignoring uppercase and lowercase english letter.

## 10. Repeated Character:
    Given a string consisting of lowercase english alphabets. Find the repeated character present first in the string.
    Example 1:
    Input: S = "geeksforgeeks"
    Output: g
    Explanation: g, e, k and s are the repeating characters. Out of these, g occurs first. 

## 11. Remove common characters and concatenate:
    Given two strings s1 and s2. Modify both the strings such that all the common characters of s1 and s2 are to be removed and the uncommon characters of s1 and s2 are to be concatenated.
    Note: If all characters are removed print -1.
    Example 1:
    Input: s1 = aacdb, s2 = gafd
    Output: cbgf
    Explanation: The common characters of s1 and s2 are: a, d. The uncommon characters of s1 and s2 are c, b, g and f. Thus the modified string with uncommon characters concatenated is cbgf.

## 12. Colorful Strings:    
    Find the count of all possible strings of size n.Each character of the string is either ‘R’, ‘B’ or ‘G’. In the final string there needs to be at least r number of ‘R’, at least b number of ‘B’ and at least g number of ‘G’ (such that r + g + b <= n). 
    Example 1:
    Input: n = 4, r = 1, g = 1, b = 1
    Output: 36 
    Explanation: No. of 'R' >= 1, 
        No. of ‘G’ >= 1, No. of ‘B’ >= 1  and (No. of ‘R’) + (No. of ‘B’) + (No. of ‘G’) = n then following cases are possible: 
        1. RBGR and its 12 permutation 
        2. RBGB and its 12 permutation 
        3. RBGG and its 12 permutation 
    Hence answer is 36.

## 13. Second most repeated string in a sequence:
    Given a sequence of strings, the task is to find out the second most repeated (or frequent) string in the given sequence.
    Note: No two strings are the second most repeated, there will be always a single string.
    Example 1:
    Input: N = 6 arr[] = {aaa, bbb, ccc, bbb, aaa, aaa}
    Output: bbb
    Explanation: "bbb" is the second most occurring string with frequency 2.
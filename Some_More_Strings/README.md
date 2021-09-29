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

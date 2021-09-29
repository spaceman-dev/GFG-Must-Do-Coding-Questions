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

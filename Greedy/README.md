# Greedy

## 1. Activity Selection:
    Given N activities with their start and finish day given in array start[ ] and end[ ]. Select the maximum number of activities that can be performed by a single person, assuming that a person can only work on a single activity at a given day.
    Note : Duration of the activity includes both starting and ending day.
    Example 1:
    Input:
    N = 2
    start[] = {2, 1}
    end[] = {2, 2}
    Output: 1
    Explanation: A person can perform only one of the given activities.  

## 2. N Meetings in one room:
    There is one meeting room in a firm. There are N meetings in the form of (start[i], end[i]) where start[i] is start time of meeting i and end[i] is finish time of meeting i. What is the maximum number of meetings that can be accommodated in the meeting room when only one meeting can be held in the meeting room at a particular time?
    Note: Start time of one chosen meeting can't be equal to the end time of the other chosen meeting.
    Example 1:
    Input:
    N = 6
    start[] = {1,3,0,5,8,5}
    end[] =  {2,4,6,7,9,9}
    Output: 4
    Explanation: Maximum four meetings can be held with given start and end timings. The meetings are - (1, 2),(3, 4), (5,7) and (8,9)

<h2><a href="https://codeforces.com/problemset/problem/1749/C">1749C. Number Game </a></h2>

## Topic

### Binary Search and Greedy


## Approach

The first thing to note here is that if during the ith stage Bob increases any value by (k−i+1) that value can not be used in any further stage. This means that the value becomes useless.
Let a[i] denote the frequency of the ith element. Now since Bob wants Alice to lose, he will try to get rid of all the smaller elements, since the smallest element is 1, he will try to get rid of all the one’s before the 1st stage is reached or else Alice will surely win the game by using all the bigger possible elements.
So if a[1]=m then this is the biggest possible value of k and we can use binary search to check if the ‘mid’ can be a value of k.
For i=1, used=mid and for each successive element used=1(Since bob uses all the one’s and Alice uses the biggest possible element for any stage)
So mid is the possible value of k only if ∑used <= ∑sum for each element from 1 to mid

## Time Complexity
O(t*n*logn)

### Rating
1400
 

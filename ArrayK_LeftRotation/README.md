# Problem
  In this problem, We have to rotate an array by k position from left.
 
## Approach 1:
 ### By Extra Space:
   * Step 1 : Take a temp. array of size k.
   * Step 2 : Run a loop from (i=0 to i=k) and store temp[i] = a[i]
   * Step 3 : Run aloop till (n-k) and a[i] = a[i+k]
   * Step 4 : Run a loop from (n-k) to n, take j=0 and a[i] = temp[j]
    
  Space Complexity = O(k)</br>
  Time Complexity = O(n)
  </br>[Check Solution here](https://github.com/akshatprogrammer/Array-Based-Problems-Day3/blob/main/ArrayK_LeftRotation/ExtraSpace.cpp)
  
## Approach 2:
  ### By left rotating by 1 Position each time.
    Run two nested loops and shift one element at a time.
 </br>Time Complexity = O(n*k)</br>
    [Check Solution here](https://github.com/akshatprogrammer/Array-Based-Problems-Day3/blob/main/ArrayK_LeftRotation/ShiftBy1Pos.cpp)
    
## Approach 3:
  ### Juggling Algorithm 
   We will divide elements in sets.
   </br>
   There will be two loops</br>
   * Outer loop -> no. of sets.
   * Inner Loop -> Rotate elementof set k position to left.</br>
   
   #### How to find number of sets?
      Number of sets will depend on the value of n and k.</br>
      no of sets = gcd(n,k);
   
   Make sets and shift the elements in sets.
   </br>[Check Solution here](https://github.com/akshatprogrammer/Array-Based-Problems-Day3/blob/main/ArrayK_LeftRotation/JugglingAlgo.cpp)

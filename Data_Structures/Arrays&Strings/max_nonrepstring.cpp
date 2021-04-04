// Challenge here is to find the number of non repeating characters in a given string !

#define CharacterCount 128   //can change
  
#include <iostream>
#include <vector>
#include <cstring>
#include <string>

using namespace std; 

int longestSubseq(char* myString) 
{ 
    int n = strlen(myString); 
    int currentLength = 1; // length of current running substring 
    int maxLength = 1;  
    int previousIndex;  
    int * alreadyVisited = new int[sizeof(int) * CharacterCount];

   // Initialize the alreadyVisited array as -1, -1 indicates that the character was not visited
    for (int i = 0; i < CharacterCount; i++) 
        alreadyVisited[i] = -1; 
  
    // Mark first character as alreadyVisited
    alreadyVisited[myString[0]] = 0; 
  
    //Start from the second character.
    for (int i = 1; i < n; i++) { 
        previousIndex = alreadyVisited[myString[i]]; 
        cout << alreadyVisited[myString[i]] << endl;
  
        // -----------Case 1 -----------
        if (previousIndex == -1 || i - currentLength > previousIndex) 
            currentLength++; 
  
        //  ---------- Case 2 -------------
        else { 
            // we check if the length of previous 
            // running substring was more than the current or not
            if (currentLength > maxLength) 
                maxLength = currentLength; 
  
            currentLength = i - previousIndex; 
        } 
        // Index updation of current character 
        alreadyVisited[myString[i]] = i; 
    } 
  
    // Compare the length of last current running longest substring with maxLength and 
    // update maxLength if needed 
    if (currentLength > maxLength) 
        maxLength = currentLength; 
     
    free(alreadyVisited); // free memory 
    return maxLength; 
} 

int main() 
{ 
    char myString[] = "ABABCB"; 
    cout << "My string is : " << myString << endl; 
    int len = longestSubseq(myString); 
    cout << "The length of the longest substring "
         << "with non repeating characters is : "
         << len <<endl; 
         
         
    return 0;
} 

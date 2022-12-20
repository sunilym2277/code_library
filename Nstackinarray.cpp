//https://www.codingninjas.com/codestudio/problems/n-stacks-in-an-array_1164271?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0

#include <bits/stdc++.h> 
class NStack
{
public:
    // Initialize your data structure.
    int *arr;
    int *next;
    int *top;
    int freespot;
    
    NStack(int N, int S)
    {
        // Write your code here.
        arr= new int[S];
        next = new int[S];
        top = new int[N];
        freespot= 0;
        
        for(int i=0;i<S-1;i++){
            next[i] = i+1;
        }
        next[S-1]=-1;
        for(int i=0;i<N;i++)
        {
            top[i] = -1;
        }
        
    }

    // Pushes 'X' into the Mth stack. Returns true if it gets pushed into the stack, and false otherwise.
    bool push(int x, int m)
    {
        if(freespot==-1)
        {
            return false;
        }
        int index = freespot;
        arr[index] = x;
        freespot = next[index];
        next[index] = top[m-1];
        top[m-1] = index;
        
        return true;
    }

    // Pops top element from Mth Stack. Returns -1 if the stack is empty, otherwise returns the popped element.
    int pop(int m)
    {
        // Write your code here.
        if(top[m-1]==-1){
            return -1;
        }
        
        int index = top[m-1];
        top[m-1] = next[index];
        next[index] = freespot;
        freespot = index;
        return arr[index];
    }
};

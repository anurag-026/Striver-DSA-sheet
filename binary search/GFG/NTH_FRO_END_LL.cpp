
#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};




    int getNthFromLast(Node *head, int n)
    {
           // Your code here
           int count=0;
           
           while(head != NULL){
               count++;
               head= head->next;
           }
           
           int x= count-n+1;
           
          
           while(head != NULL ){
                count--;
                if(count == n) 
                    return (head->data);
                    
                head= head->next;
               
           }
           return -1;
           
    }




//{ Driver Code Starts.

int main()
{
  int i,n,l,k;

    
    struct Node *head = NULL,  *tail = NULL;

        cin>>n>>k;
        int firstdata;
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    cout<<getNthFromLast(head, k)<<endl;
    
    return 0;
}
// } Driver Code Ends
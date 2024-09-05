#include<bits/stdc++.h>
#include<iostream>
using namespace std;
 class Node{
        int data;
        Node* next;
        Node* prev;

        Node(int data){
            data=data;
            next=NULL;
            prev=NULL;
        }
    }

void popi(Node* head){
    Node* newNode;
    Node* head =  head->next;
    head=head->next;
    head-> prev = NULL;


}
int main(){
    

   
    return 0;
}
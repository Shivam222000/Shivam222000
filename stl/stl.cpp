#include <bits/stdc++.h>
using namespace std;//namespace for stl
int main(){
    
    void explainStack(){
        //LIFO data structure
        stack<int> st;
        st.push(1);//{1}
        st.push(5);//{5,1}
        st.push(3);//{3,5,1}
        st.emplace(7);//{7,3,5,1}

        cout<<st.top(); //prints the top element(7 here) but don't delete it
        cout<<st.size()//3 "print no. of element"
        cout<<st.empty();//return boolean value

        stack<int> st2;
        st.swap(st2);

    }

    void explainQueue(){
        //FILO data structure
        queue<int> q;
        q.push(1);
        q.push(2);
        q.emplace(4);

        q.back() +=5;
        cout<<q.back();//prints 9

        //q is {1,2,9}
        cout<<q.front();

        q.pop();//{2,9}
        cout<<q.front(); //prints 2
        
        //size swap empty same as stack
        

    }
     void explainPQ(){

        priority_queue<int> pq;
        //bigger element comes first
        
        pq.push(5); //{5}
        pq.push(2); //{5,2}
        pq.push(8); //{8,5,2}
        pq.emplace(10);{10,8,5,2};
        pq.top();//returns 10
        pq.pop();// returns 10 and delete it 

        //***minimum heap***
        priority_queue<int,vector<int>, greater<int>> pq;
        pq.push(5); //{5};
        pq.push(2); //{2,5}
        pq.push(8); //{2,5,8}
        pq.emplace(10);//{2,5,8,10}
        
     }
     void explain_SET(){
        //set contains "unique" values in "ordered" way
        
     }
      
    return 0;
}
#include<iostream>
using namespace std;


// 1.tower of honoi

/*
void towerofHonoi(int n,char src,char dest,char helper){
    
    if (n == 0)
    {
        return;//base condition
    }

    towerofHonoi(n-1,src,helper,dest);
    cout<<"move from "<<src<<" to "<<dest<<endl;
    towerofHonoi(n-1,helper,dest,src); 
}

int main(){

    towerofHonoi(4,'a','c','b');
    return 0;
}
*/




/*

// 2.remove all duplicate from the string 
 string remove_duplicate(string s){

     if (s.length() == 0)
     {
         return " ";
     }
     char ch = s[0];
     string ans = remove_duplicate(s.substr(1));

     if (ch == ans[0])
     {
         return ans;
     }
     else{
         return ch + ans;
     }
 }


int main(){
    string s;

    cin>>s;

    cout<< remove_duplicate(s)<<endl;
    return 0;
}
*/



// 3. move x in end if string
/*
 string move_x_in_end(string s){

     if (s.length() == 0)
     {
         return " ";
     }
     char ch = s[0];
     string ans = move_x_in_end(s.substr(1));

     if (ch == 'x')
     {
         return ans+ch;
     }
     return ch+ans;
 }


int main(){
    string s;

    cin>>s;

    cout<< move_x_in_end(s)<<endl;
    return 0;
}
*/


// 4. GENERATING SUBSTRING
/*
void subsequence(string s,string ans){

    if (s.length() == 0)
    {   cout<<ans<<endl;
        return;
    }

    char ch = s[0];
    string ros = s.substr(1);
    subsequence(ros,ans);
    subsequence(ros,ans+ch);

}

int main(){
    cout<<"enter the string :"<<endl;
    string s;
    cin>>s;

    cout<<"All the possible substring are :"<<endl;
    subsequence(s,"");
    return 0;
}
*/


// GENERATING SUBSTRING WITH ASCIII NUMBER

void subsequence(string s,string ans){

    if (s.length() == 0)
    {   cout<<ans<<endl;
        return;
    }

    char ch = s[0];
    int code = ch;

    string ros = s.substr(1);


    subsequence(ros,ans);
    subsequence(ros,ans+ch);
    subsequence(ros,ans+to_string(code));
}

int main(){
    cout<<"enter the string :"<<endl;
    string s;
    cin>>s;

    cout<<"All the possible substring With ascii number :"<<endl;
    subsequence(s,"");
    return 0;
}
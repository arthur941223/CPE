#include<iostream>
#include<string>
using namespace std;
int main(){
	string s;
	int cnt=0;
	while(getline(cin,s)){
		for(int i=0;i<s.length();i++){
			if(s[i]==' '){
				cout<<" ";
			}else{
				if(s[i]=='"'){
					if(cnt%2==0){
						cout<<"``";
						cnt++;
					}else{
						cout<<"''";
						cnt++;
					}
				}else{
					cout<<s[i];
				}
			}
		}
		cout<<"\n"; 
	}
} 

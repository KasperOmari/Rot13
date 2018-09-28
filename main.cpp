#include <bits/stdc++.h>
using namespace std;
int rot;
string s;
bool same(char a,char b){
	return (islower(a)&&islower(b) || isupper(a)&&isupper(b));
}
int main(int argc, char** argv){
	int len=strlen(argv[1]);
	for(int i=0;i<len;++i){
		rot+=argv[1][i]-'0';
		rot*=10;
	}
	rot/=10;
	rot%=26;

	ifstream in;
	in.open(argv[2]);
	while(!in.eof()){
		char c;
		getline(in,s);
		len=s.size();
		for(int i=0;i<len;++i){
			if(argv[3]==NULL || string(argv[3])=="-d"){
				c=char(s[i]-rot);
				c+=(!isalpha(c)||!same(c,s[i]))?26:0;

				s[i]=isalpha(s[i])?c:s[i];
			}
			else if(string(argv[3])=="-e"){
				c=char(s[i]+rot);
				c-=(!isalpha(c)||!same(c,s[i]))?26:0;
				
				s[i]=isalpha(s[i])?c:s[i];
			}else 
				return puts("Invalid Arguments"),0;
		}
		puts(s.c_str());
	}
	return 0;
}

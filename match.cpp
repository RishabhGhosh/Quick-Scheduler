#include <bits/stdc++.h>
#define ll long long int
#define bp  __builtin_popcount
#define gcd(a,b)  __gcd(a,b)
#define lcm(a,b)  a*b/__gcd(a,b)
#define all(a) a.begin(), a.end()
#define pb  push_back
#define mk  make_pair
#define ep  emplace_back

using namespace std;

void fun(vector <string> t){
	vector <string> v;
	for(int i=0;i<=9;i++){
		string l1=t[i];
		v.pb(l1);
		
	}
	t.erase(t.begin(),t.begin()+10);
	system("cls");
	cout<<"************  Match Fixtures  ************"<<endl;
	int x=1;
	while(x<=38){
		cout<<"     WEEK "<<x<<" Fixtures: "<<endl;
		for(int k=0;k<=9;k++){
			cout<<k+1<<". ";
			if(x%2==0){
				cout<<t[k]<<"(H)  VS  "<<v[k]<<"(A)"<<endl;
			}
			else{
				cout<<v[k]<<"(H)  VS  "<<t[k]<<"(A)"<<endl;
			}
		
		}		
			string tmpp=v[0];
			v.erase(v.begin());
			v.pb(tmpp);
		x++;
		cout<<"---------------------------"<<endl<<endl;
	}
	system("pause");
	
}

int main(){
	while(1){
		system("cls");
		cout<<"************  Welcome to quick scheduler for european football leagues  ************"<<endl<<endl;
		cout<<"Press 1 to input all 20 teams names"<<endl<<"Press 2 to input text filename"<<endl<<"Press 3 to exit";
		int c;
		cout<<endl<<endl<<"(1/2 or 3 to exit) : ";
		cin>>c;
		if(c==3){
			return 0;
		}
		
		if(c==1){
			system("cls");
			cout<<"Enter name of teams one by one: "<<endl;
			vector <string> s;
			cin.ignore();
			for(int i=1;i<=20;i++){
				string sr;
				getline(cin,sr);
				s.pb(sr);			
			}
			fun(s);		
		}
		else{
			ifstream in;
			system("cls");
			cout<<"Enter filename without .txt extension (file must be in .txt format)"<<endl;
			string st;
			cin>>st;
			string ex=".txt";
			st.append(ex);
			string sf;
			in.open(st.c_str());
			vector <string> s;
			while(getline(in,sf)){
				s.pb(sf);
			}
			fun(s);			
		}
	}
	return 0;
}


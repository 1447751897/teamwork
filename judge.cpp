/*#include<bits/stdc++.h>
using namespace std;
bool Judge(string);
int main(){
	string in;
	//cout<<"�����룺"; 
	cin>>in;
	int result=Judge(in);
	cout<<result;
} */
//�ж����� ����ֵΪ1����������Ϊ��д��Сд������ֵΪ0˵�����Ϸ� 
bool Judge(string a){
	int l=a.length();
	//cout<<l<<endl;
	int cnt=0;
    int result;
	string number="0123456789";
	string character="��Ҽ��������½��ƾ�ʰԪ������Ǫ��";
	//cout<<character.size()<<endl;
	for(int i=0;i<l;i++){
		for(int j=0;j<10;j++){
			if(a[i]==number[j]){
				cnt++;
			}
		}
	}
	for(int i=0;i<l;i++){
		for(int j=0;j<34;j++){
			if(a[i]==character[j]){
				cnt++;
				break;
			}
		}
	}
	//cout<<cnt<<endl; 
	if(cnt==l){
		//˵��������Ϸ� 
		return true;
	}
	else 
	return false;
} 


#include<iostream>
#include<cstring>
using namespace std;
int main() {
	char str[50]; ;
	cin>>str;
	//duyet chuoi
		int i, max = 0, imax = 0;
	for (i = 1; i < strlen(str); i++) {
		if (str[i] == str[i-1])
		{
			int k=i,n=i-1,m=2;
			while(str[(n)-1]==str[(k)+1]&&str[n-1]!='\0'&&str[k+1]!='\0') {
				m+=2;
				n--;k++;
			}
			if(m>max){
				max=m;
				imax=n;
			}
		}
	else if (str[i + 1] == str[i - 1]) {
				int k=i,n=i,m=1;
				while(str[n-1]==str[k+1]&&str[n-1]!='\0'&&str[k+1]!='\0') {
					m+=2;
					n--;
					k++;
				}
				if(m>max){
					max=m;
				    imax=n;
				}
			}
			else continue;
	}
	cout <<" xau palidrome co do dai lon nhat: max = "<< max << " bat dau tu vi tri i= " << imax<<" trong xau ki tu";
	cout << endl;
	for (i = imax; i < imax + max; i++) {
		cout << str[i];
	}
	return 0;
}


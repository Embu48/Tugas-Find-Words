#include <iostream>
#include <cstring>
using namespace std;

bool f;

int horizontal(char* z){
  	char h1[] = "tgbwwinterwses", 
	     h2[] = "aaunttmmhfoodnb",
 	     h3[] = "jlwcqldzmpmvdmr",
	     h4[] = "asagmquwvvbsohi",
	     h5[] = "bwplotanadtpgnc",
	     h6[] = "rewngodjcpnatnk",
	     h7[] = "eeotwosbqharrsa",
	     h8[] = "azcgeswewnaknpb",
	     h9[] = "dinnerqodlwdcar",
	     h10[] = "onopkwmparktzcc",
	     h11[] = "qbfrogmamwpweey",
	     h12[] = "lqzqnnmrzjjsclg",
	     h13[] = "mosgzczetdbooto",
	     h14[] = "pdcrzmsngrdnrpz",
	     h15[] = "ohnkzwaterjgtra",
	     *ph[] = {h1,h2,h3,h4,h5,h6,h7,h8,h9,h10,h11,h12,h13,h14,h15};
	
	for (int i=0;i<15;i++){
        	if (strstr(*(ph+i),z) != '\0')
            		return 1;
        	if (strstr(strrev(*(ph+i)),z) != '\0')
            		return 1;   
    	}
}

int vertikal(char* z){
	char 	v1[]="tajabreadoqlmpo",
		v2[]="galsweezinbqodh",
		v3[]="buwapwocnofzscn",
		v4[]="wncglntgnprqgrk",
		v5[]="wtqmogweekonzzz",
		v6[]="itlqtoosrwgncmw",
		v7[]="nmduadswqmmmzsa",
		v8[]="tmzwnjbeoparent",
		v9[]="ehmvacqwdamztge",
		v10[]="rfpvdphnlrwjdrr",
		v11[]="wombtnaawkpjbdj",
		v12[]="sovsparkdtwsong",
		v13[]="eddogtrnczecort",
		v14[]="snmhnnspaceltpr",
		v15[]="nbrickabrcygoza",
		*pv[]={v1,v2,v3,v4,v5,v6,v7,v8,v9,v10,v11,v12,v13,v14,v15};
	
	for (int i=0;i<15;i++){
        	if (strstr(*(pv+i),z) != '\0')
            		return 1;
        	if (strstr(strrev(*(pv+i)),z) != '\0')
            		return 1;   
    	}
}

int diagonal1(char* z, char soal[15][15]){
	char pd1[30][15];
	int i = 0,x=0;
   	while (i < 15)
	{
		int k = 14;
		int l = i;
		while (k < 15 && l < 15)
		{
			pd1[x][k]=soal[k][l];
			k--;l++;
		}
		i++;x++;
	}
	int c = 13;
	while (c>=0)
	{
		int k = c;
		int l = 0;
		while (k >=0  && l < 15)
		{
			pd1[x][l]=soal[k][l];
			k--;l++;
		}
		c--;x++;
	}
	for (int i=0;i<30;i++)
	{
		if (strstr(pd1[i],z) != '\0')
            		return 1;
        	if (strstr(strrev(pd1[i]),z) != '\0')
            		return 1;
	}
}

int diagonal2(char* z, char soal[15][15]){
  	char pd2[30][15];
	int i = 0,x=0;
    while (i < 15)
    {
        int k = 0;
        int l = i;
        while (k < 15 && l < 15)
        {
            pd2[x][k]=soal[k][l];
            k++;l++;
        }
        i++;x++;
    }
    i = 0;
    while (i < 15)
    {
        int k = i;
        int l = 0;
        while (k < 15 && l < 15)
        {
            pd2[x][l]=soal[k][l];
            k++;l++;
        }
        i++;x++;
    }
	for (int i=0;i<30;i++){
        	if (strstr(pd2[i],z) != '\0')
            		return 1;
        	if (strstr(strrev(pd2[i]),z) != '\0')
            		return 1;   
    	}
}

int main(){
 	int n;
	char soal[15][15]= {	{'t','g','b','w','w','i','n','t','e','r','w','s','e','s','n'},
				{'a','a','u','n','t','t','m','m','h','f','o','o','d','n','b'},
				{'j','l','w','c','q','l','d','z','m','p','m','v','d','m','r'},
				{'a','s','a','g','m','q','u','w','v','v','b','s','o','h','i'},
				{'b','w','p','l','o','t','a','n','a','d','t','p','g','n','c'},
				{'r','e','w','n','g','o','d','j','c','p','n','a','t','n','k'},
				{'e','e','o','t','w','o','s','b','q','h','a','r','r','s','a'},
				{'a','z','c','g','e','s','w','e','w','n','a','k','n','p','b'},
				{'d','i','n','n','e','r','q','o','d','l','w','d','c','a','r'},
				{'o','n','o','p','k','w','m','p','a','r','k','t','z','c','c'},
				{'q','b','f','r','o','g','m','a','m','w','p','w','e','e','y'},
				{'l','q','z','q','n','n','m','r','z','j','j','s','c','l','g'},
				{'m','o','s','g','z','c','z','e','t','d','b','o','o','t','o'},
				{'p','d','c','r','z','m','s','n','g','r','d','n','r','p','z'},
				{'o','h','n','k','z','w','a','t','e','r','j','g','t','r','a'}};
	int (*Find[])(char*,char soal[15][15])={horizontal,vertikal,diagonal1,diagonal2};

	cout<<"FIND WORDS!\n\n";
	for(int x=0;x<15;x++){
  		for(int y=0;y<15;y++){
    			cout<<soal[x][y]<<" ";
  		}
		cout<<endl;
	}
	
	cout<<"\nBanyak kata yang akan dicari : ";cin>>n;
	char w[n][15];
	cout<<"\nDaftar kata yang akan dicari : \n";
	for (int i=0;i<n;i++){
		cout<<i+1<<". ";cin>>w[i];
	}
	cout<<endl<<"Hasil : \n";
	for (int y=0;y<n;y++){
		f=0;
		for (int a=0;a<4;a++){
			if((*Find[a])(w[y],soal) == 1){
				cout<<y+1<<". ada";
				f++;
				break;
			}
		}
		if (f == 0)
			cout<<y+1<<". tidak";
		cout<<endl;
	}
 return 0;
}

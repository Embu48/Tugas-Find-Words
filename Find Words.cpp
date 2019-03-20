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
		vr1[]="opmlqodaerbajat",
		vr2[]="hdoqbnizeewslag",
		vr3[]="ncszfoncowpawub",
		vr4[]="krgqrpngtnlgcnw",
		vr5[]="zzznokeewgomqtw",
		vr6[]="wmcngwrsootqlti",
		vr7[]="aszmmmqwsdaudmn",
		vr8[]="tnerapoebjnwzmt",
		vr9[]="egtzmadwqcavmhe",
		vr10[]="rrdjwrlnhpdvpfr",
		vr11[]="jdbjpkwaantbmow",
		vr12[]="gnoswtdkrapsvos",
		vr13[]="trocezcnrtgodde",
		vr14[]="rptlecapsnnhmns",
		vr15[]="azogycrbakcirbn",
		*pv[]={v1,v2,v3,v4,v5,v6,v7,v8,v9,v10,v11,v12,v13,v14,v15,
		       vr1,vr2,vr3,vr4,vr5,vr6,vr7,vr8,vr9,vr10,vr11,vr12,vr13,vr14,vr15};
	
	for (int x=0;x<30;x++){
		if (strstr(*(pv+x),z) != '\0')
			f++;
	}
	if(f == 0)
		return 0;
	else
		return 1;
}

int diagonal1(char* z){
	char	d1[]=	"t",
		d2[]=	"ga",
		d3[]=	"baj",
		d4[]=	"wula",
		d5[]=	"wnwsb",
		d6[]=	"itcawr",
		d7[]=	"ntqgpee",
		d8[]=	"tmlmlwea",
		d9[]=	"emdqonozd",
		d10[]=	"rhzutgtcio",
		d11[]=	"wfmwaowgnnq",
		d12[]=	"sopvndoenobl",
		d13[]=	"eomvajssepfqm",
		d14[]=	"sdvbdcbwrkrzop",
		d15[]=	"nndstpqeqwoqsdo",
		d16[]=	"bmopnhwomgngch",
		d17[]=	"rhgaandpmnzrn",
		d18[]=	"intralaamczk",
		d19[]=	"cnrkwrmrzmz",
		d20[]=	"ksndkwzesw",
		d21[]=	"apctpjtna",
		d22[]=	"bazwjdgt",
		d23[]=	"rcesbre",
		d24[]=	"cecodr",
		d25[]=	"ylonj",
		d26[]=	"gtrg",
		d27[]=	"opt",
		d28[]=	"zr",
		d29[]=	"a",
		dr2[]=	"ag",
		dr3[]=	"jab",
		dr4[]=	"aluw",
		dr5[]=	"bswnw",
		dr6[]=	"rwacti",
		dr7[]=	"eepgqtn",
		dr8[]=	"aewlmlmt",
		dr9[]=	"dzonoqdme",
		dr10[]=	"oictgtuzhr",
		dr11[]=	"qnngwoawmfw",
		dr12[]=	"lboneodnvpos",
		dr13[]=	"mqfpessjavmoe",
		dr14[]=	"pozrkewbcdbvds",
		dr15[]=	"odsqowqeqptsdnn",
		dr16[]=	"hcgngmowhnpomb",
		dr17[]=	"nrznmpdnaaghr",
		dr18[]=	"kzcmaalartni",
		dr19[]=	"zmzrmrwkrnc",
		dr20[]=	"wsezwkdnsk",
		dr21[]=	"antjptcpa",
		dr22[]=	"tgdjwzab",
		dr23[]=	"erbsecr",
		dr24[]=	"rdocec",
		dr25[]=	"jnoly",
		dr26[]=	"grtg",
		dr27[]=	"tpo",
		dr28[]=	"rz",
		
		*pd1[]={d1,d2,d3,d4,d5,d6,d7,d8,d9,d10,d11,d12,d13,d14,d15,d16,d17,d18,d19,d20,d21,d22,d23,d24,d25,d26,d27,d28,d29,
			dr2,dr3,dr4,dr5,dr6,dr7,dr8,dr9,dr10,dr11,dr12,dr13,dr14,dr15,dr16,dr17,dr18,dr19,dr20,dr21,dr22,dr23,dr24,
			dr25,dr26,dr27,dr28};
		
		
	for(int i=0;i<56;i++){
		if (strstr(*(pd1+i),z) != '\0')
			f++;
	}
	if(f == 0)
		return 0;
	else
		return 1;
}

int diagonal2(char* z){
  	char	d1[]="n",
		d2[]="sb",
		d3[]="enr",
		d4[]="sdmi",
		d5[]="wodhc",
		d6[]="rovonk",
		d7[]="efmsgna",
		d8[]="thpbptsb",
		d9[]="nmmvtarpr",
		d10[]="imzvdnrnac",
		d11[]="wtdwapakccy",
		d12[]="wtlunchadzeg",
		d13[]="bnqqajqnwtelo",
		d14[]="gucmtdbwlkwctz",
		d15[]="tawgoosedrpsopa",
		d16[]="alalgowoawjorr",
		d17[]="jspnwsqpmjbnt",
		d18[]="awwtermazddg",
		d19[]="beogewmrtrj",
		d20[]="recnkgmegr",
		d21[]="eznponzne",
		d22[]="aiorncst",
		d23[]="dnfqzma",
		d24[]="obzgzw",
		d25[]="qqsrz",
		d26[]="lock",
		d27[]="mdn",
		d28[]="ph",
		d29[]="o",
		*pd2[]={d1,d2,d3,d4,d5,d6,d7,d8,d9,d10,d11,d12,d13,d14,d15,d16,d17,d18,d19,d20,d21,d22,d23,d24,d25,d26,d27,d28,d29};
	
	for (int i=0;i<29;i++){
        	if (strstr(*(pd2+i),z) != '\0')
            		return 1;
        	if (strstr(strrev(*(pd2+i)),z) != '\0')
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
 int (*Find[])(char*)={horizontal,vertikal,diagonal1,diagonal2};
	
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
		cin>>w[i];
	}
	cout<<endl<<"Hasil : \n";
	for (int y=0;y<n;y++){
		f=0;
		for (int a=0;a<4;a++){
			if((*Find[a])(w[y]) == 1){
				cout<<"ada";
				f++;
				break;
			}
		}
		if (f == 0)
			cout<<"tidak";
		cout<<endl;
	}
 return 0;
}

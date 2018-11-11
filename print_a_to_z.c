#include<stdio.h>
void a(){printf("you print a\n");}
void b(){printf("you print b\n");}
void c(){printf("you print c\n");}
void d(){printf("you print d\n");}
void e(){printf("you print e\n");}
void f(){printf("you print f\n");}
void g(){printf("you print g\n");}
void h(){printf("you print h\n");}
void i(){printf("you print i\n");}
void j(){printf("you print j\n");}
void k(){printf("you print k\n");}
void l(){printf("you print l\n");}
void m(){printf("you print m\n");}
void n(){printf("you print n\n");}
void o(){printf("you print o\n");}
void p(){printf("you print p\n");}
void q(){printf("you print q\n");}
void r(){printf("you print r\n");}
void s(){printf("you print s\n");}
void t(){printf("you print t\n");}
void u(){printf("you print u\n");}
void v(){printf("you print v\n");}
void w(){printf("you print w\n");}
void x(){printf("you print x\n");}
void y(){printf("you print y\n");}
void z(){printf("you print z\n");}

typedef struct printchar{
	void(*printatoz)();
	char keychar;
} printchars;

int main(){
	printchars printcharlist[] = {a,'a',b,'b',c,'c',d,'d',e,'e',f,'f',g,'g',h,'h',i,'i',j,'j',l,'l',m,'m',n,'n',o,'o',p,'p',q,'q',r,'r',s,'s',t,'t',u,'u',v,'v',w,'w',x,'x',y,'y',z,'z'};
	printchars *atozptr;
	atozptr = printcharlist;
	while(1){
	char c = getchar();
	for(atozptr = printcharlist;atozptr->keychar;atozptr++){
		if(c == atozptr->keychar){
			atozptr->printatoz();
			break;
		}				
	}
}





}





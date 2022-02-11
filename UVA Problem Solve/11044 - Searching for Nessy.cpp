#include <cstdio>
using namespace std;

int main() {
	int test, w,h;

	scanf("%d",&test);
	while(test--){
		scanf("%d %d",&w,&h);
		printf("%d\n",(w/3)*(h/3));
	}

	return 0;
}

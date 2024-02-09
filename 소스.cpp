#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>





////  18108번
///*불교 국가인 태국은 불멸기원(佛滅紀元), 
//즉 석가모니가 열반한 해를 기준으로 연도를 세는 불기를 사용한다. 
//반면, 우리나라는 서기 연도를 사용하고 있다. 불기 연도가 주어질 
//때 이를 서기 연도로 바꿔 주는 프로그램을 작성하시오.*/
//
//int main()
//{
//
//	int num = 0;
//
//	scanf("%d", &num);
//
//	num -= 543;
//
//	printf("%d", num);
//
//	return 0;
//
//}
//


//// 10430번
//
///*(A+B)%C는 ((A%C) + (B%C))%C 와 같을까?
//
//(A×B)%C는 ((A%C) × (B%C))%C 와 같을까?
//
//세 수 A, B, C가 주어졌을 때, 위의 네 가지 값을 구하는 프로그램을 작성하시오.*/
//
//
//int main() {
//
//	int A = 0, B = 0, C = 0;
//
//	scanf("%d%d%d", &A, &B, &C);
//
//
//	printf("%d\n", (A + B) % C);
//	printf("%d\n", ((A % C) + (B % C)) % C);
//	printf("%d\n", (A*B) % C);
//	printf("%d", ((A % C) *(B % C)) % C);
//
//	return 0;
//
//}


// 11382번
/*꼬마 정민이는 이제 A + B 정도는 쉽게 계산할 수 있다. 
이제 A + B + C를 계산할 차례이다!*/
int main() {

    unsigned long long A = 0, B = 0, C = 0;

    scanf("%llu %llu %llu", &A, &B, &C);

    printf("%llu", A + B + C);

    return 0;
}

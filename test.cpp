#include <iostream> // 표준 입출력 라이브러리 포함

using namespace std; // std:: 네임스페이스 생략 설정

int main() {
    int num1, num2;
    int sum;

    cout << "첫 번째 정수를 입력하세요: ";
    cin >> num1;

    cout << "두 번째 정수를 입력하세요: ";
    cin >> num2;

    sum = num1 + num2;

    cout << "두 수의 합: " << sum << endl;

    // 조건문 사용 예시
    if (sum % 2 == 0) {
        cout << "결과는 짝수입니다." << endl;
    } else {
        cout << "결과는 홀수입니다." << endl;
    }

    return 0; // 프로그램 정상 종료
}

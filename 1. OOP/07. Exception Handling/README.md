# Exception Handling

## 예외상황을 처리하지 않았을 때의 결과
- 예외상황은 프로그램 실행 중에 발생하는 문제의 상황을 의미한다.
- 예외상황의 예
  - 나이를 입력하라고 했는데, 0보다 작은 값이 입력됨.
  - 나눗셈을 위해서 두 개의 숫자를 입력 받았는데, 제수로 0이 입력됨.
  - 주민등록번호 13자리만 입력하라고 했는데 중간에 –가 삽입됨.
- 이렇듯 예외는 문법적 오류가 아닌, 프로그램 논리에 맞지 않는 오류를 뜻한다. 

<img width="815" alt="스크린샷 2021-12-08 오후 8 24 57" src="https://user-images.githubusercontent.com/73745836/145200528-44e3ee4e-9193-4085-8209-c9224a542ef2.png">

## if문을 이용한 예외의 처리
- if문을 이용해서 예외를 발견하고 처리하면, 예외처리 부분과 일반적인 프로그램의 흐름을 쉽게 구분할 수 없다.
- if문은 프로그램의 논리를 구현하는데 주로 사용된다.
- 그래서 C++은 별도의 예외처리 메커니즘을 제공하고 있다.

```cpp
int main()
{
  int num1, num2;
  cout<<"두 개의 숫자 입력 : ";
  cin>>num1>>num2; // num2에 0이 입력됨으로 인해서 예외 발생 가정
  
  if (num2==0) // if문을 통해서 예외를 발견
  {
    cout<<"제수는 0이 될 수 없습니다."<<endl;
    cout<<"프로그램을 다시 실행하세요."<<endl; 
  }
  else
  {
    cout<<"나눗셈의 몫: "<<num1/num2<<endl;
    cout<<"나눗셈의 나머지: "<<num1%num2<<endl;
  }
  return 0;
}
```

## C++의 예외처리 메커니즘 이해: try, catch, throw
<img width="425" alt="스크린샷 2021-12-08 오후 8 28 56" src="https://user-images.githubusercontent.com/73745836/145201108-7ddeaf4a-e6ea-42be-9d8e-93794989f69b.png">
- try 블록은 예외발생에 대한 검사범위를 지정하는데 사용된다.
- catch 블록은 try 블록에서 발생한 예외를 처리하는 영역으로 그 형태가 마치 반환형 없는 함수와 같다.
- throw는 예외의 발생을 알리는 역할을 한다.
- try~catch는 하나의 문장이므로 그 사이에 다른 문장이 삽입될 수 없다.

## 예외처리 메커니즘의 적용
<img width="829" alt="스크린샷 2021-12-08 오후 8 29 34" src="https://user-images.githubusercontent.com/73745836/145201183-c08646c9-7d08-4558-a39c-ca8ee7eacd69.png">
- 실행의 흐름을 이해하는 것이 중요!
- 실행의 흐름은 try 블록 안으로 들어간다. 그 안에서 예외가 발생하면 이후에 등장하는 catch 블록을 실행하게 된다.
- 예외가 발생하지 않으면 try 블록을 빠져 나와 try~ catch 블록 이후를 실행하게 된다. 

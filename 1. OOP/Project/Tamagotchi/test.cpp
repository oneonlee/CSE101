#include "Animal.h"
#include "Cat.h"
#include "Dog.h"
#include <thread>

int main() {
    //cout << setw(10) << setfill("=") << "Welcome to Tamagotchi(�ٸ���ġ) game" << setw(10) << setfill("=") << endl;
    Cat cat(3, "����", 98, 10, "Mix");
    Dog dog;
    cin >> dog;
    cout << endl;
    //�ʱ� ���� Ȯ��
    cout<<dog;
    cout<<cat;

    //Play �Լ� �׽�Ʈ
    dog.Play();
    cat.Play();

    //Eat �Լ� �׽�Ʈ
    dog.Eat();
    cat.Eat();
    //Sleep �Լ� �׽�Ʈ
    dog.Sleep();
    cat.Sleep();

    cout << dog;
    cout << cat;

    return 0;
}
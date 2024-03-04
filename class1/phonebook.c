#import <cs50.h>
#import <stdio.h>

int main(void)
{
    string name= get_string("What's your name? ");
    int age= get_int("What's your age? ");
    string number = get_string("What's your cellphone? ");
    printf("Your name is %s\nYour age is %i\nYour phone is %s\n",name, age, number);
}
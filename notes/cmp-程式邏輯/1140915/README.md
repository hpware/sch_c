# file in ~/code/test.cpp
```cpp
#include <iostream> <-- default mount
using namespace std; <-- use the namespace std

int main(int argc, char ** argv) { <-- main funtion.
    printf("%d", 1234); <-- prints out 1234
    return 0; <-- quits peacefully
}

```

# file in ~/code/ten39e.cpp
What is this?
Basicly %10x just makes the %10 spaces and %x the prinf 1234 prints 1234

## this includes two parts

### 1.
```cpp
    printf("十進制 1234 = 十六進制 %10x\n", 1234);
    printf("line 2 \n");

```

### 2.
```cpp
cout << "十進制 1234 = 十六進制" << endl;
cout << "line 2\n";
```
endl means that It will add "\n" to the end of the sentence.
and "cout <<" is just console.log with extra steps.


# 總結
這個很酷，但是很吉掰。

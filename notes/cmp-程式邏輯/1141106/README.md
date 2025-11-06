1. Call by value (傳值呼叫)
```cpp
void callByValue(int)
callByValue(value);
cout << value << endl; // 30
```
2. Call by address  (傳址呼叫)
```cpp
void callByAddress(int *)
callByAddress(&value);
cout << value << endl; // 30
```
3. Call by Reference ()
```cpp
void callByReference(int &)
callbyReference(value);
cout << value << endl; //50
```
## Using `Call by value`
```cpp
void Fun(int*);

int main(int argc, char** argv) {
	int a = 10;
	Fun(*a);
	cout << a <<endl;
}

void Fun (int *x) {
	*x = 20;
	cout << x << endl;
}
```

Should return:
```bash
20 // function "Fun"
10 // Function "Main"
```
## Using `Call by Reference`
```cpp
void Fun(int&);

int main(int argc, char** argv) {
	int a = 10;
	Fun(a);
	cout << a << endl;
}

void Fun(&x) {
	x = 20;
	cout << x << endl;
}
```

Should return:
```bash
20 // function "Fun"
20 // Function "Main"
```

# Build args
```cpp
int main(int argc, char** argv) {
	int a = int(argv[1]);
	cout << a << endl;
}
```

If you use the arg `./your_program 10`, this will return:
```bash
10 // the argument that you passed into the program.
```

## Add checks
```cpp
int main (int argc, char** argv) {
	if (strcmp(argv[1], "Test")) {
		cout << "Test Version!" << endl;
	} else {
		cout << "Standard Version!" << endl;
	}
}
```
This example adds checks, if `argv[1]` is `"Test"` then, return `"Test Version!\n"` to the user, and anything else, returns `"Standard Version!\n"`

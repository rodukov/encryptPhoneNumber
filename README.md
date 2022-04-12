# encryptPhoneNumber
ℹ️ This command takes a phone number and makes a mathematical example out of it

## Install
### Download
```bash
git clone https://github.com/rodukov/encryptPhoneNumber
cd encryptPhoneNumber
```

### Prepare the program to run
Edit the `userphone.phonenumber` variable in the `main()` function

### Run the program
Compile the program yourself
```bash
g++ main.cpp -o main
```
Run the program
```bash
chmod +x main && ./main
```
Or you can use a ready-made file that compiles the program from the source code. This will also run it.
```bash
chmod +x run.sh && ./run.sh
```

## Example
📌 For example, we have this Japanese number +54 310 54095982. After editing the variable, we get the following result:<br>
`( 13487400000 - -2702039647991 ) * 2 * 1`<br>
If you solve this mathematical expression we will get the original number

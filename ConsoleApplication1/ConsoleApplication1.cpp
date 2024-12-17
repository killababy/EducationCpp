//Циклы — это важная концепция в программировании, которая позволяет выполнять блок кода многократно до тех пор, 
// пока не будет выполнено определенное условие.В C++ существует три основных типа циклов : for, while, do - while

#include <iostream>


//FOR LOOP 

// for (initialization; condition; increment/decrement) {
//	block of code to execute
// }

//int main() {												Цикл счета от 0 до 5, используя цикл for
	//std::cout << "Iteration from 0 to 5" << std::endl;
	//for (int i = 0; i <= 5; i++) {
		//std::cout << "Iteration: " << i << std::endl;
	//}
	//return 0;

//}


//WHILE LOOP

// while (condition) {
//	block of code to execute
// }

//int main() {												Цикл счета от 5 до 0, используя цикл while
	//int i = 5;
	//std::cout << "Iteration from 5 to 0" << std::endl;
	//while (i >= 0) {
		//std::cout << "Iteration: " << i << std::endl;
		//i--;
	//}
	//return 0;
//}

//DO-WHILE LOOP

// do {
//	block of code to execute
// } while (condition);

int main() {											// Цикл счета от 5 до 10, используя цикл dowhile
	int i = 5;
	std::cout << "Iteration from 5 to 10" << std::endl;
	do {
		std::cout << "Iteration: " << i << std::endl;
		i++;
	} while (i <= 10);
	return 0;
}

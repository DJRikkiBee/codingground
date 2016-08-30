/*
 * untitled.cxx
 * 
 * Copyright 2016 ChaosX <ChaosX@CHAOSX-PC>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <iostream>
#include <string>

using namespace std;

int check(short i) {
	if (i==0) return i;
	else if (i%2==0) i = 2;
	else i = 1;
	return i;
}

void double_num(int &i) {
	string ss = to_string(i);
	ss = ss[0] + ss[0];
	cout << ss << endl;
}
void triple_num(int &i) {i*=3;}
int mod_num(char t, int i) {
	if (t == 'o') double_num(i);
	else if (t == 'e') triple_num(i);
	else i = 0;
	return i;
}

int main() {
	short num; char type, act;
	cout << "Enter an integer: "; cin >> num;
	switch (check(num)) {
		case 0:
			type = '0'; act = '0'; break;
		case 1:
			type = 'o'; act = 'd'; ; break;
		case 2:
			type = 'e'; act = 't'; break;
		default:
			type = 'X'; act = 'X';
	}
	cout << "Number is " << type << ", " << act << " each digit in integer..." << endl;
	cout << "Result: " << mod_num(type, num) << endl;
	return 0;
}


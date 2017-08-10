/*********************************************** 
 * Name: Chen Chen
 * Student ID: 20518383
 * File: balanced.c
 * CS 136 Fall 2014 - Assignment 6, Problem 5
 * Description: 
***********************************************/
#include <stdio.h>
#include <assert.h>
#include <stdbool.h>
// count_open determines how many opening parenthesis in str.
// PRE: str is not NULL
// POST: return a integer that to count how many opening 
// parathesis '(' in string.
int count_open (char str[]) {
    int i=0;
    int count=0;
    char first= '(';
    while (str[i]) {
        if (str[i] == first) {
            ++count;
        }
        ++i;
    }
    return count;
}
// count_close determines how many closing parenthesis in str.
// PRE: str is not NULL
// POST: return a integer that to count how many closing 
// parathesis ')' in string.
int count_close (char str[]) {
    int i=0;
    int count=0;
    char first= ')';
    while (str[i]) {
        if (str[i] == first) {
            ++count;
        }
        ++i;
    }
    return count;
}
// is_balanced(str) determines if str is balanced.
// PRE:  str is not NULL
// POST: returns true if str is balanced, otherwise false. str is balanced if
//       every parenthesis is closed in the reverse order that it is opened. '('
//       is an opening parenthesis and ')' is a closing parenthesis. Other chars
//       in str are ignored.
bool is_balanced(char str[]) {
    assert(str);
    int i=0;
    int count1 = count_open(str);
    int count2 = count_close(str);
    if (str[i] != '(') {
        return false;
    }
    if (count1==count2) {
        return true;
    }
    else {return false;}
}

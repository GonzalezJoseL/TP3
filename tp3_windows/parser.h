/*
 * parser.h
 *
 *  Created on: 10 jun. 2021
 *      Author: jose_
 */

#ifndef PARSER_H_
#define PARSER_H_

int parser_EmployeeFromText(FILE* pFile , LinkedList* pArrayListEmployee);
int parser_EmployeeFromBinary(FILE* pFile , LinkedList* pArrayListEmployee);
//int parser_ID(FILE* pFile);
#endif /* PARSER_H_ */

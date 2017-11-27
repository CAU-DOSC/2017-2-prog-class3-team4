# README file for TEAM[3,4]:

This text file describes brief but precise and complete specification of project including:
- funtion descriptions: name, input/output parameters
- declaration of of important data and data types to be included in user header file
- your team's brief ideas of implementations

- - -
Your description start form next line and do not delete lines upto this point.
______________________________________________________________________________
Owner ship description : 
README.txt - 김영기 (kimyoungi99)
project_header.h - 한윤진 (holquew)
main.c - (cofls)
node_library - 강창훈

File description :
project_header.h
프로그램에서 사용하는 header들과 Node 구조체에 대한 정의가 있는 header file

main.c
노드의 value값을 user로 부터 받아온뒤 노드를 생성/연산/출력하는 함수를 호출

node_library.c
노드를 생성하고 연결(append)하는 함수들이 있는 파일

node_function.c
노드를 연산/출력 하는 함수들이 있는 파일


function description :
LINK creat_node(int value)
노드를 생성하는 함수

LINK append(LINK head, LINK cur)
노드를 연결(append) 하는 함수

int node_count(LINK first, LINK head)
노드의 개수를 세주는 함수

void print_backword(LINK first, LINK head, int num)
각 노드의 value들을 역순으로(backword) 출력하는 함수

void print_middle(LINK first, LINK head, int num)
linked list의 중간 노드의 value를 출력하는 함수

void print_forword(LINK first, LINK head, int num)
각 노드의 value들을 순서대로 출력하는 함수

void del_odd_element(LINK first, LINK head, int num)
linked list들의 홀수번 node를 삭제하는 함수





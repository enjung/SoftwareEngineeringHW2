﻿#include <iostream>
#include <stdio.h>
#include <string.h>
#include <fstream>
#include "SignUp.h"
#include "SignUpUI.h"
#include "MemberRepo.h"
#include "SignIn.h"
#include "SignInUI.h"
#include "SignOut.h"
#include "SignOutUI.h"
#include "Bike.h"
#include "Member.h"
#include "User.h"
#include "MemberBikeCollection.h"
using namespace std;

// 상수 선언
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

// 함수 선언
void doTask();
void program_exit();

// 변수 선언
ofstream out_fp;
ifstream in_fp;

MemberRepo memberRepo;
SignUp signUpControl(&memberRepo);
SignUpUI signUpUI(&signUpControl);
SignIn signIn(&memberRepo);
SignInUI signInUI(&signIn);
SignOut signOutControl;
SignOutUI signOutUI(&signOutControl);



int main()
{
    // 파일 입출력을 위한 초기화
    in_fp.open(INPUT_FILE_NAME);
    out_fp.open(OUTPUT_FILE_NAME);

    
    doTask();


    out_fp.close();
    in_fp.close();

    return 0;
}


void doTask()
{
    // 메뉴 파싱을 위한 level 구분을 위한 변수
    int menu_level_1 = 0, menu_level_2 = 0;
    int is_program_exit = 0;

    while (!is_program_exit)
    {
        // 입력파일에서 메뉴 숫자 2개를 읽기
        if (!(in_fp >> menu_level_1 >> menu_level_2)) break;

        // 메뉴 구분 및 해당 연산 수행
        switch (menu_level_1)
        {
        case 1:
        {
            switch (menu_level_2){
                case 1:   // "1.1. 회원가입“ 메뉴 부분
                    signUpUI.submitSignUpData(in_fp,out_fp);
                    break;
            }
            break;
        }
        case 2: {
            switch (menu_level_2)
            {
            case 1:   // "2.1. 로그인" 메뉴 부분
            {
                signInUI.submitSignInData(in_fp, out_fp);
                break;
            }
            case 2:   // "2.2. 로그아웃" 메뉴 부분
            {
                signOutUI.confirmSignOut(out_fp, signIn.getLoggedInId());
                break;
            }
            }
            break;
        }
        case 3: {
            switch (menu_level_2)
            {
            case 1:   // "3.1. 자전거 등록" 메뉴 부분
            {
                //...
                break;;
            }
            }
            break;
        }
        case 4: {
            switch (menu_level_2)
            {
            case 1:   // "4.1. 자전거 대여" 메뉴 부분
            {
                //...
                break;;
            }
            }
            break;
        }
        case 5: {
            switch (menu_level_2)
            {
            case 1:   // "5.1. 자전거 대여 리스트" 메뉴 부분
            {
                //...
                break;;
            }
            }
            break;
        }
        case 6: {
            switch (menu_level_2)
            {
            case 1:   // "6.1. 종료“ 메뉴 부분
                //...
                is_program_exit = 1;
                break;;
            }
            break;
        }
              break;
        };


        
    }
}
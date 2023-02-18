/**
 * @file main.c
 * @author fudu (fudu@zmvision.cn)
 * @brief 
 * @version 0.1
 * @date 2023-02-18
 * 
 * ZMVISION Copyright (c) 2023
 * 
 */

#include <stdio.h>

#include "log.h"

int main(int argc, char *argv[])
{
    log_info("%s", __FUNCTION__);
    log_error("%s", __DATE__);

    return 0;
}
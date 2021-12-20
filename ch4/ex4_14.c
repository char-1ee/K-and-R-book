/**
 * @file ex4_14.c
 * @author Li Xingjian xingjianli59@gmail.com
 * @brief Define a marco `swap(t, x, y)` that interchanges two arguments of type t.
 * @version 0.1
 * @date 2021-12-20
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifdef CATEGORY_0

#define swap(t, x, y) do{t z=y,x=y,y=z}while(0)

#else
#ifdef CATEGORY_1

// TODO
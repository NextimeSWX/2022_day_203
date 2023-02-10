/*
 * E89 Pedagogical & Technical Lab
 * project:     vector
 * created on:  2023-02-10 - 15:49 +0100
 * 1st author:  evan.lebihan - evan.lebihan
 * description: test_vector_get_front.c
 */

#include "stu.h"

Test(vector_get_front, normal) {
    stu_vector_t *ve;
    size_t ele_size;
    size_t capa_size;
    int liste[8] = {25, 5, 48, 96, 12, 23, 6, 78};

    ele_size = sizeof(int);
    capa_size = 8;
    ve = stu_vector_new(ele_size, capa_size);
    stu_memcpy(ve->vector, liste, ele_size * capa_size);
    ve->capa_size = 8;
    ve->max_size = ve->capa_size * ele_size;
    cr_assert_eq(stu_vector_get_front(ve), ve->vector);
    free(ve->vector);
    free(ve);
}

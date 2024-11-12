long lt_cnt = 0;
long ge_cnt = 0;

long gotoabsdiff(long x, long y) {
    long result;
    if (x < y) goto eval_true;
    ge_cnt++;
    result = x - y;
    return result;

eval_true:
    lt_cnt++;
    result = y - x;
    return result;
}
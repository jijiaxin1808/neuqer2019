// 请实现一个函数，将一个字符串中的每个空格替换成“%20”。例如，当字符串为 We Are
// Happy.则经过替换之后的字符串为 We%20Are%20Happy。

// task1 javascript
    function replace(str) {
        return str.replace(/\s/,"%20");
    }
// task1 c++
void replaceSpace(char *str,int length) {
    int oldlength=0,newlength=0,i=0;
    while(str[i]!='\0') {
        ++oldlength;
        if(str[i]==' ')newlength+=3;
        else ++newlength;
        ++i;
    }
    while(oldlength>=0) {
        if(str[oldlength]==' ')
            {
                str[newlength--]='0';
                str[newlength--]='2';
                str[newlength--]='%';  
            }
        else str[newlength--]=str[oldlength];
        --oldlength;
    }
}

// 一只青蛙一次可以跳上 1 级台阶，也可以跳上 2 级。求该青蛙跳上一个 n 级的台阶总共
// 有多少种跳法（先后次序不同算不同的结果）。

// task2 javascript
    function jumpDown(heigh) {
        if(heigh < 3) return heigh;
        else return jumpDown(heigh-1) + jumpDown(heigh-2);
    }
// task2 c++
    int jumpDown(int heigh) {
        if(heigh<3) return heigh;
        else return jumpDown(heigh-1) + jumpDown(heigh-2);
    }
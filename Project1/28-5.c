/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>  // memcmp

int compareFiles(const char* file1, const char* file2) {
    FILE* fp1 = fopen(file1, "rb");  // 바이너리 모드 (정확 비교)
    FILE* fp2 = fopen(file2, "rb");
    if (fp1 == NULL || fp2 == NULL) return -1;  // 실패

    // 단계 1: 크기 비교
    fseek(fp1, 0, SEEK_END);
    long size1 = ftell(fp1);
    fseek(fp2, 0, SEEK_END);
    long size2 = ftell(fp2);
    rewind(fp1);
    rewind(fp2);
    if (size1 != size2) {
        fclose(fp1); fclose(fp2);
        return 0;  // 다름
    }

    // 단계 3: 한 글자(바이트)씩 비교 (해시 생략, 간단히)
    char buf1[1024], buf2[1024];
    while (1) {
        size_t read1 = fread(buf1, 1, 1024, fp1);
        size_t read2 = fread(buf2, 1, 1024, fp2);
        if (read1 != read2 || memcmp(buf1, buf2, read1) != 0) {
            fclose(fp1); fclose(fp2);
            return 0;  // 다름
        }
        if (read1 < 1024) break;  // 끝
    }

    fclose(fp1); fclose(fp2);
    return 1;  // 같음
}

int main(int argc, char* argv[]) {
    if (argc != 3) {
        printf("사용법: %s file1 file2\n", argv[0]);
        return -1;
    }
    int result = compareFiles(argv[1], argv[2]);
    if (result == 1) printf("같음\n");
    else if (result == 0) printf("다름\n");
    else printf("오류\n");
    return 0;
}
*/


class Solution {
    public int solution(int n, int k) {
        int answer = 0;
        if(k-n/10<0) k = 0;
        else k = k-n/10;
        answer = 12000*n +2000*k;
        return answer;
    }
}
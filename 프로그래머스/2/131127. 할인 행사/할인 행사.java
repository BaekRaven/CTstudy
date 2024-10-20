import java.util.*;
class Solution {
    public int solution(String[] want, int[] number, String[] discount) {
        int answer = 0;
        Map<String, Integer> want_map = new HashMap<>();
        for(int i=0; i<number.length; i++){
            for(int j=0; j<number[i]; j++){
                if(want_map.containsKey(want[i])){ //들었으면
                    want_map.put(want[i],want_map.get(want[i])+1);
                }
                else{
                    want_map.put(want[i],1);
                }
            }
        }
        //System.out.println(want_map);

        for(int i=0; i<=discount.length-10; i++){
            Map<String, Integer> want_map_copy = new HashMap<>(want_map);
            //System.out.println(i+"번째"+want_map_copy);
            for(int j=i; j<i+10; j++){ //10개만확인하면됨
                String key = discount[j];
                if(want_map_copy.containsKey(key)) { //일치하면
                    int value = want_map_copy.get(key);
                    if(value==1){
                        want_map_copy.remove(key);
                    }
                    else{
                        want_map_copy.put(key,value-1);
                    }
                }
                //System.out.println(j+" "+want_map_copy);
            }
            if(want_map_copy.isEmpty()){ //비었으면 가능한날 한개추가
                answer++;
            }
        }
        return answer;
    }
}
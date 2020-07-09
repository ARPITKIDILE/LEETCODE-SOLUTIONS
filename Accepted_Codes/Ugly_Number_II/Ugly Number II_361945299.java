class Solution {
    public int nthUglyNumber(int n) {
        List<Integer> list = new ArrayList<>();
        int i2=0,i3=0,i5=0;
        list.add(1);
        int next2=2,next3=3,next5=5,next=1;
        for(int i=1;i<n;i++){
            next=Math.min(next2,Math.min(next3,next5));
            list.add(next);
            //System.out.println(next2+" "+next3+" "+next5);
            if(next==next2){
                i2++;
                next2 = list.get(i2)*2;
            }
            if(next==next3){
                i3++;
                next3 = list.get(i3)*3;
            }
            if(next==next5){
                i5++;
                next5=list.get(i5)*5;
            }
        }
        return next;

    }
}

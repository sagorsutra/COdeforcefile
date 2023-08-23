//import java.util.Scanner;
//public class Main{
//    public static long solve(long [] nums) {
//        int n=nums.length;
//        long min=Integer.MAX_VALUE;
//        for(int i=0;i<n-1;i++){
//            if(nums[i]>nums[i+1])
//                return 0;
//            else{
//                min=Math.min(nums[i+1]-nums[i],min);
//            }
//        }
//        if(min==0)
//            return 1;
//        return min/2+1;
//    }
//    public static void main(String [] args){
//        Scanner sc=new Scanner(System.in);
//        int m=sc.nextInt();
//        while(m-->0){
//            int n=sc.nextInt();
//            long nums[]=new long[n];
//            for(int i=0;i<n;i++)
//                nums[i]=sc.nextLong();
//            System.out.println(solve(nums));
//        }}}
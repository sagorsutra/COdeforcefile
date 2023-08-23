import java.util.Arrays;
import java.util.Scanner;

public class desorting {
    public static long solve(long[] arr)
    {
        int n = arr.length;
        long min = Integer.MAX_VALUE;

        for (int i=0; i<n-1; i++){

            if (arr[i]> arr[i+1])
            {
                return 0;
            }
            else {
                min = Math.min(min,arr[i+1]-arr[i]);
            }
        }
        if (min==0){
            return 1;
        }
        return min/2+1;

    }
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int tc = s.nextInt();

        for (int i=0; i<tc; i++)
        {
            int arrln = s.nextInt();
            long[] arr = new long[arrln];
            int count = 0;

            for (int j=0; j<arrln; j++){
                arr[j] = s.nextInt();
            }

            System.out.println(solve(arr));


        }
     }
}


/*
import java.util.Arrays;
        import java.util.Scanner;

public class desorting {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int tc = s.nextInt();

        for (int i=0; i<tc; i++)
        {
            int arrln = s.nextInt();
            int[] arr = new int[arrln];
            int count = 0;

            for (int j=0; j<arrln; j++){
                arr[j] = s.nextInt();
            }

            int[] sorted = arr.clone();
            Arrays.sort(arr);

            if (Arrays.equals(arr,sorted))  //Now it has to sort
            {
                desorting(arr);
            }
            else {
                System.out.println(count);
            }
        }
    }

    public static void desorting(int[] arr)
    {
        int count = 0;
        int length = arr.length;
        int i=0;
        while(arr[length-2] <= arr[length-1]) {                                 // last one will be decreased by 1;
            for (i=0; i<length-1; i++){
                arr[i] = arr[i]+1;
            }
            arr[length-1] = arr[length-1]-1;
            count++;
        }
        System.out.println(count);
    }

}

*/
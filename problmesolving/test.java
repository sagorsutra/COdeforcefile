package problmesolving;

public class test {
    public static void main(String[] args) {

        int[] arr = {1,2,3,7};
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
        for (int e : arr)
        {
            System.out.print(" "+e);
        }
        System.out.println();
        System.out.println(count);


    }
}

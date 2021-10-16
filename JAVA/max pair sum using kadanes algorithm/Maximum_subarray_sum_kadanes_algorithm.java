import java.util.Scanner;

public class Maximum_subarray_sum_kadanes_algorithm {
    public static void solve(int arr[])
    {
        int cumsum[]=new int[arr.length];
        int s=0;
        int maxsum=Integer.MIN_VALUE;
        for(int i=0;i<arr.length;i++)
        {
            s=s+arr[i];
            cumsum[i]=s;
            if(s<0)
                s=0;
            maxsum=Math.max(maxsum,s);

        }
        System.out.println(maxsum);
    }
public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter no. of array elements: ");
    int n = sc.nextInt();
    int a[] = new int[n];
    System.out.println("Enter array elements: ");
    for (int i = 0; i < n; i++)
        a[i] = sc.nextInt();
    solve(a);
}

}

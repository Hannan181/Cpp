import java.util.ArrayList;

/* To find an element is present or not */
/* To find the position of a certiain element */
/* To find the indices of all the target elements */
public class Array02 {
    public static void main(String[] args) {
        int[] arr={1,2,3,5,6,3,4,5};
        int target=3;
        System.out.println(isPresent(arr,0,target));
        System.out.println(pos(arr, 0, target));
        ArrayList<Integer>list=new ArrayList<>();
        indices(list, arr, 0, target);
        System.out.println(list);
    }
    static boolean isPresent(int[]arr,int index,int target){
        if(index==arr.length)return false;
        return arr[index]==target || isPresent(arr, index+1, target);
    }
    static int pos(int[]arr,int index,int target){
        if(arr[index]==target)return index+1;
        if(index==arr.length)return -1;
        return pos(arr,index+1,target);
    }
    static void indices(ArrayList<Integer>list,int[]arr,int index,int target){
        if(index==arr.length) return;
        if(arr[index]==target){
            list.add(index+1);
        }
        indices(list,arr,index+1,target);
    }

}

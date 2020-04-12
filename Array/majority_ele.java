
import java.util.*;
import java.lang.*;
import java.io.*;

class majority_ele {
    public static void main (String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int t = Integer.parseInt(br.readLine());
		while(t!=0) {
			int length = Integer.parseInt(br.readLine());
			String[] strarr = br.readLine().split(" ");
			//System.out.println(strarr);
			int[] arr = new int[length];
			for(int i=0; i<length;i++){
				arr[i] = Integer.parseInt(strarr[i]);
				//System.out.println(arr[i]);
			}
			findMajorityElement(arr,length);
			t--;
		}
	}

	public static void findMajorityElement(int[] arr, int length) {
		Map<Integer,Integer> map = new HashMap<>();
		int count = 1;
		for(int a : arr) {
			if(map.containsKey(a)) {
				map.put(a,map.get(a)+1);
				System.out.println(map);
			} else {
				map.put(a,count);
				System.out.println("--else---"+map);
			}
		}
		Map.Entry<Integer, Integer> maxEntry = null;

		for (Map.Entry<Integer, Integer> entry : map.entrySet())
		{
			System.out.println(entry);
			System.out.println(entry.getValue());
			if (maxEntry == null || entry.getValue().compareTo(maxEntry.getValue()) > 0)
			{
				//System.out.println(entry);
				maxEntry = entry;
				System.out.println(maxEntry);
			}
		}
        int retVal = (maxEntry.getValue()>(length/2))?maxEntry.getKey():-1;
		System.out.println(retVal);
	}
}
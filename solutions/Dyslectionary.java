import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Dyslectionary {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        List<String> group = new ArrayList<>();
        boolean firstGroup = true;

        while (sc.hasNextLine()) {
            String line = sc.nextLine().trim();
            
            if (line.isEmpty()) {
                if (!group.isEmpty()) {
                    if (!firstGroup) {
                        System.out.println(); // 
                    }
                    String[] wordsArray = group.toArray(new String[0]);
                    mergeSort(wordsArray, 0, wordsArray.length - 1);
                    printArray(wordsArray);
                    group.clear();
                    firstGroup = false;
                }
            } else {
                group.add(line);
            }
        }

        if (!group.isEmpty()) {
            if (!firstGroup) {
                System.out.println(); 
            }
            String[] wordsArray = group.toArray(new String[0]);
            mergeSort(wordsArray, 0, wordsArray.length - 1);
            printArray(wordsArray);
        }
        
        sc.close();
    }

    private static void printArray(String[] a) {
        int maxLen = 0;
        for (String word : a) {
            if (word.length() > maxLen) {
                maxLen = word.length();
            }
        }
        for (String word : a) {
            System.out.printf("%" + maxLen + "s%n", word);
        }
    }

    private static void merge(String[] a, int l, int mid, int r) {
        String[] aux = new String[a.length];
        for (int i = l; i <= r; i++) aux[i] = a[i];
        
        int i = l;
        int j = mid + 1;
        int k = l;
        while (i <= mid && j <= r) {
            String s1 = new StringBuilder(aux[i]).reverse().toString();
            String s2 = new StringBuilder(aux[j]).reverse().toString();
            if (s1.compareTo(s2) <= 0) a[k++] = aux[i++];
            else a[k++] = aux[j++];
        }
        
        while (i <= mid) a[k++] = aux[i++];
        while (j <= r) a[k++] = aux[j++];
    }

    private static void mergeSort(String[] a, int l, int r) {
        if (l < r) {
            int mid = (l + r) / 2;
            mergeSort(a, l, mid);
            mergeSort(a, mid + 1, r);
            merge(a, l, mid, r);
        }
    }
}

import java.util.Scanner;

public class PartyGames {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		while (true) { 
			int n = sc.nextInt();
			if (n == 0) break;
			String[] names = new String[n];
			sc.nextLine();
			for (int i = 0; i < n; i++) names[i] = sc.nextLine();
			mergeSort(names, 0, n-1);
			for (int i = 0; i < n; i++) System.out.println(names[i]);

		}
	}

	private static void merge(String[] a, int l, int mid, int r) {
		String[] aux = new String[a.length];
		for (int i = l; i <= r; i++) aux[i] = a[i];
		
		int i = l; 
		int j = mid+1;
		int k = l;
		while(l <= mid && j <= r) {
			if (aux[i].compareTo(aux[j]) <= 0) a[k++] = aux[i++];
			else a[k++] = aux[j++];
		}
		while(i <= mid) a[k++] = aux[i++];
	}

	private static void mergeSort(String[] a, int l, int r) {
		if (l < r) {
			int mid = (l+r) / 2;
			mergeSort(a, l, mid);
			mergeSort(a, mid+1, r);
			merge(a, l, mid, r);
		}
	}
		
}
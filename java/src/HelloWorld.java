public class HelloWorld {
public static void main(String[] args) {
System.out.println("Hello, world!");
// small sample to exercise stepping in the debugger
int a = 2;
int b = 3;
int c = add(a, b);
System.out.printf("%d + %d = %d\n", a, b, c);
}

private static int add(int x, int y) {
return x + y;
}
}
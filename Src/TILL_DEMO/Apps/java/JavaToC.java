public class JavaToC {

    public native void f();

    static {
        System.load("/home/vfisdk/TILL_DEMO/lib/libshared.so");
    }

    public static void main(String[] args) {
        new JavaToC().f();
    System.out.print("Enter name ");
    }
}

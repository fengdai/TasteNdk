package forfun.tastendk;

public class Foo {
  static {
    System.loadLibrary("JniTest");
  }

  public static native String hello();
}

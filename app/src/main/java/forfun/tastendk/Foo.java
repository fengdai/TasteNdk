package forfun.tastendk;

public class Foo {
  static {
    System.loadLibrary("native-lib");
  }

  public static native String hello();
}

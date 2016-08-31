package www.bugke.com.ndkdemo;

/**
 * Created by hezhi on 2016/8/31 0031.
 */

public class NDKDemo {

    static {
        System.loadLibrary("NDKDemo-OS");
    }

    /**
     * NDK 的方法
     * @return
     */
    public static native String getNDKDemoText();
}

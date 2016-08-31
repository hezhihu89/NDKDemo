package www.bugke.com.ndkdemo;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    // Used to load the 'native-lib' library on application startup.
    static {
        System.loadLibrary("native-lib");
        System.loadLibrary("NDKDemo-lib");
    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        TextView tv = (TextView) findViewById(R.id.sample_text);
        TextView tv1 = (TextView) findViewById(R.id.sample_text1);
        TextView tv2 = (TextView) findViewById(R.id.sample_text2);
        TextView tv3 = (TextView) findViewById(R.id.sample_text3);



        tv.setText(stringFromJNI());
        tv1.setText(getPhoneCpu());
        tv2.setText(getPhone());
        tv3.setText(NDKDemo.getNDKDemoText());
    }


    public native String stringFromJNI();

    public native String getPhoneCpu();

    public native String getPhone();
}

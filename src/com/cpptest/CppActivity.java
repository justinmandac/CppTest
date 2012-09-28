package com.cpptest;

import android.os.Bundle;
import android.app.Activity;
import android.util.Log;
import android.view.Menu;
import android.view.MenuItem;
import android.view.View;
import android.widget.Button;
import android.support.v4.app.NavUtils;

public class CppActivity extends Activity {
	private Button gobutton;
	public static native void codeTest();
	
	static
	{ try
	{
		System.loadLibrary("test");
	}
	 catch (UnsatisfiedLinkError ule) {
         Log.e("JNI", "WARNING: Could not load .so");
     }
	}
	
    @Override
    public void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_cpp);
        
        gobutton = (Button)this.findViewById(R.id.button);
        gobutton.setOnClickListener(new View.OnClickListener() {
			
			public void onClick(View v) {
				// TODO Auto-generated method stub
				Log.e("JNI", "Button pressed!");
				codeTest();
			}
		});
    }

    @Override
    public boolean onCreateOptionsMenu(Menu menu) {
        getMenuInflater().inflate(R.menu.activity_cpp, menu);
        return true;
    }

    
}

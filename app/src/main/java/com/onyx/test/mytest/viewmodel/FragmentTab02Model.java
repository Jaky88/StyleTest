package com.onyx.test.mytest.viewmodel;

import android.databinding.BaseObservable;
import android.support.v4.app.Fragment;
import android.view.View;

import com.onyx.test.mytest.model.bean.ConfigBean;
import com.onyx.test.mytest.model.utils.ShellUtils;

/**
 * Created by jaky on 2017/11/8 0008.
 */

public class FragmentTab02Model extends BaseObservable {

    private Fragment fragment;
    private ConfigBean config;
    private String info;

    public String getInfo() {
        return info;
    }

    public void setInfo(String info) {
        this.info = info;
    }

    public FragmentTab02Model(Fragment f, ConfigBean config) {
        this.fragment = f;
        this.config = config;
    }


    public void onStartClick(View view) {
        ShellUtils.CommandResult ret = ShellUtils.execCommand("cat /proc/partitions", false, true);
        System.out.printf("===========：%s", ret.successMsg);
        setInfo(ret.successMsg);
    }
}
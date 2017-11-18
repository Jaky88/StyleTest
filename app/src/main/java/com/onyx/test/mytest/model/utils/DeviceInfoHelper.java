package com.onyx.test.mytest.model.utils;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.net.wifi.WifiInfo;
import android.net.wifi.WifiManager;
import android.os.Build;
import android.os.Environment;
import android.os.StatFs;
import android.os.SystemClock;
import android.util.Log;

import com.onyx.test.mytest.binding.RecycleViewItemModel;
import com.onyx.test.mytest.model.entity.CpuUtil;

import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.io.IOException;
import java.net.InetAddress;
import java.net.NetworkInterface;
import java.net.SocketException;
import java.util.ArrayList;
import java.util.Enumeration;
import java.util.List;

import static com.onyx.test.mytest.BuildConfig.DEBUG;

/**
 * @Copyright: Copyright © 2017 Onyx International Inc. All rights reserved.
 * @Project: StyleTest
 * @Author: Jack
 * @Date: 2017/9/19 0019,0:57
 * @Version: V1.0
 * @Description: TODO
 */

public class DeviceInfoHelper {
    private static final String TAG = DeviceInfoHelper.class.getSimpleName();
    private List<RecycleViewItemModel> itemModels;
    private static DeviceInfoHelper sInstance;
    private Context mContext;
    private String strLevel = "";


    private DeviceInfoHelper(Context context) {
        mContext = context;
//        context.registerReceiver(batteryReceiver, new IntentFilter(Intent.ACTION_BATTERY_CHANGED));
    }

    public static DeviceInfoHelper getInstance(Context context) {
        if (sInstance == null) {
            sInstance = new DeviceInfoHelper(context);
        }

        return sInstance;
    }

    public List<RecycleViewItemModel> getItemModel() {
        if (itemModels == null) {
            itemModels = new ArrayList<>();
            itemModels.add(new RecycleViewItemModel("编译信息：", ""));
            itemModels.add(new RecycleViewItemModel("TYPE(类型)", Build.TYPE));
            itemModels.add(new RecycleViewItemModel("SERIAL（序列号）", Build.SERIAL));
            itemModels.add(new RecycleViewItemModel("HARDWARE", Build.HARDWARE));
            itemModels.add(new RecycleViewItemModel("MODEL（型号）", Build.MODEL));
            itemModels.add(new RecycleViewItemModel("BOARD（主板）", Build.BOARD));
            itemModels.add(new RecycleViewItemModel("BRAND", Build.BRAND));
            itemModels.add(new RecycleViewItemModel("DEVICE（设备）", Build.DEVICE));
            itemModels.add(new RecycleViewItemModel("PRODUCT（产品）", Build.PRODUCT));
            itemModels.add(new RecycleViewItemModel("VERSION_CODES.BASE（系统版本）", "" + Build.VERSION_CODES.BASE));
            itemModels.add(new RecycleViewItemModel("VERSION.RELEASE（API等级）", "" + Build.VERSION.RELEASE));
            itemModels.add(new RecycleViewItemModel("FINGERPRINT（系统指纹）", "" + Build.FINGERPRINT));
            itemModels.add(new RecycleViewItemModel("SDK（sdk版本）", "" + Build.VERSION.SDK));

            itemModels.add(new RecycleViewItemModel("ID(版本ID)", "" + Build.ID));
            itemModels.add(new RecycleViewItemModel("DISPLAY（版本号）", "" + Build.DISPLAY));
            itemModels.add(new RecycleViewItemModel("USER", "" + Build.USER));
            itemModels.add(new RecycleViewItemModel("编译时间", "" + Build.TIME));

            itemModels.add(new RecycleViewItemModel("kernel version", System.getProperty("os.version")));
            itemModels.add(new RecycleViewItemModel("kernel name", System.getProperty("os.name")));
            itemModels.add(new RecycleViewItemModel("kernel arch", System.getProperty("os.arch")));
            itemModels.add(new RecycleViewItemModel("user.home", System.getProperty("user.home")));
            itemModels.add(new RecycleViewItemModel("user.name", System.getProperty("user.name")));
            itemModels.add(new RecycleViewItemModel("user.dir", System.getProperty("user.dir")));

            itemModels.add(new RecycleViewItemModel("java.home ", System.getProperty("java.home ")));
            itemModels.add(new RecycleViewItemModel("java.versio", System.getProperty("java.versio")));
            itemModels.add(new RecycleViewItemModel("java.class.version", System.getProperty("java.class.version")));
            itemModels.add(new RecycleViewItemModel("java.class.path", System.getProperty("java.class.path")));

            itemModels.add(new RecycleViewItemModel("硬件信息：", ""));
            itemModels.add(new RecycleViewItemModel("CPU概况：", CpuUtil.getCpuString()));
            itemModels.add(new RecycleViewItemModel("CPU名字：", CpuUtil.getCpuName()));
            itemModels.add(new RecycleViewItemModel("CPU类型：", CpuUtil.getCpuModel()));
            itemModels.add(new RecycleViewItemModel("CPU ABI：", Build.CPU_ABI));
            itemModels.add(new RecycleViewItemModel("CPU特性：", CpuUtil.getCpuFeature()));
            itemModels.add(new RecycleViewItemModel("CPU最大频率：", "" + CpuUtil.getMaxCpuFreq()));
            itemModels.add(new RecycleViewItemModel("CPU最小频率：", "" + CpuUtil.getMinCpuFreq()));
            itemModels.add(new RecycleViewItemModel("CPU当前频率：", "" + CpuUtil.getCurCpuFreq()));
            itemModels.add(new RecycleViewItemModel("移动信息：", CpuUtil.getMobileInfo()));
            itemModels.add(new RecycleViewItemModel("内存大小：", "" + getTotalMemory()));
            itemModels.add(new RecycleViewItemModel("Rom大小：", "" + getRomMemroy()[0]));
            itemModels.add(new RecycleViewItemModel("内部存储大小：", "" + getTotalInternalMemorySize()));
            itemModels.add(new RecycleViewItemModel("SD卡大小：", "" + getSDCardMemory()[0]));
            itemModels.add(new RecycleViewItemModel("IP地址：", getIpAddress(mContext)));
            itemModels.add(new RecycleViewItemModel("版本信息：", getVersion()[0]));
            itemModels.add(new RecycleViewItemModel("当前电量：", strLevel));
            itemModels.add(new RecycleViewItemModel("开机时间：", getTimes()));
            itemModels.add(new RecycleViewItemModel("MAC地址：", getOtherInfo()[0]));
        }
        return itemModels;
    }

    private BroadcastReceiver batteryReceiver = new BroadcastReceiver() {

        @Override
        public void onReceive(Context context, Intent intent) {
            int level = intent.getIntExtra("level", 0);
            //  level加%就是当前电量了
            strLevel = level + "%";
        }
    };

    public String[] getOtherInfo() {
        String[] other = {"null", "null"};
        WifiManager wifiManager = (WifiManager) mContext.getSystemService(Context.WIFI_SERVICE);
        WifiInfo wifiInfo = wifiManager.getConnectionInfo();
        if (wifiInfo.getMacAddress() != null) {
            other[0] = wifiInfo.getMacAddress();
        } else {
            other[0] = "Fail";
        }
        other[1] = getTimes();
        return other;
    }

    private String getTimes() {
        long ut = SystemClock.elapsedRealtime() / 1000;
        if (ut == 0) {
            ut = 1;
        }
        int m = (int) ((ut / 60) % 60);
        int h = (int) ((ut / 3600));
        return h + " " + "小时" + m + " "
                + "分钟";
    }


    public static long getTotalMemory() {
        String str1 = "/proc/meminfo";
        String str2;
        String[] arrayOfString;
        long initial_memory = 0;
        try {
            FileReader localFileReader = new FileReader(str1);
            BufferedReader localBufferedReader = new BufferedReader(localFileReader, 8192);
            str2 = localBufferedReader.readLine();
            if (str2 != null) {
                arrayOfString = str2.split("\\s+");
                initial_memory = Integer.valueOf(arrayOfString[1]).intValue() / 1024;
            }
            localBufferedReader.close();
            return initial_memory;
        } catch (IOException e) {
            return -1;
        }
    }

    public static String getIpAddress(Context mContext) {
        String ipAddress = null;
        try {
            for (Enumeration<NetworkInterface> en = NetworkInterface
                    .getNetworkInterfaces(); en.hasMoreElements(); ) {
                NetworkInterface intf = en.nextElement();
                for (Enumeration<InetAddress> enumIpAddr = intf
                        .getInetAddresses(); enumIpAddr.hasMoreElements(); ) {
                    InetAddress inetAddress = enumIpAddr.nextElement();
                    if (!inetAddress.isLoopbackAddress()) {
                        ipAddress = inetAddress.getHostAddress().toString();
                    }
                }
            }
        } catch (SocketException ex) {
            return null;
        }
        if (DEBUG) {
            Log.d(TAG, "ip address:" + ipAddress);
        }
        return ipAddress;
    }

    public long[] getRomMemroy() {
        long[] romInfo = new long[2];
        //Total rom memory
        romInfo[0] = getTotalInternalMemorySize();

        //Available rom memory
        File path = Environment.getDataDirectory();
        StatFs stat = new StatFs(path.getPath());
        long blockSize = stat.getBlockSize();
        long availableBlocks = stat.getAvailableBlocks();
        romInfo[1] = blockSize * availableBlocks;
//        getVersion();
        return romInfo;
    }

    public long getTotalInternalMemorySize() {
        File path = Environment.getDataDirectory();
        StatFs stat = new StatFs(path.getPath());
        long blockSize = stat.getBlockSize();
        long totalBlocks = stat.getBlockCount();
        return totalBlocks * blockSize;
    }

    public long[] getSDCardMemory() {
        long[] sdCardInfo = new long[2];
        String state = Environment.getExternalStorageState();
        if (Environment.MEDIA_MOUNTED.equals(state)) {
            File sdcardDir = Environment.getExternalStorageDirectory();
            StatFs sf = new StatFs(sdcardDir.getPath());
            long bSize = sf.getBlockSize();
            long bCount = sf.getBlockCount();
            long availBlocks = sf.getAvailableBlocks();

            sdCardInfo[0] = bSize * bCount;//总大小
            sdCardInfo[1] = bSize * availBlocks;//可用大小
        }
        return sdCardInfo;
    }


    public String[] getVersion() {
        String[] version = {"null", "null", "null", "null"};
        String str1 = "/proc/version";
        String str2;
        String[] arrayOfString;
        try {
            FileReader localFileReader = new FileReader(str1);
            BufferedReader localBufferedReader = new BufferedReader(
                    localFileReader, 8192);
            str2 = localBufferedReader.readLine();
            arrayOfString = str2.split("\\s+");
            version[0] = arrayOfString[2];//KernelVersion
            localBufferedReader.close();
        } catch (IOException e) {
        }
        version[1] = Build.VERSION.RELEASE;// firmware version
        version[2] = Build.MODEL;//model
        version[3] = Build.DISPLAY;//system version
        return version;
    }


}
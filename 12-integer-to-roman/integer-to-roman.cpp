class Solution {
public:
string roman(int ele){
    if(ele==1){
        string s1="I";
        //s1.push_back("I");
        return s1;
    }else if(ele==2){
        string s1="II";
        //s1.push_back(II);
        return s1;
    }else if(ele==3){
        string s1="III";
        //s1.push_back(III);
        return s1;
    }else if(ele==4){
        string s1="IV";
       // s1.push_back(IV);
        return s1;
    }else if(ele==5){
        string s1="V";
        //s1.push_back(V);
        return s1;
    }else if(ele==6){
        string s1="VI";
        //s1.push_back(VI);
        return s1;
    }else if(ele==7){
        string s1="VII";
       // s1.push_back(VII);
        return s1;
    }else if(ele==8){
        string s1="VIII";
        //s1.push_back(VIII);
        return s1;
    }else if(ele==9){
        string s1="IX";
       // s1.push_back(IX);
        return s1;
    }else if(ele==10){
        string s1="X";
        //s1.push_back(X);
        return s1;
    }else if(ele==20){
        string s1="XX";
        //s1.push_back(XX);
        return s1;
    }else if(ele==30){
        string s1="XXX";
        //s1.push_back(XXX);
        return s1;
    }else if(ele==40){
        string s1="XL";
       // s1.push_back(XL);
        return s1;
    }else if(ele==50){
        string s1="L";
        //s1.push_back(L);
        return s1;
    }else if(ele==60){
        string s1="LX";
        //s1.push_back(LX);
        return s1;
    }else if(ele==70){
        string s1="LXX";
        //s1.push_back(LXX);
        return s1;
    }else if(ele==80){
        string s1="LXXX";
        //s1.push_back(LXXX);
        return s1;
    }else if(ele==90){
        string s1="XC";
       // s1.push_back(XC);
        return s1;
    }else if(ele==100){
        string s1="C";
        //s1.push_back(C);
        return s1;
    }else if(ele==200){
        string s1="CC";
      //  s1.push_back(CC);
        return s1;
    }else if(ele==300){
        string s1="CCC";
        //s1.push_back(CCC);
        return s1;
    }else if(ele==400){
        string s1="CD";
        //s1.push_back(CD);
        return s1;
    }else if(ele==500){
        string s1="D";
        //s1.push_back(D);
        return s1;
    }else if(ele==600){
        string s1="DC";
        //s1.push_back(DC);
        return s1;
    }else if(ele==700){
        string s1="DCC";
        //s1.push_back(DCC);
        return s1;
    }else if(ele==800){
        string s1="DCCC";
        //s1.push_back(DCCC);
        return s1;
    }else if(ele==900){
        string s1="CM";
        //s1.push_back(CM);
        return s1;
    }else if(ele==1000){
        string s1="M";
       // s1.push_back(M);
        return s1;
    }else if(ele==2000){
        string s1="MM";
        //s1.push_back(MM);
        return s1;
    }else if(ele==3000){
        string s1="MMM";
        //s1.push_back(MMM)
        return s1;
    }
    string s1;
    return s1;
}
    string intToRoman(int num) {
        string ans;
        ans=roman((num/1000)*1000)+roman(((num%1000)/100)*100)+roman(((num%100)/10)*10)+roman(num%10);
        return ans;
    }
};
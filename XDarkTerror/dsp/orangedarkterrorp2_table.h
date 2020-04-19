
// orangedarkterrorp2_table generated by DK/circ_table_gen.py -- do not modify manually

 // variables used
 // --sig_max  0.250000
 // --table_div  322.948086
 // --table_op  0.001000

struct tableorangedarkterrorp2 { // 1-dimensional function table
    float low;
    float high;
    float istep;
    int size;
    float data[];
};

template <int tab_size>
struct tableorangedarkterrorp2_imp {
    float low;
    float high;
    float istep;
    int size;
    float data[tab_size];
    operator tableorangedarkterrorp2&() const { return *(tableorangedarkterrorp2*)this; }
};

 static tableorangedarkterrorp2_imp<200> orangedarkterrorp2_table __rt_data = {
	0,0.255684,0.796,200, {
	0.000000000000,0.001406860384,0.003883927183,0.006097574727,0.008359087936,
	0.010595797149,0.012824707892,0.015041868094,0.017248226621,0.019443585510,
	0.021628015293,0.023801523560,0.025964132618,0.028115861275,0.030256729113,
	0.032386755474,0.034505959698,0.036614361060,0.038711978781,0.040798832021,
	0.042874939876,0.044940321373,0.046994995469,0.049038981045,0.051072296906,
	0.053094961776,0.055106994292,0.057108413006,0.059099236381,0.061079482784,
	0.063049170487,0.065008317664,0.066956942388,0.068895062625,0.070822696238,
	0.072739860980,0.074646574489,0.076542854294,0.078428717804,0.080304182313,
	0.082169264990,0.084023982885,0.085868352922,0.087702391898,0.089526116482,
	0.091339543212,0.093142688493,0.094935568598,0.096718199663,0.098490597688,
	0.100252778534,0.102004757920,0.103746551428,0.105478174492,0.107199642407,
	0.108910970319,0.110612173231,0.112303265998,0.113984263325,0.115655179771,
	0.117316029744,0.118966827501,0.120607587150,0.122238322647,0.123859047794,
	0.125469776244,0.127070521497,0.128661296898,0.130242115641,0.131812990770,
	0.133373935171,0.134924961582,0.136466082588,0.137997310623,0.139518657969,
	0.141030136759,0.142531758975,0.144023536452,0.145505480878,0.146977603793,
	0.148439916593,0.149892430531,0.151335156717,0.152768106120,0.154191289574,
	0.155604717774,0.157008401280,0.158402350522,0.159786575801,0.161161087290,
	0.162525895038,0.163881008976,0.165226438914,0.166562194551,0.167888285472,
	0.169204721160,0.170511510991,0.171808664246,0.173096190111,0.174374097682,
	0.175642395973,0.176901093917,0.178150200374,0.179389724138,0.180619673939,
	0.181840058452,0.183050886305,0.184252166080,0.185443906326,0.186626115566,
	0.187798802299,0.188961975015,0.190115642198,0.191259812340,0.192394493943,
	0.193519695535,0.194635425675,0.195741692966,0.196838506064,0.197925873688,
	0.199003804632,0.200072307777,0.201131392103,0.202181066699,0.203221340776,
	0.204252223684,0.205273724920,0.206285854145,0.207288621198,0.208282036106,
	0.209266109109,0.210240850664,0.211206271468,0.212162382471,0.213109194896,
	0.214046720250,0.214974970348,0.215893957325,0.216803693659,0.217704192185,
	0.218595466116,0.219477529063,0.220350395053,0.221214078550,0.222068594474,
	0.222913958220,0.223750185683,0.224577293276,0.225395297951,0.226204217221,
	0.227004069181,0.227794872533,0.228576646603,0.229349411367,0.230113187469,
	0.230867996249,0.231613859759,0.232350800788,0.233078842886,0.233798010383,
	0.234508328412,0.235209822928,0.235902520736,0.236586449505,0.237261637792,
	0.237928115063,0.238585911712,0.239235059080,0.239875589476,0.240507536191,
	0.241130933523,0.241745816785,0.242352222330,0.242950187559,0.243539750941,
	0.244120952024,0.244693831447,0.245258430954,0.245814793402,0.246362962771,
	0.246902984175,0.247434903862,0.247958769227,0.248474628811,0.248982532306,
	0.249482530555,0.249974675552,0.250459020440,0.250935619510,0.251404528191,
	0.251865803048,0.252319501771,0.252765683165,0.253204407140,0.253635734696,
	0.254059727909,0.254476449912,0.254885964880,0.255288338004,0.255683635478
	}
};

double always_inline orangedarkterrorp2clip(double x) {
    double f = fabs(x);
    f = f * orangedarkterrorp2_table.istep;
    int i = static_cast<int>(f);
    if (i < 0) {
        f = orangedarkterrorp2_table.data[0];
    } else if (i >= orangedarkterrorp2_table.size-1) {
        f = orangedarkterrorp2_table.data[orangedarkterrorp2_table.size-1];
    } else {
    f -= i;
    f = orangedarkterrorp2_table.data[i]*(1-f) + orangedarkterrorp2_table.data[i+1]*f;
    }
    return copysign(f, x);
}

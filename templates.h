#ifndef  _TEMPLATES_H_
#define _TEMPLATES_H_

struct TemplateInfo {
  unsigned primaryHeight;
  unsigned collapsedHeight;
  unsigned bufferWidth;
  const float * const data;

  unsigned height() const {
    return primaryHeight + collapsedHeight;
  }
  unsigned size() const {
    return height() * bufferWidth;
  }
};

static const float kPopTemplateData[] = {
  0.0191129, 0.0849553, 0.696577, 0.555389, 0.0597224, 0.00661981, 0.110581, 0.191921, 0.0415058, 0.000227415, 0.0125234, 0.0329258, 0.0296764, 0.0118427, 0.0055405, 0.000852906, 0.0073797, 0.00740374, 0.0127574, 0.0108892, 0.00829668, 0.00553344, 0.000971251, 0.00194751, 7.19714e-05, 0.0748687,
  0.000660686, 0.00245933, 0.384484, 0.646369, 0.0550854, 0.0223247, 0.117493, 0.22867, 0.0542119, 0.0012178, 0.021197, 0.0418844, 0.0166724, 0.00968393, 0.00764526, 0.0108949, 0.0106061, 0.000157353, 0.00409836, 0.00636247, 0.00523674, 0.00659233, 0.00364784, 0.00136585, 0.000920028, 0.0725054,
  0.127703, 0.0984204, 0.614167, 0.324529, 0.136924, 0.0625188, 0.0296193, 0.143198, 0.041922, 0.00247474, 0.0332035, 0.020859, 0.000965256, 0.00312083, 0.00499522, 0.0126394, 0.0049569, 0.00223363, 0.000313428, 0.000332973, 3.85383e-06, 0.00117687, 0.00267189, 0.000744377, 0.000910168, 0.0733675,
  0.418366, 0.702891, 0.855151, 0.315765, 0.205886, 0.214926, 0.066551, 0.018872, 0.0208446, 0.0249306, 0.0174984, 0.0126217, 0.00183848, 0.00408848, 0.00931809, 0.00210252, 0.000390517, 1.37315e-05, 0.00166179, 0.000668174, 0.000133994, 0.000451313, 0.0053046, 0.00521274, 0.00163421, 0.0663853,
  0.00275724, 0.409827, 0.217258, 0.162927, 0.420921, 0.166566, 0.00260348, 0.00826217, 0.011185, 0.020185, 0.00772635, 0.00769312, 0.00932791, 0.00597232, 0.00249005, 0.000349706, 0.00125812, 0.00400798, 0.00737514, 0.00346694, 0.00130211, 0.00296221, 0.0038186, 0.00327766, 0.000303057, 0.0683983,
  0.0143225, 0.471043, 0.357004, 0.0283273, 0.25804, 0.220564, 0.0118426, 0.0156143, 0.0405337, 0.00748058, 0.0310413, 0.00814591, 0.00671687, 0.00316051, 8.66133e-05, 0.000320539, 0.0015734, 0.00495357, 0.00676911, 0.00531699, 0.0040183, 0.002725, 0.000516571, 0.0028558, 0.000232303, 0.0842727,
  0.204536, 0.837738, 1.11233, 0.488152, 0.446594, 0.135654, 0.0483441, 0.100714, 0.0493603, 0.0645244, 0.054873, 0.00517066, 0.00231247, 0.00464235, 0.000642079, 0.0013622, 0.000939467, 0.000968497, 0.000596421, 0.000842678, 0.000102575, 0.00152182, 0.00366264, 0.00569657, 0.00268979, 0.0864212,
  0.0543278, 0.697014, 0.842053, 0.0239293, 0.217501, 0.207093, 0.162498, 0.169385, 0.0106365, 0.0493334, 0.0574372, 0.00543115, 0.00123051, 0.00791828, 0.0101627, 0.00573569, 0.00175867, 0.000750863, 0.000640384, 0.000578317, 0.00128557, 0.000853926, 0.0010905, 0.00403776, 0.00218172, 0.0822592,
  0.00183753, 0.443722, 0.552805, 0.0802112, 0.00321386, 0.133625, 0.130399, 0.144191, 0.0359114, 0.0126925, 0.0337343, 0.00533073, 0.00125415, 0.00254797, 0.00969701, 0.00533692, 0.000264996, 0.000249628, 0.000598168, 6.10974e-05, 0.00146749, 0.00261392, 0.00236657, 0.000376184, 0.00063692, 0.078837,
  0.0385774, 0.585606, 0.555335, 0.0244642, 0.143631, 0.180909, 0.0195655, 0.037671, 0.0701987, 0.022078, 0.00237478, 0.0110871, 0.00356138, 0.00114546, 0.0031143, 0.00674985, 0.0048127, 0.00188849, 0.000193599, 0.00131226, 0.00118242, 0.000402375, 0.00129741, 0.000426552, 0.000152493, 0.0878725,
  0.38228, 0.67179, 0.469825, 0.104369, 0.240247, 0.394568, 0.0971705, 0.0113126, 0.0727507, 0.0473524, 0.0127676, 0.00329959, 0.00256131, 0.00300276, 0.000437308, 0.0041872, 0.00836307, 0.00253649, 0.000615811, 0.00202889, 0.00107011, 6.29715e-05, 0.000348746, 0.000676516, 0.000140508, 0.0952881,
  0.0740132, 0.505235, 0.0406751, 0.0339, 0.135535, 0.407717, 0.0469519, 0.040997, 0.0313288, 0.0151185, 0.0178083, 0.00965962, 0.00701021, 0.00220289, 0.00618077, 0.00326766, 0.00173258, 0.00165787, 7.4766e-07, 0.00164503, 0.00251586, 0.000280754, 0.000311903, 0.000812537, 0.000555085, 0.0826954,
  0.223549, 0.255545, 0.471161, 1.89766, 3.02647, 6.10852, 9.5055, 6.707, 3.8697, 1.77992, 0.586269, 0.216379, 0.316323, 0.23564, 0.0906524, 0.061112, 0.0549371, 0.0352494, 0.0219278, 0.0155308, 0.0307955, 0.0221401, 0.0163066, 0.0074272, 0.00950185, 0.199109,
  0.00463641, 0.0877398, 0.150309, 4.19084, 16.9073, 51.6741, 119.83, 124.432, 41.2541, 0.41268, 4.52206, 0.836968, 0.563031, 0.420927, 0.222915, 0.213794, 0.0793025, 0.0420821, 0.0749177, 0.0485167, 0.0454554, 0.0615058, 0.0412694, 0.0152816, 0.0171585, 0.387047,
  0.051213, 0.0221183, 1.04304, 1.84206, 8.19844, 27.9867, 100.513, 221.207, 218.009, 119.487, 66.4291, 12.6871, 1.9066, 0.0581073, 0.0416042, 0.0838998, 0.0264779, 0.00494107, 0.0364871, 0.00815119, 0.0036456, 0.0162786, 0.0160624, 0.000195092, 0.00419613, 0.202881,
  0.663007, 0.86515, 1.8103, 0.812177, 1.94705, 0.311743, 9.39525, 48.3818, 76.1541, 247.011, 329.18, 94.7215, 4.61845, 0.291667, 0.0473556, 0.00812159, 0.010122, 0.00152493, 0.00750832, 0.00488184, 0.000918844, 0.00132425, 0.000588614, 0.00398843, 0.000302112, 0.146372,
  0.346657, 1.04589, 0.933871, 0.314882, 0.707231, 1.54422, 0.389984, 4.87735, 1.03059, 61.9277, 358.876, 290.919, 29.7395, 1.40116, 0.0276383, 0.00970884, 0.00209256, 0.00139731, 0.00136129, 0.000220489, 0.00232818, 0.00194276, 0.00179805, 0.00303706, 0.00375852, 0.0953346,
  0.147435, 0.232357, 0.0434049, 0.0206702, 0.19478, 0.382914, 0.62675, 1.28074, 3.14245, 11.0459, 84.916, 309.949, 105.215, 3.1756, 0.0290054, 0.00394408, 0.00360063, 0.000651031, 0.00244202, 0.00451446, 0.00103802, 0.00108543, 0.00275073, 8.02e-05, 0.00160851, 0.0758169,
  0.0656277, 0.11461, 0.000111763, 0.0581073, 0.0517412, 0.13187, 0.340081, 0.437802, 0.281172, 0.135495, 20.5122, 130.921, 116.024, 9.3686, 0.116172, 0.00448325, 0.0034885, 0.00231306, 0.00446781, 0.00388341, 0.00127263, 0.00218279, 0.00151869, 0.000582127, 0.000670252, 0.0694872,
  0.000972386, 0.172848, 0.467328, 0.373855, 0.114499, 0.188901, 0.218241, 0.309081, 0.235778, 0.34172, 5.91209, 19.1808, 43.5669, 12.0236, 0.00727105, 0.0130824, 0.00340247, 0.000986463, 0.00210081, 0.00211633, 0.000618016, 0.00582479, 0.00238023, 0.00130634, 0.000253642, 0.0783208,
  0.0285892, 0.50056, 1.99335, 1.37151, 0.0821997, 0.117377, 0.0234041, 0.0411134, 0.0798652, 0.189233, 0.093687, 0.585245, 7.85101, 5.79907, 0.27885, 9.68793e-05, 0.00882803, 0.000645304, 0.000345714, 0.000865779, 0.00100093, 0.00546103, 0.00658987, 0.00375595, 0.00124341, 0.077011,
  0.325452, 1.33821, 1.51893, 0.864009, 0.367796, 0.273129, 0.378364, 0.309414, 0.291594, 0.350705, 0.322946, 0.646143, 1.71943, 1.15984, 0.175843, 0.00103078, 0.00256299, 0.00277221, 0.00122974, 0.000490088, 0.00310283, 0.00317926, 0.00141091, 0.00517849, 0.000247925, 0.0697586,
  0.586022, 1.03005, 0.200478, 0.227035, 0.00499701, 0.189317, 0.0955978, 0.465961, 0.512971, 0.622175, 1.22311, 1.05695, 0.0717823, 0.125346, 0.0711667, 0.000292601, 0.000359412, 0.00404571, 0.00396699, 0.000628036, 0.00394943, 0.00538901, 0.0071647, 0.00371017, 0.000849322, 0.072339,
  0.00213169, 0.17084, 1.0302, 0.58506, 0.0762412, 0.0654838, 0.0598342, 0.162329, 0.102988, 0.170544, 0.366932, 0.471721, 0.106617, 0.0589236, 0.0291656, 0.000860014, 0.00122334, 0.00649758, 0.00610403, 0.00260554, 0.000674762, 0.000893609, 0.0031356, 0.00361878, 0.00107746, 0.0712037,
  0.00179889, 0.0784132, 1.17852, 1.01422, 0.0661043, 0.0501274, 0.0451737, 0.0256207, 0.0638609, 0.218573, 0.180705, 0.336339, 0.179433, 0.0755548, 0.0277573, 0.000522846, 0.000184604, 0.0058132, 0.00456331, 0.00158359, 0.00296851, 0.0015632, 0.00346681, 0.00284552, 0.000389705, 0.0763225,
  0.00259231, 0.0719649, 1.20296, 0.77821, 0.0468493, 0.0152508, 0.0919146, 0.213, 0.149382, 0.36895, 0.731649, 0.421514, 0.0710768, 0.0809876, 0.0424409, 0.00215192, 0.000571556, 0.00353599, 0.00523008, 0.0100646, 0.00813343, 0.00142634, 0.00262944, 0.00349364, 0.00280261, 0.0720573,
  7.53717e-05, 0.0983166, 1.1834, 0.949965, 0.142662, 0.109367, 0.218744, 0.248542, 0.0688237, 0.489332, 0.252056, 0.0675629, 0.0783815, 0.053307, 0.00961112, 0.00905182, 0.00343821, 0.000572237, 0.000778625, 0.0046485, 0.00674246, 0.000873622, 0.00105565, 0.000917685, 0.00104157, 0.0784701,
  0.0481083, 0.268449, 0.551009, 0.69566, 0.224365, 0.00380839, 0.0682006, 0.141272, 0.172324, 0.249768, 0.0369785, 0.0404733, 0.0876891, 0.0671347, 0.0134987, 0.00737466, 7.33114e-05, 0.00221617, 0.00021515, 0.000965002, 0.00207282, 0.00144592, 0.00124623, 0.00404515, 0.00306186, 0.07307,
  0.000340887, 0.573463, 0.16878, 0.399406, 0.111456, 0.0133607, 0.0471164, 0.0136419, 0.155666, 0.205215, 0.0876145, 0.114003, 0.00112098, 0.0473242, 0.0122951, 0.00692196, 0.0059285, 0.0029022, 0.000756767, 0.000206678, 0.000236743, 0.000448076, 0.00291146, 0.00649379, 0.00272863, 0.0725056,
  0.283375, 1.15838, 1.71947, 0.368864, 0.0196299, 0.0718832, 0.122119, 0.120344, 0.0275507, 0.078714, 0.352867, 0.139146, 0.0354025, 0.0372197, 0.005637, 0.00358448, 0.006991, 0.00111455, 0.000123971, 0.000666957, 0.00072968, 0.000220441, 0.0010633, 0.00238875, 0.000732227, 0.0741116,
  0.0624829, 1.24863, 2.48405, 0.479985, 0.0299211, 0.0732457, 0.092099, 0.0521578, 0.016418, 0.094576, 0.220363, 0.125467, 0.028765, 0.0485287, 0.00109435, 0.00428027, 0.00276476, 0.000122882, 0.000969002, 0.00247824, 0.000336101, 0.000402157, 9.86409e-06, 0.000742446, 0.000685375, 0.0777284,
  0.0732111, 0.503131, 1.18458, 0.879726, 0.312522, 0.144949, 0.00485724, 0.0212416, 0.00765404, 0.0118308, 0.0236262, 0.0670203, 0.0913649, 0.0478185, 0.00267149, 0.00201059, 0.00149663, 5.46461e-05, 0.00162508, 0.00547185, 0.00345871, 0.00168227, 0.000336762, 0.000577838, 0.00200701, 0.0688533,
  0.0356173, 0.0698745, 0.0818077, 0.248238, 0.105478, 0.283464, 0.00316107, 0.0805567, 0.0815246, 0.0637781, 0.0573237, 0.0206956, 0.0567493, 0.0261292, 0.00226539, 0.00137461, 0.0010557, 8.08852e-05, 0.00113191, 0.00398882, 0.00485558, 0.000742371, 0.00330296, 0.00405923, 0.000249342, 0.0673157,
  0.0105083, 0.0503443, 0.28248, 0.358608, 0.268173, 0.451557, 0.310833, 0.144653, 0.110595, 0.185248, 0.216206, 0.215857, 0.0965255, 0.00374863, 2.1314e-05, 0.000757165, 0.00171041, 0.000374349, 0.000173384, 0.000707965, 0.00490308, 0.00278341, 0.00442454, 0.00451153, 0.00390699, 0.0668993,
  0.379502, 0.481155, 0.49594, 0.364635, 0.0162045, 0.475965, 0.16218, 0.0778406, 0.0305263, 0.133143, 0.0155831, 0.28193, 0.0789461, 0.000528877, 0.000166578, 0.000264496, 0.00211728, 0.00212139, 0.00113467, 0.00206588, 0.00409976, 0.00202916, 0.00149437, 0.000201012, 0.0023515, 0.0689791,
  0.140749, 0.559133, 0.043334, 0.144863, 0.409657, 0.490128, 0.0751748, 0.0436736, 0.0460163, 0.124808, 0.229767, 0.192725, 0.0221065, 0.00435657, 0.000998547, 0.000282671, 0.00153404, 0.00834982, 0.00617577, 0.000911301, 0.00459632, 0.00126492, 0.00113848, 0.00045111, 0.000275214, 0.0807811,
  0.122538, 0.45408, 0.604941, 0.100082, 0.291606, 0.599864, 0.0432149, 0.0438372, 0.0171633, 0.100027, 0.0813997, 0.078153, 0.0406356, 0.00638063, 0.000238027, 0.000641865, 0.00200539, 0.00600846, 0.00792347, 0.00354091, 0.00563269, 0.00605201, 0.000649635, 8.19007e-05, 0.000675989, 0.0782709,
  0.00957161, 0.422258, 0.591614, 0.290743, 0.224589, 0.359019, 0.227203, 0.100872, 0.0217938, 0.0384944, 0.0740123, 0.0850905, 0.0821993, 0.00508762, 0.0011811, 0.00330811, 0.000848516, 0.00345627, 0.000109849, 0.00240367, 0.00451824, 0.0113442, 0.00193617, 0.0019362, 0.00164947, 0.0802274,
  0.454203, 0.205591, 0.00855004, 0.101182, 0.0115308, 0.0854818, 0.0390035, 0.165474, 0.163449, 0.115696, 0.00784625, 0.080473, 0.121061, 0.0212975, 0.000693329, 0.00566853, 0.0100199, 0.00348615, 0.000918227, 0.00680536, 0.020023, 0.0116236, 0.000449825, 0.00412976, 0.00424629, 0.100849,
  0.102682, 0.0758042, 0.0383571, 0.0307196, 0.030738, 0.0175569, 0.0118169, 0.0472498, 0.0913274, 0.0775363, 0.0433966, 0.0505921, 0.0518378, 0.0206554, 0.00242278, 0.00552681, 0.00730467, 0.00283144, 0.000797274, 0.0060451, 0.0104168, 0.00650445, 0.00209326, 0.0023906, 0.00218634, 0.0452864
};

static const float kBlow1Data[] = {
  56.1254, 35.3722, 4.86762, 0.491146, 0.260722, 0.255613, 0.304607, 4.40024, 11.1625, 2.53885, 0.15266,
  0.0512593, 0.0288586, 0.0133649, 0.00944287, 0.00731974, 0.00443786, 0.00372553, 0.00304816, 0.00288616,
  0.0027128, 0.00317993, 0.00382493, 0.00266549, 0.00222529, 0.00149426, 0.000909013, 0.000998614, 0.0011227,
  0.00124362, 0.00159975, 0.00235739, 0.00159632, 0.00129633, 0.00121195, 0.00119174, 0.00171874, 0.00122128,
  0.00137068, 0.00194259, 0.00211292, 0.0021032, 0.00281399, 0.00607592, 0.010298, 0.00714452, 0.00196005,
  0.000698505, 0.000624364, 0.000690933, 0.000666667, 0.00102296, 0.00100187, 0.000843247, 0.00129825,
  0.0017538, 0.00113362, 0.000643397, 0.000719214, 0.000881864, 0.00110143, 0.0010638, 0.00117795, 0.00102377,
  0.000710938, 0.000477636, 0.000480175, 0.000408493, 0.000646905, 0.000935147, 0.000741621, 0.000516401,
  0.000602335, 0.000644321, 0.000903274, 0.00144524, 0.00353056, 0.00903455, 0.0139866, 0.0116856, 0.00898569,
  0.00603968, 0.0106203, 0.0137731, 0.0103311, 0.00862067, 0.00388089, 0.00249742, 0.00159755, 0.00123345,
  0.00105014, 0.000809453, 0.00123706, 0.00115668, 0.000983917, 0.00126822, 0.00180911, 0.00106065, 0.00103249,
  0.000694695, 0.0618592
};

static const int kNumTemplates = 2;
static const TemplateInfo kTemplates[] = {
  {
    .primaryHeight = 100,
    .collapsedHeight = 1,
    .bufferWidth = 1,
    .data = kBlow1Data
  },
  {
    .primaryHeight = 25,
    .collapsedHeight = 1,
    .bufferWidth = 40,
    .data = kPopTemplateData
  },
};

#endif

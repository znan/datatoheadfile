#include "IFFT_mode.h"

#if III64==srand_IFFT_CHOICE
float srand_III_64[64]={
		0.353368,
		0.445500,
		0.408488,
		0.739742,
		0.443509,
		0.211578,
		0.735239,
		0.534646,
		0.339638,
		0.107514,
		0.583684,
		0.059581,
		0.511984,
		0.163776,
		0.671249,
		0.393697,
		0.262399,
		0.405919,
		0.065558,
		0.327567,
		0.305239,
		0.688765,
		0.911697,
		0.577992,
		0.838606,
		0.031939,
		0.921102,
		0.250198,
		0.570943,
		0.536008,
		0.100485,
		0.105000,
		0.895739,
		0.748843,
		0.129930,
		0.079753,
		0.460296,
		0.846977,
		0.843377,
		0.580556,
		0.507235,
		0.717644,
		0.520866,
		0.607365,
		0.004550,
		0.061130,
		0.110870,
		0.563819,
		0.852466,
		0.769008,
		0.443186,
		0.423800,
		0.197235,
		0.922196,
		0.575628,
		0.560602,
		0.535740,
		0.532549,
		0.291468,
		0.797974,
		0.046857,
		0.335491,
		0.149060,
		0.316710,
};
#endif

#if III256==srand_IFFT_CHOICE
float srand_III_256[256]={
		0.353368,
		0.445500,
		0.408488,
		0.739742,
		0.443509,
		0.211578,
		0.735239,
		0.534646,
		0.339638,
		0.107514,
		0.583684,
		0.059581,
		0.511984,
		0.163776,
		0.671249,
		0.393697,
		0.262399,
		0.405919,
		0.065558,
		0.327567,
		0.305239,
		0.688765,
		0.911697,
		0.577992,
		0.838606,
		0.031939,
		0.921102,
		0.250198,
		0.570943,
		0.536008,
		0.100485,
		0.105000,
		0.895739,
		0.748843,
		0.129930,
		0.079753,
		0.460296,
		0.846977,
		0.843377,
		0.580556,
		0.507235,
		0.717644,
		0.520866,
		0.607365,
		0.004550,
		0.061130,
		0.110870,
		0.563819,
		0.852466,
		0.769008,
		0.443186,
		0.423800,
		0.197235,
		0.922196,
		0.575628,
		0.560602,
		0.535740,
		0.532549,
		0.291468,
		0.797974,
		0.046857,
		0.335491,
		0.149060,
		0.316710,
		0.249724,
		0.764472,
		0.914683,
		0.871989,
		0.946301,
		0.006346,
		0.692700,
		0.014051,
		0.546530,
		0.581575,
		0.282937,
		0.215859,
		0.956010,
		0.519354,
		0.029561,
		0.755484,
		0.965293,
		0.884686,
		0.537778,
		0.330740,
		0.370295,
		0.310528,
		0.246996,
		0.170063,
		0.377268,
		0.415134,
		0.342719,
		0.433491,
		0.703042,
		0.739848,
		0.964099,
		0.300091,
		0.163749,
		0.480089,
		0.872052,
		0.713122,
		0.842093,
		0.769850,
		0.645426,
		0.684539,
		0.040952,
		0.157843,
		0.681449,
		0.849483,
		0.937002,
		0.703351,
		0.297563,
		0.458404,
		0.834297,
		0.222782,
		0.455271,
		0.577477,
		0.522896,
		0.643652,
		0.822249,
		0.023892,
		0.066122,
		0.437650,
		0.759694,
		0.526444,
		0.338449,
		0.613461,
		0.993939,
		0.817581,
		0.906269,
		0.830724,
		0.771543,
		0.442933,
		0.496482,
		0.325946,
		0.728278,
		0.770421,
		0.605220,
		0.596183,
		0.373117,
		0.432748,
		0.200170,
		0.028791,
		0.692077,
		0.518228,
		0.054007,
		0.199865,
		0.514495,
		0.145414,
		0.504636,
		0.226808,
		0.119736,
		0.783884,
		0.704576,
		0.115913,
		0.992370,
		0.088278,
		0.265087,
		0.909582,
		0.513430,
		0.220854,
		0.502241,
		0.619920,
		0.002675,
		0.093061,
		0.729576,
		0.876023,
		0.584928,
		0.226016,
		0.031665,
		0.737405,
		0.895874,
		0.609277,
		0.466880,
		0.552115,
		0.051961,
		0.565934,
		0.764455,
		0.376119,
		0.028420,
		0.674251,
		0.636335,
		0.767721,
		0.960259,
		0.177161,
		0.106769,
		0.790338,
		0.651249,
		0.216459,
		0.140402,
		0.141405,
		0.056960,
		0.266728,
		0.026444,
		0.370391,
		0.782879,
		0.297371,
		0.820369,
		0.162422,
		0.304752,
		0.078167,
		0.894754,
		0.895519,
		0.881391,
		0.448934,
		0.225451,
		0.458090,
		0.903817,
		0.158907,
		0.800983,
		0.073676,
		0.356216,
		0.728852,
		0.466744,
		0.318864,
		0.169655,
		0.102602,
		0.808048,
		0.579940,
		0.213076,
		0.300957,
		0.483512,
		0.537581,
		0.454851,
		0.602961,
		0.282587,
		0.948744,
		0.455453,
		0.930108,
		0.843483,
		0.358706,
		0.673449,
		0.599490,
		0.128786,
		0.623674,
		0.774545,
		0.662435,
		0.071501,
		0.273516,
		0.629935,
		0.260619,
		0.435345,
		0.430394,
		0.016341,
		0.207502,
		0.618374,
		0.866349,
		0.746629,
		0.836338,
		0.147625,
		0.208825,
		0.894896,
		0.314321,
		0.412297,
		0.648130,
		0.310425,
		0.029652,
};
#endif

#if III1024==srand_IFFT_CHOICE
float srand_III_1024[1024]={
		0.353368,
		0.445500,
		0.408488,
		0.739742,
		0.443509,
		0.211578,
		0.735239,
		0.534646,
		0.339638,
		0.107514,
		0.583684,
		0.059581,
		0.511984,
		0.163776,
		0.671249,
		0.393697,
		0.262399,
		0.405919,
		0.065558,
		0.327567,
		0.305239,
		0.688765,
		0.911697,
		0.577992,
		0.838606,
		0.031939,
		0.921102,
		0.250198,
		0.570943,
		0.536008,
		0.100485,
		0.105000,
		0.895739,
		0.748843,
		0.129930,
		0.079753,
		0.460296,
		0.846977,
		0.843377,
		0.580556,
		0.507235,
		0.717644,
		0.520866,
		0.607365,
		0.004550,
		0.061130,
		0.110870,
		0.563819,
		0.852466,
		0.769008,
		0.443186,
		0.423800,
		0.197235,
		0.922196,
		0.575628,
		0.560602,
		0.535740,
		0.532549,
		0.291468,
		0.797974,
		0.046857,
		0.335491,
		0.149060,
		0.316710,
		0.249724,
		0.764472,
		0.914683,
		0.871989,
		0.946301,
		0.006346,
		0.692700,
		0.014051,
		0.546530,
		0.581575,
		0.282937,
		0.215859,
		0.956010,
		0.519354,
		0.029561,
		0.755484,
		0.965293,
		0.884686,
		0.537778,
		0.330740,
		0.370295,
		0.310528,
		0.246996,
		0.170063,
		0.377268,
		0.415134,
		0.342719,
		0.433491,
		0.703042,
		0.739848,
		0.964099,
		0.300091,
		0.163749,
		0.480089,
		0.872052,
		0.713122,
		0.842093,
		0.769850,
		0.645426,
		0.684539,
		0.040952,
		0.157843,
		0.681449,
		0.849483,
		0.937002,
		0.703351,
		0.297563,
		0.458404,
		0.834297,
		0.222782,
		0.455271,
		0.577477,
		0.522896,
		0.643652,
		0.822249,
		0.023892,
		0.066122,
		0.437650,
		0.759694,
		0.526444,
		0.338449,
		0.613461,
		0.993939,
		0.817581,
		0.906269,
		0.830724,
		0.771543,
		0.442933,
		0.496482,
		0.325946,
		0.728278,
		0.770421,
		0.605220,
		0.596183,
		0.373117,
		0.432748,
		0.200170,
		0.028791,
		0.692077,
		0.518228,
		0.054007,
		0.199865,
		0.514495,
		0.145414,
		0.504636,
		0.226808,
		0.119736,
		0.783884,
		0.704576,
		0.115913,
		0.992370,
		0.088278,
		0.265087,
		0.909582,
		0.513430,
		0.220854,
		0.502241,
		0.619920,
		0.002675,
		0.093061,
		0.729576,
		0.876023,
		0.584928,
		0.226016,
		0.031665,
		0.737405,
		0.895874,
		0.609277,
		0.466880,
		0.552115,
		0.051961,
		0.565934,
		0.764455,
		0.376119,
		0.028420,
		0.674251,
		0.636335,
		0.767721,
		0.960259,
		0.177161,
		0.106769,
		0.790338,
		0.651249,
		0.216459,
		0.140402,
		0.141405,
		0.056960,
		0.266728,
		0.026444,
		0.370391,
		0.782879,
		0.297371,
		0.820369,
		0.162422,
		0.304752,
		0.078167,
		0.894754,
		0.895519,
		0.881391,
		0.448934,
		0.225451,
		0.458090,
		0.903817,
		0.158907,
		0.800983,
		0.073676,
		0.356216,
		0.728852,
		0.466744,
		0.318864,
		0.169655,
		0.102602,
		0.808048,
		0.579940,
		0.213076,
		0.300957,
		0.483512,
		0.537581,
		0.454851,
		0.602961,
		0.282587,
		0.948744,
		0.455453,
		0.930108,
		0.843483,
		0.358706,
		0.673449,
		0.599490,
		0.128786,
		0.623674,
		0.774545,
		0.662435,
		0.071501,
		0.273516,
		0.629935,
		0.260619,
		0.435345,
		0.430394,
		0.016341,
		0.207502,
		0.618374,
		0.866349,
		0.746629,
		0.836338,
		0.147625,
		0.208825,
		0.894896,
		0.314321,
		0.412297,
		0.648130,
		0.310425,
		0.029652,
		0.088335,
		0.426426,
		0.778920,
		0.610391,
		0.238054,
		0.509910,
		0.207716,
		0.418260,
		0.498440,
		0.620326,
		0.321242,
		0.726702,
		0.730010,
		0.572360,
		0.042096,
		0.487177,
		0.808346,
		0.512621,
		0.014625,
		0.946907,
		0.678357,
		0.918657,
		0.545704,
		0.576169,
		0.448039,
		0.392989,
		0.344105,
		0.343838,
		0.483547,
		0.716613,
		0.843288,
		0.478069,
		0.550316,
		0.993775,
		0.952303,
		0.235180,
		0.256479,
		0.806353,
		0.363492,
		0.927954,
		0.262011,
		0.893304,
		0.345427,
		0.949059,
		0.317252,
		0.050108,
		0.678655,
		0.377307,
		0.819733,
		0.298118,
		0.286578,
		0.349927,
		0.382114,
		0.072091,
		0.653613,
		0.758520,
		0.369135,
		0.614773,
		0.038012,
		0.957981,
		0.302255,
		0.938283,
		0.607554,
		0.703507,
		0.224585,
		0.894197,
		0.794496,
		0.976902,
		0.525035,
		0.618833,
		0.158377,
		0.247497,
		0.783084,
		0.336389,
		0.050622,
		0.907449,
		0.758257,
		0.540084,
		0.627379,
		0.287651,
		0.938565,
		0.996642,
		0.812537,
		0.499569,
		0.249899,
		0.110945,
		0.865270,
		0.323120,
		0.933888,
		0.232577,
		0.699913,
		0.522287,
		0.821326,
		0.139567,
		0.816942,
		0.762489,
		0.473373,
		0.144186,
		0.910847,
		0.024344,
		0.630347,
		0.373863,
		0.464371,
		0.045824,
		0.869983,
		0.618584,
		0.552158,
		0.256280,
		0.989215,
		0.842251,
		0.787310,
		0.591040,
		0.581092,
		0.989734,
		0.366088,
		0.902759,
		0.860168,
		0.026061,
		0.177575,
		0.924473,
		0.904246,
		0.671382,
		0.457211,
		0.794938,
		0.524350,
		0.301665,
		0.185248,
		0.535283,
		0.564903,
		0.896793,
		0.596864,
		0.593325,
		0.974100,
		0.028147,
		0.019351,
		0.764768,
		0.832099,
		0.994964,
		0.567836,
		0.853422,
		0.267602,
		0.399508,
		0.957843,
		0.220558,
		0.777979,
		0.331313,
		0.697756,
		0.110913,
		0.366915,
		0.517269,
		0.078992,
		0.649336,
		0.234090,
		0.059063,
		0.202958,
		0.209936,
		0.159807,
		0.640934,
		0.190420,
		0.901048,
		0.927670,
		0.674711,
		0.438406,
		0.453692,
		0.340549,
		0.483762,
		0.586928,
		0.512913,
		0.730520,
		0.598977,
		0.924225,
		0.262548,
		0.048462,
		0.298342,
		0.775424,
		0.994340,
		0.073449,
		0.900327,
		0.868304,
		0.292676,
		0.505313,
		0.506083,
		0.406227,
		0.946350,
		0.977239,
		0.854983,
		0.739564,
		0.014714,
		0.519943,
		0.752773,
		0.536437,
		0.552637,
		0.968139,
		0.483576,
		0.826054,
		0.706415,
		0.988481,
		0.526687,
		0.013010,
		0.055224,
		0.474989,
		0.620017,
		0.517115,
		0.600180,
		0.690963,
		0.401715,
		0.429872,
		0.982686,
		0.046008,
		0.254907,
		0.097295,
		0.679571,
		0.809313,
		0.272624,
		0.562151,
		0.400943,
		0.915019,
		0.088537,
		0.842379,
		0.026818,
		0.077159,
		0.641166,
		0.387610,
		0.828630,
		0.261656,
		0.031640,
		0.863841,
		0.272462,
		0.435414,
		0.861630,
		0.171109,
		0.541228,
		0.252086,
		0.529620,
		0.460161,
		0.475909,
		0.341295,
		0.717941,
		0.000847,
		0.891725,
		0.854975,
		0.953649,
		0.842689,
		0.654127,
		0.898393,
		0.672089,
		0.646160,
		0.056770,
		0.188876,
		0.096726,
		0.977876,
		0.241317,
		0.047733,
		0.714942,
		0.901644,
		0.975410,
		0.136132,
		0.517785,
		0.007662,
		0.277510,
		0.973213,
		0.074068,
		0.053949,
		0.812260,
		0.128948,
		0.588802,
		0.956605,
		0.865451,
		0.474491,
		0.841239,
		0.513623,
		0.464517,
		0.694223,
		0.148065,
		0.399931,
		0.032081,
		0.097444,
		0.574760,
		0.420843,
		0.184619,
		0.191129,
		0.659760,
		0.544092,
		0.960320,
		0.766433,
		0.635906,
		0.082929,
		0.205447,
		0.667203,
		0.618255,
		0.630185,
		0.661431,
		0.580873,
		0.470298,
		0.045774,
		0.239179,
		0.699014,
		0.046684,
		0.393538,
		0.110594,
		0.192511,
		0.518690,
		0.333511,
		0.224311,
		0.132897,
		0.828208,
		0.340060,
		0.810205,
		0.840533,
		0.345486,
		0.340878,
		0.936742,
		0.394838,
		0.297250,
		0.134870,
		0.204913,
		0.649165,
		0.859493,
		0.156380,
		0.885663,
		0.470279,
		0.102739,
		0.830006,
		0.865189,
		0.177470,
		0.901191,
		0.769767,
		0.856748,
		0.345574,
		0.189024,
		0.696156,
		0.634949,
		0.496685,
		0.944706,
		0.010107,
		0.204865,
		0.759529,
		0.175440,
		0.574364,
		0.276884,
		0.833704,
		0.308671,
		0.862984,
		0.182180,
		0.621347,
		0.080908,
		0.741733,
		0.112318,
		0.184256,
		0.249826,
		0.409121,
		0.074182,
		0.710755,
		0.683696,
		0.254094,
		0.261129,
		0.701583,
		0.660378,
		0.661253,
		0.026689,
		0.306754,
		0.686459,
		0.042738,
		0.211357,
		0.039072,
		0.551799,
		0.861309,
		0.416997,
		0.318369,
		0.399351,
		0.544330,
		0.806085,
		0.116280,
		0.386184,
		0.410422,
		0.339605,
		0.229862,
		0.519071,
		0.761635,
		0.478309,
		0.597818,
		0.510467,
		0.786668,
		0.876815,
		0.076076,
		0.341109,
		0.741801,
		0.413525,
		0.914607,
		0.364625,
		0.121367,
		0.589217,
		0.139774,
		0.471499,
		0.038343,
		0.327671,
		0.699346,
		0.875573,
		0.310776,
		0.591216,
		0.729816,
		0.007830,
		0.740752,
		0.141824,
		0.317809,
		0.409694,
		0.161245,
		0.296772,
		0.097608,
		0.283656,
		0.889019,
		0.690033,
		0.578006,
		0.949657,
		0.365706,
		0.319756,
		0.679807,
		0.285476,
		0.044913,
		0.557655,
		0.984462,
		0.681531,
		0.406617,
		0.080527,
		0.930082,
		0.974386,
		0.037969,
		0.427897,
		0.786045,
		0.316376,
		0.156499,
		0.586530,
		0.253356,
		0.479661,
		0.198295,
		0.130209,
		0.129032,
		0.707059,
		0.821100,
		0.318968,
		0.107518,
		0.418014,
		0.067776,
		0.925374,
		0.667006,
		0.930954,
		0.933299,
		0.524472,
		0.917177,
		0.594242,
		0.339780,
		0.101002,
		0.126537,
		0.161772,
		0.619077,
		0.689924,
		0.472633,
		0.802770,
		0.787484,
		0.225778,
		0.106909,
		0.320199,
		0.563371,
		0.188471,
		0.165048,
		0.889324,
		0.552603,
		0.639736,
		0.891751,
		0.291161,
		0.993660,
		0.046248,
		0.559834,
		0.802589,
		0.910842,
		0.068238,
		0.258229,
		0.530552,
		0.973667,
		0.433404,
		0.163011,
		0.758096,
		0.803026,
		0.083668,
		0.812761,
		0.943921,
		0.651788,
		0.435917,
		0.722469,
		0.510533,
		0.689498,
		0.447513,
		0.504139,
		0.977137,
		0.445762,
		0.005831,
		0.204165,
		0.837127,
		0.532364,
		0.301322,
		0.911232,
		0.434101,
		0.722742,
		0.876970,
		0.467453,
		0.944527,
		0.358893,
		0.479034,
		0.700924,
		0.099163,
		0.671788,
		0.679422,
		0.129475,
		0.321233,
		0.626923,
		0.365787,
		0.113181,
		0.637441,
		0.501553,
		0.176784,
		0.963313,
		0.353897,
		0.331815,
		0.650642,
		0.009571,
		0.939866,
		0.348943,
		0.269551,
		0.299513,
		0.205077,
		0.900147,
		0.110838,
		0.473640,
		0.093983,
		0.961353,
		0.616995,
		0.924603,
		0.063766,
		0.155391,
		0.001653,
		0.539869,
		0.121593,
		0.209180,
		0.048795,
		0.167035,
		0.112222,
		0.125903,
		0.579050,
		0.531506,
		0.383850,
		0.065826,
		0.378416,
		0.329279,
		0.803482,
		0.802532,
		0.395638,
		0.685376,
		0.300786,
		0.218805,
		0.052873,
		0.269959,
		0.474726,
		0.305133,
		0.345315,
		0.669932,
		0.176852,
		0.047924,
		0.065597,
		0.378577,
		0.853791,
		0.700531,
		0.787219,
		0.344830,
		0.954080,
		0.238129,
		0.814485,
		0.522136,
		0.752852,
		0.788298,
		0.131931,
		0.876229,
		0.329181,
		0.300862,
		0.288351,
		0.183848,
		0.794500,
		0.900486,
		0.691050,
		0.683387,
		0.079199,
		0.792498,
		0.501012,
		0.286582,
		0.862497,
		0.126740,
		0.252257,
		0.665851,
		0.437666,
		0.338359,
		0.392476,
		0.414497,
		0.994771,
		0.479968,
		0.966616,
		0.343836,
		0.362047,
		0.471167,
		0.472720,
		0.017651,
		0.768151,
		0.226219,
		0.511554,
		0.578268,
		0.588988,
		0.581744,
		0.672394,
		0.217982,
		0.169494,
		0.663553,
		0.480268,
		0.412530,
		0.962823,
		0.236564,
		0.736556,
		0.270017,
		0.045650,
		0.869875,
		0.017148,
		0.983923,
		0.218828,
		0.492611,
		0.430932,
		0.543278,
		0.929511,
		0.673857,
		0.523778,
		0.129403,
		0.875377,
		0.555258,
		0.548602,
		0.321252,
		0.556489,
		0.718080,
		0.790474,
		0.302420,
		0.787359,
		0.269890,
		0.615223,
		0.709731,
		0.386635,
		0.348811,
		0.054554,
		0.083565,
		0.402600,
		0.885029,
		0.957017,
		0.489092,
		0.910818,
		0.784337,
		0.467396,
		0.469339,
		0.748059,
		0.227302,
		0.485541,
		0.737286,
		0.926794,
		0.230231,
		0.083596,
		0.665856,
		0.226698,
		0.287807,
		0.946119,
		0.396866,
		0.113230,
		0.936907,
		0.402680,
		0.725356,
		0.495478,
		0.924113,
		0.067072,
		0.779239,
		0.294660,
		0.073288,
		0.720987,
		0.112776,
		0.583600,
		0.414151,
		0.611995,
		0.576968,
		0.541657,
		0.291032,
		0.488301,
		0.914888,
		0.496063,
		0.507895,
		0.155935,
		0.283638,
		0.183151,
		0.107353,
		0.590472,
		0.376541,
		0.651013,
		0.985347,
		0.960571,
		0.767592,
		0.089112,
		0.718626,
		0.609552,
		0.301354,
		0.624236,
		0.305457,
		0.065491,
		0.381686,
		0.371748,
		0.822163,
		0.163282,
		0.385122,
		0.501275,
		0.775457,
		0.600226,
		0.353044,
		0.412669,
		0.192571,
		0.857118,
		0.480471,
		0.108164,
		0.956713,
		0.868599,
		0.326065,
		0.891255,
		0.595518,
		0.425046,
		0.583511,
		0.491230,
		0.804864,
		0.664771,
		0.067452,
		0.998681,
		0.264035,
		0.693992,
		0.647093,
		0.400651,
		0.663570,
		0.042157,
		0.200600,
		0.079372,
		0.779501,
		0.597624,
		0.765449,
		0.203166,
		0.276349,
		0.921380,
		0.976142,
		0.598397,
		0.751437,
		0.437518,
		0.679550,
		0.307302,
		0.917634,
		0.450283,
		0.440898,
		0.477778,
		0.732389,
		0.173106,
		0.227409,
		0.165674,
		0.560947,
		0.067490,
};
#endif


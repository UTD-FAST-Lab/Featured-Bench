#include <stdio.h>
#include <stdlib.h>

#include "getHash.h"

void BRATIO_W4_D5_B1_C2(unsigned hash)
{
    if (hash < 256) {
        if (hash < 64) {
            if (hash < 16) {
                if (hash < 4) {
                    if (hash < 1) {
                        printf("this is branch 1\n");
                        int *ptr = NULL;
                        *ptr = 10;
                    } else if (hash < 2) {
                        printf("this is branch 2\n");
                    } else if (hash < 3) {
                        printf("this is branch 3\n");
                    } else if (hash < 4) {
                        printf("this is branch 4\n");
                    }
                } else if (hash < 8) {
                    if (hash < 5) {
                        printf("this is branch 5\n");
                    } else if (hash < 6) {
                        printf("this is branch 6\n");
                    } else if (hash < 7) {
                        printf("this is branch 7\n");
                    } else if (hash < 8) {
                        printf("this is branch 8\n");
                    }
                } else if (hash < 12) {
                    if (hash < 9) {
                        printf("this is branch 9\n");
                    } else if (hash < 10) {
                        printf("this is branch 10\n");
                    } else if (hash < 11) {
                        printf("this is branch 11\n");
                    } else if (hash < 12) {
                        printf("this is branch 12\n");
                    }
                } else if (hash < 16) {
                    if (hash < 13) {
                        printf("this is branch 13\n");
                    } else if (hash < 14) {
                        printf("this is branch 14\n");
                    } else if (hash < 15) {
                        printf("this is branch 15\n");
                    } else if (hash < 16) {
                        printf("this is branch 16\n");
                    }
                }
            } else if (hash < 32) {
                if (hash < 20) {
                    if (hash < 17) {
                        printf("this is branch 17\n");
                    } else if (hash < 18) {
                        printf("this is branch 18\n");
                    } else if (hash < 19) {
                        printf("this is branch 19\n");
                    } else if (hash < 20) {
                        printf("this is branch 20\n");
                    }
                } else if (hash < 24) {
                    if (hash < 21) {
                        printf("this is branch 21\n");
                    } else if (hash < 22) {
                        printf("this is branch 22\n");
                    } else if (hash < 23) {
                        printf("this is branch 23\n");
                    } else if (hash < 24) {
                        printf("this is branch 24\n");
                    }
                } else if (hash < 28) {
                    if (hash < 25) {
                        printf("this is branch 25\n");
                    } else if (hash < 26) {
                        printf("this is branch 26\n");
                    } else if (hash < 27) {
                        printf("this is branch 27\n");
                    } else if (hash < 28) {
                        printf("this is branch 28\n");
                    }
                } else if (hash < 32) {
                    if (hash < 29) {
                        printf("this is branch 29\n");
                    } else if (hash < 30) {
                        printf("this is branch 30\n");
                    } else if (hash < 31) {
                        printf("this is branch 31\n");
                    } else if (hash < 32) {
                        printf("this is branch 32\n");
                    }
                }
            } else if (hash < 48) {
                if (hash < 36) {
                    if (hash < 33) {
                        printf("this is branch 33\n");
                    } else if (hash < 34) {
                        printf("this is branch 34\n");
                    } else if (hash < 35) {
                        printf("this is branch 35\n");
                    } else if (hash < 36) {
                        printf("this is branch 36\n");
                    }
                } else if (hash < 40) {
                    if (hash < 37) {
                        printf("this is branch 37\n");
                    } else if (hash < 38) {
                        printf("this is branch 38\n");
                    } else if (hash < 39) {
                        printf("this is branch 39\n");
                    } else if (hash < 40) {
                        printf("this is branch 40\n");
                    }
                } else if (hash < 44) {
                    if (hash < 41) {
                        printf("this is branch 41\n");
                    } else if (hash < 42) {
                        printf("this is branch 42\n");
                    } else if (hash < 43) {
                        printf("this is branch 43\n");
                    } else if (hash < 44) {
                        printf("this is branch 44\n");
                    }
                } else if (hash < 48) {
                    if (hash < 45) {
                        printf("this is branch 45\n");
                    } else if (hash < 46) {
                        printf("this is branch 46\n");
                    } else if (hash < 47) {
                        printf("this is branch 47\n");
                    } else if (hash < 48) {
                        printf("this is branch 48\n");
                    }
                }
            } else if (hash < 64) {
                if (hash < 52) {
                    if (hash < 49) {
                        printf("this is branch 49\n");
                    } else if (hash < 50) {
                        printf("this is branch 50\n");
                    } else if (hash < 51) {
                        printf("this is branch 51\n");
                    } else if (hash < 52) {
                        printf("this is branch 52\n");
                    }
                } else if (hash < 56) {
                    if (hash < 53) {
                        printf("this is branch 53\n");
                    } else if (hash < 54) {
                        printf("this is branch 54\n");
                    } else if (hash < 55) {
                        printf("this is branch 55\n");
                    } else if (hash < 56) {
                        printf("this is branch 56\n");
                    }
                } else if (hash < 60) {
                    if (hash < 57) {
                        printf("this is branch 57\n");
                    } else if (hash < 58) {
                        printf("this is branch 58\n");
                    } else if (hash < 59) {
                        printf("this is branch 59\n");
                    } else if (hash < 60) {
                        printf("this is branch 60\n");
                    }
                } else if (hash < 64) {
                    if (hash < 61) {
                        printf("this is branch 61\n");
                    } else if (hash < 62) {
                        printf("this is branch 62\n");
                    } else if (hash < 63) {
                        printf("this is branch 63\n");
                    } else if (hash < 64) {
                        printf("this is branch 64\n");
                    }
                }
            }
        } else if (hash < 128) {
            if (hash < 80) {
                if (hash < 68) {
                    if (hash < 65) {
                        printf("this is branch 65\n");
                    } else if (hash < 66) {
                        printf("this is branch 66\n");
                    } else if (hash < 67) {
                        printf("this is branch 67\n");
                    } else if (hash < 68) {
                        printf("this is branch 68\n");
                    }
                } else if (hash < 72) {
                    if (hash < 69) {
                        printf("this is branch 69\n");
                    } else if (hash < 70) {
                        printf("this is branch 70\n");
                    } else if (hash < 71) {
                        printf("this is branch 71\n");
                    } else if (hash < 72) {
                        printf("this is branch 72\n");
                    }
                } else if (hash < 76) {
                    if (hash < 73) {
                        printf("this is branch 73\n");
                    } else if (hash < 74) {
                        printf("this is branch 74\n");
                    } else if (hash < 75) {
                        printf("this is branch 75\n");
                    } else if (hash < 76) {
                        printf("this is branch 76\n");
                    }
                } else if (hash < 80) {
                    if (hash < 77) {
                        printf("this is branch 77\n");
                    } else if (hash < 78) {
                        printf("this is branch 78\n");
                    } else if (hash < 79) {
                        printf("this is branch 79\n");
                    } else if (hash < 80) {
                        printf("this is branch 80\n");
                    }
                }
            } else if (hash < 96) {
                if (hash < 84) {
                    if (hash < 81) {
                        printf("this is branch 81\n");
                    } else if (hash < 82) {
                        printf("this is branch 82\n");
                    } else if (hash < 83) {
                        printf("this is branch 83\n");
                    } else if (hash < 84) {
                        printf("this is branch 84\n");
                    }
                } else if (hash < 88) {
                    if (hash < 85) {
                        printf("this is branch 85\n");
                    } else if (hash < 86) {
                        printf("this is branch 86\n");
                    } else if (hash < 87) {
                        printf("this is branch 87\n");
                    } else if (hash < 88) {
                        printf("this is branch 88\n");
                    }
                } else if (hash < 92) {
                    if (hash < 89) {
                        printf("this is branch 89\n");
                    } else if (hash < 90) {
                        printf("this is branch 90\n");
                    } else if (hash < 91) {
                        printf("this is branch 91\n");
                    } else if (hash < 92) {
                        printf("this is branch 92\n");
                    }
                } else if (hash < 96) {
                    if (hash < 93) {
                        printf("this is branch 93\n");
                    } else if (hash < 94) {
                        printf("this is branch 94\n");
                    } else if (hash < 95) {
                        printf("this is branch 95\n");
                    } else if (hash < 96) {
                        printf("this is branch 96\n");
                    }
                }
            } else if (hash < 112) {
                if (hash < 100) {
                    if (hash < 97) {
                        printf("this is branch 97\n");
                    } else if (hash < 98) {
                        printf("this is branch 98\n");
                    } else if (hash < 99) {
                        printf("this is branch 99\n");
                    } else if (hash < 100) {
                        printf("this is branch 100\n");
                    }
                } else if (hash < 104) {
                    if (hash < 101) {
                        printf("this is branch 101\n");
                    } else if (hash < 102) {
                        printf("this is branch 102\n");
                    } else if (hash < 103) {
                        printf("this is branch 103\n");
                    } else if (hash < 104) {
                        printf("this is branch 104\n");
                    }
                } else if (hash < 108) {
                    if (hash < 105) {
                        printf("this is branch 105\n");
                    } else if (hash < 106) {
                        printf("this is branch 106\n");
                    } else if (hash < 107) {
                        printf("this is branch 107\n");
                    } else if (hash < 108) {
                        printf("this is branch 108\n");
                    }
                } else if (hash < 112) {
                    if (hash < 109) {
                        printf("this is branch 109\n");
                    } else if (hash < 110) {
                        printf("this is branch 110\n");
                    } else if (hash < 111) {
                        printf("this is branch 111\n");
                    } else if (hash < 112) {
                        printf("this is branch 112\n");
                    }
                }
            } else if (hash < 128) {
                if (hash < 116) {
                    if (hash < 113) {
                        printf("this is branch 113\n");
                    } else if (hash < 114) {
                        printf("this is branch 114\n");
                    } else if (hash < 115) {
                        printf("this is branch 115\n");
                    } else if (hash < 116) {
                        printf("this is branch 116\n");
                    }
                } else if (hash < 120) {
                    if (hash < 117) {
                        printf("this is branch 117\n");
                    } else if (hash < 118) {
                        printf("this is branch 118\n");
                    } else if (hash < 119) {
                        printf("this is branch 119\n");
                    } else if (hash < 120) {
                        printf("this is branch 120\n");
                    }
                } else if (hash < 124) {
                    if (hash < 121) {
                        printf("this is branch 121\n");
                    } else if (hash < 122) {
                        printf("this is branch 122\n");
                    } else if (hash < 123) {
                        printf("this is branch 123\n");
                    } else if (hash < 124) {
                        printf("this is branch 124\n");
                    }
                } else if (hash < 128) {
                    if (hash < 125) {
                        printf("this is branch 125\n");
                    } else if (hash < 126) {
                        printf("this is branch 126\n");
                    } else if (hash < 127) {
                        printf("this is branch 127\n");
                    } else if (hash < 128) {
                        printf("this is branch 128\n");
                    }
                }
            }
        } else if (hash < 192) {
            if (hash < 144) {
                if (hash < 132) {
                    if (hash < 129) {
                        printf("this is branch 129\n");
                    } else if (hash < 130) {
                        printf("this is branch 130\n");
                    } else if (hash < 131) {
                        printf("this is branch 131\n");
                    } else if (hash < 132) {
                        printf("this is branch 132\n");
                    }
                } else if (hash < 136) {
                    if (hash < 133) {
                        printf("this is branch 133\n");
                    } else if (hash < 134) {
                        printf("this is branch 134\n");
                    } else if (hash < 135) {
                        printf("this is branch 135\n");
                    } else if (hash < 136) {
                        printf("this is branch 136\n");
                    }
                } else if (hash < 140) {
                    if (hash < 137) {
                        printf("this is branch 137\n");
                    } else if (hash < 138) {
                        printf("this is branch 138\n");
                    } else if (hash < 139) {
                        printf("this is branch 139\n");
                    } else if (hash < 140) {
                        printf("this is branch 140\n");
                    }
                } else if (hash < 144) {
                    if (hash < 141) {
                        printf("this is branch 141\n");
                    } else if (hash < 142) {
                        printf("this is branch 142\n");
                    } else if (hash < 143) {
                        printf("this is branch 143\n");
                    } else if (hash < 144) {
                        printf("this is branch 144\n");
                    }
                }
            } else if (hash < 160) {
                if (hash < 148) {
                    if (hash < 145) {
                        printf("this is branch 145\n");
                    } else if (hash < 146) {
                        printf("this is branch 146\n");
                    } else if (hash < 147) {
                        printf("this is branch 147\n");
                    } else if (hash < 148) {
                        printf("this is branch 148\n");
                    }
                } else if (hash < 152) {
                    if (hash < 149) {
                        printf("this is branch 149\n");
                    } else if (hash < 150) {
                        printf("this is branch 150\n");
                    } else if (hash < 151) {
                        printf("this is branch 151\n");
                    } else if (hash < 152) {
                        printf("this is branch 152\n");
                    }
                } else if (hash < 156) {
                    if (hash < 153) {
                        printf("this is branch 153\n");
                    } else if (hash < 154) {
                        printf("this is branch 154\n");
                    } else if (hash < 155) {
                        printf("this is branch 155\n");
                    } else if (hash < 156) {
                        printf("this is branch 156\n");
                    }
                } else if (hash < 160) {
                    if (hash < 157) {
                        printf("this is branch 157\n");
                    } else if (hash < 158) {
                        printf("this is branch 158\n");
                    } else if (hash < 159) {
                        printf("this is branch 159\n");
                    } else if (hash < 160) {
                        printf("this is branch 160\n");
                    }
                }
            } else if (hash < 176) {
                if (hash < 164) {
                    if (hash < 161) {
                        printf("this is branch 161\n");
                    } else if (hash < 162) {
                        printf("this is branch 162\n");
                    } else if (hash < 163) {
                        printf("this is branch 163\n");
                    } else if (hash < 164) {
                        printf("this is branch 164\n");
                    }
                } else if (hash < 168) {
                    if (hash < 165) {
                        printf("this is branch 165\n");
                    } else if (hash < 166) {
                        printf("this is branch 166\n");
                    } else if (hash < 167) {
                        printf("this is branch 167\n");
                    } else if (hash < 168) {
                        printf("this is branch 168\n");
                    }
                } else if (hash < 172) {
                    if (hash < 169) {
                        printf("this is branch 169\n");
                    } else if (hash < 170) {
                        printf("this is branch 170\n");
                    } else if (hash < 171) {
                        printf("this is branch 171\n");
                    } else if (hash < 172) {
                        printf("this is branch 172\n");
                    }
                } else if (hash < 176) {
                    if (hash < 173) {
                        printf("this is branch 173\n");
                    } else if (hash < 174) {
                        printf("this is branch 174\n");
                    } else if (hash < 175) {
                        printf("this is branch 175\n");
                    } else if (hash < 176) {
                        printf("this is branch 176\n");
                    }
                }
            } else if (hash < 192) {
                if (hash < 180) {
                    if (hash < 177) {
                        printf("this is branch 177\n");
                    } else if (hash < 178) {
                        printf("this is branch 178\n");
                    } else if (hash < 179) {
                        printf("this is branch 179\n");
                    } else if (hash < 180) {
                        printf("this is branch 180\n");
                    }
                } else if (hash < 184) {
                    if (hash < 181) {
                        printf("this is branch 181\n");
                    } else if (hash < 182) {
                        printf("this is branch 182\n");
                    } else if (hash < 183) {
                        printf("this is branch 183\n");
                    } else if (hash < 184) {
                        printf("this is branch 184\n");
                    }
                } else if (hash < 188) {
                    if (hash < 185) {
                        printf("this is branch 185\n");
                    } else if (hash < 186) {
                        printf("this is branch 186\n");
                    } else if (hash < 187) {
                        printf("this is branch 187\n");
                    } else if (hash < 188) {
                        printf("this is branch 188\n");
                    }
                } else if (hash < 192) {
                    if (hash < 189) {
                        printf("this is branch 189\n");
                    } else if (hash < 190) {
                        printf("this is branch 190\n");
                    } else if (hash < 191) {
                        printf("this is branch 191\n");
                    } else if (hash < 192) {
                        printf("this is branch 192\n");
                    }
                }
            }
        } else if (hash < 256) {
            if (hash < 208) {
                if (hash < 196) {
                    if (hash < 193) {
                        printf("this is branch 193\n");
                    } else if (hash < 194) {
                        printf("this is branch 194\n");
                    } else if (hash < 195) {
                        printf("this is branch 195\n");
                    } else if (hash < 196) {
                        printf("this is branch 196\n");
                    }
                } else if (hash < 200) {
                    if (hash < 197) {
                        printf("this is branch 197\n");
                    } else if (hash < 198) {
                        printf("this is branch 198\n");
                    } else if (hash < 199) {
                        printf("this is branch 199\n");
                    } else if (hash < 200) {
                        printf("this is branch 200\n");
                    }
                } else if (hash < 204) {
                    if (hash < 201) {
                        printf("this is branch 201\n");
                    } else if (hash < 202) {
                        printf("this is branch 202\n");
                    } else if (hash < 203) {
                        printf("this is branch 203\n");
                    } else if (hash < 204) {
                        printf("this is branch 204\n");
                    }
                } else if (hash < 208) {
                    if (hash < 205) {
                        printf("this is branch 205\n");
                    } else if (hash < 206) {
                        printf("this is branch 206\n");
                    } else if (hash < 207) {
                        printf("this is branch 207\n");
                    } else if (hash < 208) {
                        printf("this is branch 208\n");
                    }
                }
            } else if (hash < 224) {
                if (hash < 212) {
                    if (hash < 209) {
                        printf("this is branch 209\n");
                    } else if (hash < 210) {
                        printf("this is branch 210\n");
                    } else if (hash < 211) {
                        printf("this is branch 211\n");
                    } else if (hash < 212) {
                        printf("this is branch 212\n");
                    }
                } else if (hash < 216) {
                    if (hash < 213) {
                        printf("this is branch 213\n");
                    } else if (hash < 214) {
                        printf("this is branch 214\n");
                    } else if (hash < 215) {
                        printf("this is branch 215\n");
                    } else if (hash < 216) {
                        printf("this is branch 216\n");
                    }
                } else if (hash < 220) {
                    if (hash < 217) {
                        printf("this is branch 217\n");
                    } else if (hash < 218) {
                        printf("this is branch 218\n");
                    } else if (hash < 219) {
                        printf("this is branch 219\n");
                    } else if (hash < 220) {
                        printf("this is branch 220\n");
                    }
                } else if (hash < 224) {
                    if (hash < 221) {
                        printf("this is branch 221\n");
                    } else if (hash < 222) {
                        printf("this is branch 222\n");
                    } else if (hash < 223) {
                        printf("this is branch 223\n");
                    } else if (hash < 224) {
                        printf("this is branch 224\n");
                    }
                }
            } else if (hash < 240) {
                if (hash < 228) {
                    if (hash < 225) {
                        printf("this is branch 225\n");
                    } else if (hash < 226) {
                        printf("this is branch 226\n");
                    } else if (hash < 227) {
                        printf("this is branch 227\n");
                    } else if (hash < 228) {
                        printf("this is branch 228\n");
                    }
                } else if (hash < 232) {
                    if (hash < 229) {
                        printf("this is branch 229\n");
                    } else if (hash < 230) {
                        printf("this is branch 230\n");
                    } else if (hash < 231) {
                        printf("this is branch 231\n");
                    } else if (hash < 232) {
                        printf("this is branch 232\n");
                    }
                } else if (hash < 236) {
                    if (hash < 233) {
                        printf("this is branch 233\n");
                    } else if (hash < 234) {
                        printf("this is branch 234\n");
                    } else if (hash < 235) {
                        printf("this is branch 235\n");
                    } else if (hash < 236) {
                        printf("this is branch 236\n");
                    }
                } else if (hash < 240) {
                    if (hash < 237) {
                        printf("this is branch 237\n");
                    } else if (hash < 238) {
                        printf("this is branch 238\n");
                    } else if (hash < 239) {
                        printf("this is branch 239\n");
                    } else if (hash < 240) {
                        printf("this is branch 240\n");
                    }
                }
            } else if (hash < 256) {
                if (hash < 244) {
                    if (hash < 241) {
                        printf("this is branch 241\n");
                    } else if (hash < 242) {
                        printf("this is branch 242\n");
                    } else if (hash < 243) {
                        printf("this is branch 243\n");
                    } else if (hash < 244) {
                        printf("this is branch 244\n");
                    }
                } else if (hash < 248) {
                    if (hash < 245) {
                        printf("this is branch 245\n");
                    } else if (hash < 246) {
                        printf("this is branch 246\n");
                    } else if (hash < 247) {
                        printf("this is branch 247\n");
                    } else if (hash < 248) {
                        printf("this is branch 248\n");
                    }
                } else if (hash < 252) {
                    if (hash < 249) {
                        printf("this is branch 249\n");
                    } else if (hash < 250) {
                        printf("this is branch 250\n");
                    } else if (hash < 251) {
                        printf("this is branch 251\n");
                    } else if (hash < 252) {
                        printf("this is branch 252\n");
                    }
                } else if (hash < 256) {
                    if (hash < 253) {
                        printf("this is branch 253\n");
                    } else if (hash < 254) {
                        printf("this is branch 254\n");
                    } else if (hash < 255) {
                        printf("this is branch 255\n");
                    } else if (hash < 256) {
                        printf("this is branch 256\n");
                    }
                }
            }
        }
    } else if (hash < 512) {
        if (hash < 320) {
            if (hash < 272) {
                if (hash < 260) {
                    if (hash < 257) {
                        printf("this is branch 257\n");
                    } else if (hash < 258) {
                        printf("this is branch 258\n");
                    } else if (hash < 259) {
                        printf("this is branch 259\n");
                    } else if (hash < 260) {
                        printf("this is branch 260\n");
                    }
                } else if (hash < 264) {
                    if (hash < 261) {
                        printf("this is branch 261\n");
                    } else if (hash < 262) {
                        printf("this is branch 262\n");
                    } else if (hash < 263) {
                        printf("this is branch 263\n");
                    } else if (hash < 264) {
                        printf("this is branch 264\n");
                    }
                } else if (hash < 268) {
                    if (hash < 265) {
                        printf("this is branch 265\n");
                    } else if (hash < 266) {
                        printf("this is branch 266\n");
                    } else if (hash < 267) {
                        printf("this is branch 267\n");
                    } else if (hash < 268) {
                        printf("this is branch 268\n");
                    }
                } else if (hash < 272) {
                    if (hash < 269) {
                        printf("this is branch 269\n");
                    } else if (hash < 270) {
                        printf("this is branch 270\n");
                    } else if (hash < 271) {
                        printf("this is branch 271\n");
                    } else if (hash < 272) {
                        printf("this is branch 272\n");
                    }
                }
            } else if (hash < 288) {
                if (hash < 276) {
                    if (hash < 273) {
                        printf("this is branch 273\n");
                    } else if (hash < 274) {
                        printf("this is branch 274\n");
                    } else if (hash < 275) {
                        printf("this is branch 275\n");
                    } else if (hash < 276) {
                        printf("this is branch 276\n");
                    }
                } else if (hash < 280) {
                    if (hash < 277) {
                        printf("this is branch 277\n");
                    } else if (hash < 278) {
                        printf("this is branch 278\n");
                    } else if (hash < 279) {
                        printf("this is branch 279\n");
                    } else if (hash < 280) {
                        printf("this is branch 280\n");
                    }
                } else if (hash < 284) {
                    if (hash < 281) {
                        printf("this is branch 281\n");
                    } else if (hash < 282) {
                        printf("this is branch 282\n");
                    } else if (hash < 283) {
                        printf("this is branch 283\n");
                    } else if (hash < 284) {
                        printf("this is branch 284\n");
                    }
                } else if (hash < 288) {
                    if (hash < 285) {
                        printf("this is branch 285\n");
                    } else if (hash < 286) {
                        printf("this is branch 286\n");
                    } else if (hash < 287) {
                        printf("this is branch 287\n");
                    } else if (hash < 288) {
                        printf("this is branch 288\n");
                    }
                }
            } else if (hash < 304) {
                if (hash < 292) {
                    if (hash < 289) {
                        printf("this is branch 289\n");
                    } else if (hash < 290) {
                        printf("this is branch 290\n");
                    } else if (hash < 291) {
                        printf("this is branch 291\n");
                    } else if (hash < 292) {
                        printf("this is branch 292\n");
                    }
                } else if (hash < 296) {
                    if (hash < 293) {
                        printf("this is branch 293\n");
                    } else if (hash < 294) {
                        printf("this is branch 294\n");
                    } else if (hash < 295) {
                        printf("this is branch 295\n");
                    } else if (hash < 296) {
                        printf("this is branch 296\n");
                    }
                } else if (hash < 300) {
                    if (hash < 297) {
                        printf("this is branch 297\n");
                    } else if (hash < 298) {
                        printf("this is branch 298\n");
                    } else if (hash < 299) {
                        printf("this is branch 299\n");
                    } else if (hash < 300) {
                        printf("this is branch 300\n");
                    }
                } else if (hash < 304) {
                    if (hash < 301) {
                        printf("this is branch 301\n");
                    } else if (hash < 302) {
                        printf("this is branch 302\n");
                    } else if (hash < 303) {
                        printf("this is branch 303\n");
                    } else if (hash < 304) {
                        printf("this is branch 304\n");
                    }
                }
            } else if (hash < 320) {
                if (hash < 308) {
                    if (hash < 305) {
                        printf("this is branch 305\n");
                    } else if (hash < 306) {
                        printf("this is branch 306\n");
                    } else if (hash < 307) {
                        printf("this is branch 307\n");
                    } else if (hash < 308) {
                        printf("this is branch 308\n");
                    }
                } else if (hash < 312) {
                    if (hash < 309) {
                        printf("this is branch 309\n");
                    } else if (hash < 310) {
                        printf("this is branch 310\n");
                    } else if (hash < 311) {
                        printf("this is branch 311\n");
                    } else if (hash < 312) {
                        printf("this is branch 312\n");
                    }
                } else if (hash < 316) {
                    if (hash < 313) {
                        printf("this is branch 313\n");
                    } else if (hash < 314) {
                        printf("this is branch 314\n");
                    } else if (hash < 315) {
                        printf("this is branch 315\n");
                    } else if (hash < 316) {
                        printf("this is branch 316\n");
                    }
                } else if (hash < 320) {
                    if (hash < 317) {
                        printf("this is branch 317\n");
                    } else if (hash < 318) {
                        printf("this is branch 318\n");
                    } else if (hash < 319) {
                        printf("this is branch 319\n");
                    } else if (hash < 320) {
                        printf("this is branch 320\n");
                    }
                }
            }
        } else if (hash < 384) {
            if (hash < 336) {
                if (hash < 324) {
                    if (hash < 321) {
                        printf("this is branch 321\n");
                    } else if (hash < 322) {
                        printf("this is branch 322\n");
                    } else if (hash < 323) {
                        printf("this is branch 323\n");
                    } else if (hash < 324) {
                        printf("this is branch 324\n");
                    }
                } else if (hash < 328) {
                    if (hash < 325) {
                        printf("this is branch 325\n");
                    } else if (hash < 326) {
                        printf("this is branch 326\n");
                    } else if (hash < 327) {
                        printf("this is branch 327\n");
                    } else if (hash < 328) {
                        printf("this is branch 328\n");
                    }
                } else if (hash < 332) {
                    if (hash < 329) {
                        printf("this is branch 329\n");
                    } else if (hash < 330) {
                        printf("this is branch 330\n");
                    } else if (hash < 331) {
                        printf("this is branch 331\n");
                    } else if (hash < 332) {
                        printf("this is branch 332\n");
                    }
                } else if (hash < 336) {
                    if (hash < 333) {
                        printf("this is branch 333\n");
                    } else if (hash < 334) {
                        printf("this is branch 334\n");
                    } else if (hash < 335) {
                        printf("this is branch 335\n");
                    } else if (hash < 336) {
                        printf("this is branch 336\n");
                    }
                }
            } else if (hash < 352) {
                if (hash < 340) {
                    if (hash < 337) {
                        printf("this is branch 337\n");
                    } else if (hash < 338) {
                        printf("this is branch 338\n");
                    } else if (hash < 339) {
                        printf("this is branch 339\n");
                    } else if (hash < 340) {
                        printf("this is branch 340\n");
                    }
                } else if (hash < 344) {
                    if (hash < 341) {
                        printf("this is branch 341\n");
                    } else if (hash < 342) {
                        printf("this is branch 342\n");
                    } else if (hash < 343) {
                        printf("this is branch 343\n");
                    } else if (hash < 344) {
                        printf("this is branch 344\n");
                    }
                } else if (hash < 348) {
                    if (hash < 345) {
                        printf("this is branch 345\n");
                    } else if (hash < 346) {
                        printf("this is branch 346\n");
                    } else if (hash < 347) {
                        printf("this is branch 347\n");
                    } else if (hash < 348) {
                        printf("this is branch 348\n");
                    }
                } else if (hash < 352) {
                    if (hash < 349) {
                        printf("this is branch 349\n");
                    } else if (hash < 350) {
                        printf("this is branch 350\n");
                    } else if (hash < 351) {
                        printf("this is branch 351\n");
                    } else if (hash < 352) {
                        printf("this is branch 352\n");
                    }
                }
            } else if (hash < 368) {
                if (hash < 356) {
                    if (hash < 353) {
                        printf("this is branch 353\n");
                    } else if (hash < 354) {
                        printf("this is branch 354\n");
                    } else if (hash < 355) {
                        printf("this is branch 355\n");
                    } else if (hash < 356) {
                        printf("this is branch 356\n");
                    }
                } else if (hash < 360) {
                    if (hash < 357) {
                        printf("this is branch 357\n");
                    } else if (hash < 358) {
                        printf("this is branch 358\n");
                    } else if (hash < 359) {
                        printf("this is branch 359\n");
                    } else if (hash < 360) {
                        printf("this is branch 360\n");
                    }
                } else if (hash < 364) {
                    if (hash < 361) {
                        printf("this is branch 361\n");
                    } else if (hash < 362) {
                        printf("this is branch 362\n");
                    } else if (hash < 363) {
                        printf("this is branch 363\n");
                    } else if (hash < 364) {
                        printf("this is branch 364\n");
                    }
                } else if (hash < 368) {
                    if (hash < 365) {
                        printf("this is branch 365\n");
                    } else if (hash < 366) {
                        printf("this is branch 366\n");
                    } else if (hash < 367) {
                        printf("this is branch 367\n");
                    } else if (hash < 368) {
                        printf("this is branch 368\n");
                    }
                }
            } else if (hash < 384) {
                if (hash < 372) {
                    if (hash < 369) {
                        printf("this is branch 369\n");
                    } else if (hash < 370) {
                        printf("this is branch 370\n");
                    } else if (hash < 371) {
                        printf("this is branch 371\n");
                    } else if (hash < 372) {
                        printf("this is branch 372\n");
                    }
                } else if (hash < 376) {
                    if (hash < 373) {
                        printf("this is branch 373\n");
                    } else if (hash < 374) {
                        printf("this is branch 374\n");
                    } else if (hash < 375) {
                        printf("this is branch 375\n");
                    } else if (hash < 376) {
                        printf("this is branch 376\n");
                    }
                } else if (hash < 380) {
                    if (hash < 377) {
                        printf("this is branch 377\n");
                    } else if (hash < 378) {
                        printf("this is branch 378\n");
                    } else if (hash < 379) {
                        printf("this is branch 379\n");
                    } else if (hash < 380) {
                        printf("this is branch 380\n");
                    }
                } else if (hash < 384) {
                    if (hash < 381) {
                        printf("this is branch 381\n");
                    } else if (hash < 382) {
                        printf("this is branch 382\n");
                    } else if (hash < 383) {
                        printf("this is branch 383\n");
                    } else if (hash < 384) {
                        printf("this is branch 384\n");
                    }
                }
            }
        } else if (hash < 448) {
            if (hash < 400) {
                if (hash < 388) {
                    if (hash < 385) {
                        printf("this is branch 385\n");
                    } else if (hash < 386) {
                        printf("this is branch 386\n");
                    } else if (hash < 387) {
                        printf("this is branch 387\n");
                    } else if (hash < 388) {
                        printf("this is branch 388\n");
                    }
                } else if (hash < 392) {
                    if (hash < 389) {
                        printf("this is branch 389\n");
                    } else if (hash < 390) {
                        printf("this is branch 390\n");
                    } else if (hash < 391) {
                        printf("this is branch 391\n");
                    } else if (hash < 392) {
                        printf("this is branch 392\n");
                    }
                } else if (hash < 396) {
                    if (hash < 393) {
                        printf("this is branch 393\n");
                    } else if (hash < 394) {
                        printf("this is branch 394\n");
                    } else if (hash < 395) {
                        printf("this is branch 395\n");
                    } else if (hash < 396) {
                        printf("this is branch 396\n");
                    }
                } else if (hash < 400) {
                    if (hash < 397) {
                        printf("this is branch 397\n");
                    } else if (hash < 398) {
                        printf("this is branch 398\n");
                    } else if (hash < 399) {
                        printf("this is branch 399\n");
                    } else if (hash < 400) {
                        printf("this is branch 400\n");
                    }
                }
            } else if (hash < 416) {
                if (hash < 404) {
                    if (hash < 401) {
                        printf("this is branch 401\n");
                    } else if (hash < 402) {
                        printf("this is branch 402\n");
                    } else if (hash < 403) {
                        printf("this is branch 403\n");
                    } else if (hash < 404) {
                        printf("this is branch 404\n");
                    }
                } else if (hash < 408) {
                    if (hash < 405) {
                        printf("this is branch 405\n");
                    } else if (hash < 406) {
                        printf("this is branch 406\n");
                    } else if (hash < 407) {
                        printf("this is branch 407\n");
                    } else if (hash < 408) {
                        printf("this is branch 408\n");
                    }
                } else if (hash < 412) {
                    if (hash < 409) {
                        printf("this is branch 409\n");
                    } else if (hash < 410) {
                        printf("this is branch 410\n");
                    } else if (hash < 411) {
                        printf("this is branch 411\n");
                    } else if (hash < 412) {
                        printf("this is branch 412\n");
                    }
                } else if (hash < 416) {
                    if (hash < 413) {
                        printf("this is branch 413\n");
                    } else if (hash < 414) {
                        printf("this is branch 414\n");
                    } else if (hash < 415) {
                        printf("this is branch 415\n");
                    } else if (hash < 416) {
                        printf("this is branch 416\n");
                    }
                }
            } else if (hash < 432) {
                if (hash < 420) {
                    if (hash < 417) {
                        printf("this is branch 417\n");
                    } else if (hash < 418) {
                        printf("this is branch 418\n");
                    } else if (hash < 419) {
                        printf("this is branch 419\n");
                    } else if (hash < 420) {
                        printf("this is branch 420\n");
                    }
                } else if (hash < 424) {
                    if (hash < 421) {
                        printf("this is branch 421\n");
                    } else if (hash < 422) {
                        printf("this is branch 422\n");
                    } else if (hash < 423) {
                        printf("this is branch 423\n");
                    } else if (hash < 424) {
                        printf("this is branch 424\n");
                    }
                } else if (hash < 428) {
                    if (hash < 425) {
                        printf("this is branch 425\n");
                    } else if (hash < 426) {
                        printf("this is branch 426\n");
                    } else if (hash < 427) {
                        printf("this is branch 427\n");
                    } else if (hash < 428) {
                        printf("this is branch 428\n");
                    }
                } else if (hash < 432) {
                    if (hash < 429) {
                        printf("this is branch 429\n");
                    } else if (hash < 430) {
                        printf("this is branch 430\n");
                    } else if (hash < 431) {
                        printf("this is branch 431\n");
                    } else if (hash < 432) {
                        printf("this is branch 432\n");
                    }
                }
            } else if (hash < 448) {
                if (hash < 436) {
                    if (hash < 433) {
                        printf("this is branch 433\n");
                    } else if (hash < 434) {
                        printf("this is branch 434\n");
                    } else if (hash < 435) {
                        printf("this is branch 435\n");
                    } else if (hash < 436) {
                        printf("this is branch 436\n");
                    }
                } else if (hash < 440) {
                    if (hash < 437) {
                        printf("this is branch 437\n");
                    } else if (hash < 438) {
                        printf("this is branch 438\n");
                    } else if (hash < 439) {
                        printf("this is branch 439\n");
                    } else if (hash < 440) {
                        printf("this is branch 440\n");
                    }
                } else if (hash < 444) {
                    if (hash < 441) {
                        printf("this is branch 441\n");
                    } else if (hash < 442) {
                        printf("this is branch 442\n");
                    } else if (hash < 443) {
                        printf("this is branch 443\n");
                    } else if (hash < 444) {
                        printf("this is branch 444\n");
                    }
                } else if (hash < 448) {
                    if (hash < 445) {
                        printf("this is branch 445\n");
                    } else if (hash < 446) {
                        printf("this is branch 446\n");
                    } else if (hash < 447) {
                        printf("this is branch 447\n");
                    } else if (hash < 448) {
                        printf("this is branch 448\n");
                    }
                }
            }
        } else if (hash < 512) {
            if (hash < 464) {
                if (hash < 452) {
                    if (hash < 449) {
                        printf("this is branch 449\n");
                    } else if (hash < 450) {
                        printf("this is branch 450\n");
                    } else if (hash < 451) {
                        printf("this is branch 451\n");
                    } else if (hash < 452) {
                        printf("this is branch 452\n");
                    }
                } else if (hash < 456) {
                    if (hash < 453) {
                        printf("this is branch 453\n");
                    } else if (hash < 454) {
                        printf("this is branch 454\n");
                    } else if (hash < 455) {
                        printf("this is branch 455\n");
                    } else if (hash < 456) {
                        printf("this is branch 456\n");
                    }
                } else if (hash < 460) {
                    if (hash < 457) {
                        printf("this is branch 457\n");
                    } else if (hash < 458) {
                        printf("this is branch 458\n");
                    } else if (hash < 459) {
                        printf("this is branch 459\n");
                    } else if (hash < 460) {
                        printf("this is branch 460\n");
                    }
                } else if (hash < 464) {
                    if (hash < 461) {
                        printf("this is branch 461\n");
                    } else if (hash < 462) {
                        printf("this is branch 462\n");
                    } else if (hash < 463) {
                        printf("this is branch 463\n");
                    } else if (hash < 464) {
                        printf("this is branch 464\n");
                    }
                }
            } else if (hash < 480) {
                if (hash < 468) {
                    if (hash < 465) {
                        printf("this is branch 465\n");
                    } else if (hash < 466) {
                        printf("this is branch 466\n");
                    } else if (hash < 467) {
                        printf("this is branch 467\n");
                    } else if (hash < 468) {
                        printf("this is branch 468\n");
                    }
                } else if (hash < 472) {
                    if (hash < 469) {
                        printf("this is branch 469\n");
                    } else if (hash < 470) {
                        printf("this is branch 470\n");
                    } else if (hash < 471) {
                        printf("this is branch 471\n");
                    } else if (hash < 472) {
                        printf("this is branch 472\n");
                    }
                } else if (hash < 476) {
                    if (hash < 473) {
                        printf("this is branch 473\n");
                    } else if (hash < 474) {
                        printf("this is branch 474\n");
                    } else if (hash < 475) {
                        printf("this is branch 475\n");
                    } else if (hash < 476) {
                        printf("this is branch 476\n");
                    }
                } else if (hash < 480) {
                    if (hash < 477) {
                        printf("this is branch 477\n");
                    } else if (hash < 478) {
                        printf("this is branch 478\n");
                    } else if (hash < 479) {
                        printf("this is branch 479\n");
                    } else if (hash < 480) {
                        printf("this is branch 480\n");
                    }
                }
            } else if (hash < 496) {
                if (hash < 484) {
                    if (hash < 481) {
                        printf("this is branch 481\n");
                    } else if (hash < 482) {
                        printf("this is branch 482\n");
                    } else if (hash < 483) {
                        printf("this is branch 483\n");
                    } else if (hash < 484) {
                        printf("this is branch 484\n");
                    }
                } else if (hash < 488) {
                    if (hash < 485) {
                        printf("this is branch 485\n");
                    } else if (hash < 486) {
                        printf("this is branch 486\n");
                    } else if (hash < 487) {
                        printf("this is branch 487\n");
                    } else if (hash < 488) {
                        printf("this is branch 488\n");
                    }
                } else if (hash < 492) {
                    if (hash < 489) {
                        printf("this is branch 489\n");
                    } else if (hash < 490) {
                        printf("this is branch 490\n");
                    } else if (hash < 491) {
                        printf("this is branch 491\n");
                    } else if (hash < 492) {
                        printf("this is branch 492\n");
                    }
                } else if (hash < 496) {
                    if (hash < 493) {
                        printf("this is branch 493\n");
                    } else if (hash < 494) {
                        printf("this is branch 494\n");
                    } else if (hash < 495) {
                        printf("this is branch 495\n");
                    } else if (hash < 496) {
                        printf("this is branch 496\n");
                    }
                }
            } else if (hash < 512) {
                if (hash < 500) {
                    if (hash < 497) {
                        printf("this is branch 497\n");
                    } else if (hash < 498) {
                        printf("this is branch 498\n");
                    } else if (hash < 499) {
                        printf("this is branch 499\n");
                    } else if (hash < 500) {
                        printf("this is branch 500\n");
                    }
                } else if (hash < 504) {
                    if (hash < 501) {
                        printf("this is branch 501\n");
                    } else if (hash < 502) {
                        printf("this is branch 502\n");
                    } else if (hash < 503) {
                        printf("this is branch 503\n");
                    } else if (hash < 504) {
                        printf("this is branch 504\n");
                    }
                } else if (hash < 508) {
                    if (hash < 505) {
                        printf("this is branch 505\n");
                    } else if (hash < 506) {
                        printf("this is branch 506\n");
                    } else if (hash < 507) {
                        printf("this is branch 507\n");
                    } else if (hash < 508) {
                        printf("this is branch 508\n");
                    }
                } else if (hash < 512) {
                    if (hash < 509) {
                        printf("this is branch 509\n");
                    } else if (hash < 510) {
                        printf("this is branch 510\n");
                    } else if (hash < 511) {
                        printf("this is branch 511\n");
                    } else if (hash < 512) {
                        printf("this is branch 512\n");
                    }
                }
            }
        }
    }

}

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
        return 1;
    }

    FILE *fp = fopen(argv[1], "rb");
    if (fp == NULL)
    {
        perror("Error opening file");
        return 1;
    }

    fseek(fp, 0, SEEK_END);
    long size = ftell(fp);
    rewind(fp);
    printf("size: %ld\n", size);

    unsigned char *data = malloc(size * sizeof(unsigned char));
    if (data == NULL)
    {
        fprintf(stderr, "Error allocating memory\n");
        fclose(fp);
        return 1;
    }

    if (fread(data, sizeof(unsigned char), size, fp) != size)
    {
        fprintf(stderr, "Error reading file\n");
        fclose(fp);
        free(data);
        return 1;
    }

    BRATIO_W4_D5_B1_C2(getHash(data, size));

    free(data);

    return 0;
}
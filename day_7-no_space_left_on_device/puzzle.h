#include "command.h"
#include "entry.h"

static const command_t cmds[] = {

 { CD, "/" },
 { LS, NULL },
 { CD, "bfbjzfd" },
 { LS, NULL },
 { CD, "brmgzjp" },
 { LS, NULL },
 { CD, ".." },
 { CD, "rhrqttg" },
 { LS, NULL },
 { CD, "hmz" },
 { LS, NULL },
 { CD, ".." },
 { CD, "hpcrbfq" },
 { LS, NULL },
 { CD, "ghmfgn" },
 { LS, NULL },
 { CD, "rrfg" },
 { LS, NULL },
 { CD, ".." },
 { CD, "tggwct" },
 { LS, NULL },
 { CD, "lqmrbncv" },
 { LS, NULL },
 { CD, ".." },
 { CD, ".." },
 { CD, ".." },
 { CD, "pnhcpprn" },
 { LS, NULL },
 { CD, ".." },
 { CD, "wgvqhw" },
 { LS, NULL },
 { CD, ".." },
 { CD, ".." },
 { CD, ".." },
 { CD, "zfdc" },
 { LS, NULL },
 { CD, ".." },
 { CD, ".." },
 { CD, "mbc" },
 { LS, NULL },
 { CD, ".." },
 { CD, "psqmv" },
 { LS, NULL },
 { CD, "cjzpb" },
 { LS, NULL },
 { CD, ".." },
 { CD, "jdvsccc" },
 { LS, NULL },
 { CD, "pnhcpprn" },
 { LS, NULL },
 { CD, ".." },
 { CD, "zwjqnf" },
 { LS, NULL },
 { CD, "stbgzg" },
 { LS, NULL },
 { CD, ".." },
 { CD, ".." },
 { CD, ".." },
 { CD, "tbcz" },
 { LS, NULL },
 { CD, "dwpc" },
 { LS, NULL },
 { CD, ".." },
 { CD, "gdhpqjd" },
 { LS, NULL },
 { CD, "lqmrbncv" },
 { LS, NULL },
 { CD, ".." },
 { CD, ".." },
 { CD, "lwmjgnh" },
 { LS, NULL },
 { CD, "jbrcnsm" },
 { LS, NULL },
 { CD, "fhtzf" },
 { LS, NULL },
 { CD, "hmz" },
 { LS, NULL },
 { CD, ".." },
 { CD, ".." },
 { CD, "zzp" },
 { LS, NULL },
 { CD, "dmqjmgsp" },
 { LS, NULL },
 { CD, ".." },
 { CD, "hmz" },
 { LS, NULL },
 { CD, "ljg" },
 { LS, NULL },
 { CD, "nrqs" },
 { LS, NULL },
 { CD, ".." },
 { CD, ".." },
 { CD, "tpnpp" },
 { LS, NULL },
 { CD, ".." },
 { CD, "vmj" },
 { LS, NULL },
 { CD, ".." },
 { CD, ".." },
 { CD, ".." },
 { CD, ".." },
 { CD, "pnhcpprn" },
 { LS, NULL },
 { CD, "bvdhw" },
 { LS, NULL },
 { CD, ".." },
 { CD, "gtlvqfwv" },
 { LS, NULL },
 { CD, ".." },
 { CD, "mzwcp" },
 { LS, NULL },
 { CD, ".." },
 { CD, "pvmbp" },
 { LS, NULL },
 { CD, "zlw" },
 { LS, NULL },
 { CD, "rgvscq" },
 { LS, NULL },
 { CD, ".." },
 { CD, "zrns" },
 { LS, NULL },
 { CD, "schnzjrv" },
 { LS, NULL },
 { CD, "zfhmw" },
 { LS, NULL },
 { CD, "dfd" },
 { LS, NULL },
 { CD, ".." },
 { CD, ".." },
 { CD, ".." },
 { CD, "zhfqhlvh" },
 { LS, NULL },
 { CD, ".." },
 { CD, ".." },
 { CD, ".." },
 { CD, ".." },
 { CD, "qtc" },
 { LS, NULL },
 { CD, "cndr" },
 { LS, NULL },
 { CD, ".." },
 { CD, "lqmrbncv" },
 { LS, NULL },
 { CD, "bzlvtw" },
 { LS, NULL },
 { CD, ".." },
 { CD, "hmz" },
 { LS, NULL },
 { CD, ".." },
 { CD, ".." },
 { CD, ".." },
 { CD, "snwrdp" },
 { LS, NULL },
 { CD, "hmz" },
 { LS, NULL },
 { CD, ".." },
 { CD, "lqmrbncv" },
 { LS, NULL },
 { CD, "cwz" },
 { LS, NULL },
 { CD, ".." },
 { CD, ".." },
 { CD, ".." },
 { CD, "tcmp" },
 { LS, NULL },
 { CD, "czm" },
 { LS, NULL },
 { CD, "jzbn" },
 { LS, NULL },
 { CD, "mzmf" },
 { LS, NULL },
 { CD, ".." },
 { CD, ".." },
 { CD, ".." },
 { CD, "ghnv" },
 { LS, NULL },
 { CD, ".." },
 { CD, ".." },
 { CD, "zjhcdbg" },
 { LS, NULL },
 { CD, ".." },
 { CD, "zzp" },
 { LS, NULL },
 { CD, "bgmrjcr" },
 { LS, NULL },
 { CD, ".." },
 { CD, "prdswch" },
 { LS, NULL },
 { CD, ".." },
 { CD, ".." },
 { CD, ".." },
 { CD, "zbprw" },
 { LS, NULL },
 { CD, "dnmrqs" },
 { LS, NULL },
 { CD, "trblfgd" },
 { LS, NULL },
 { CD, ".." },
 { CD, ".." },
 { CD, "fjq" },
 { LS, NULL },
 { CD, "rdjngdcz" },
 { LS, NULL },
 { CD, "wdblhmf" },
 { LS, NULL },
 { CD, ".." },
 { CD, ".." },
 { CD, ".." },
 { CD, "nrmzvg" },
 { LS, NULL },
 { CD, ".." },
 { CD, "pnhcpprn" },
 { LS, NULL },
 { CD, "hgvsvqtl" },
 { LS, NULL },
 { CD, "pnhcpprn" },
 { LS, NULL },
 { CD, ".." },
 { CD, "zlw" },
 { LS, NULL },
 { CD, ".." },
 { CD, ".." },
 { CD, "nvmstd" },
 { LS, NULL },
 { CD, "bzjbbjr" },
 { LS, NULL },
 { CD, ".." },
 { CD, "pnhcpprn" },
 { LS, NULL },
 { CD, ".." },
 { CD, "sjnqdjzd" },
 { LS, NULL },
 { CD, ".." },
 { CD, "zzp" },
 { LS, NULL },
 { CD, "hmz" },
 { LS, NULL },
 { CD, ".." },
 { CD, "zdwplgb" },
 { LS, NULL },
 { CD, ".." },
 { CD, ".." },
 { CD, ".." },
 { CD, ".." },
 { CD, "tbnj" },
 { LS, NULL },
 { CD, ".." },
 { CD, ".." },
 { CD, ".." },
 { CD, "zlw" },
 { LS, NULL },
 { CD, ".." },
 { CD, "zps" },
 { LS, NULL },
 { CD, "wgvhd" },
 { LS, NULL },
 { CD, ".." },
 { CD, "zlw" },
 { LS, NULL },
 { CD, ".." },
 { CD, ".." },
 { CD, "zssntdj" },
 { LS, NULL },
 { CD, "bgst" },
 { LS, NULL },
 { CD, ".." },
 { CD, "mjj" },
 { LS, NULL },
 { CD, "nnqhcjd" },
 { LS, NULL },
 { CD, ".." },
 { CD, ".." },
 { CD, "nhgp" },
 { LS, NULL },
 { CD, ".." },
 { CD, "pnhcpprn" },
 { LS, NULL },
 { CD, "hmz" },
 { LS, NULL },
 { CD, ".." },
 { CD, "lnz" },
 { LS, NULL },
 { CD, ".." },
 { CD, ".." },
 { CD, "zlw" },
 { LS, NULL },
 { CD, "cnssf" },
 { LS, NULL },
 { CD, ".." },
 { CD, "hdqb" },
 { LS, NULL },
 { CD, "rswtmqp" },
 { LS, NULL },
 { CD, ".." },
 { CD, ".." },
 { CD, "ljplj" },
 { LS, NULL },
 { CD, "czmjzd" },
 { LS, NULL },
 { CD, ".." },
 { CD, "pnhcpprn" },
 { LS, NULL },
 { CD, ".." },
 { CD, ".." },
 { CD, "lqmrbncv" },
 { LS, NULL },
 { CD, ".." },
 { CD, ".." },
 { CD, ".." },
 { CD, "zzp" },
 { LS, NULL },
 { CD, "brwc" },
 { LS, NULL },
 { CD, ".." },
 { CD, "cgptm" },
 { LS, NULL },
 { CD, "lqmrbncv" },
 { LS, NULL },
 { CD, "nspmbfq" },
 { LS, NULL },
 { CD, ".." },
 { CD, "nzrcvwzf" },
 { LS, NULL },
 { CD, ".." },
 { CD, ".." },
 { CD, ".." },
 { CD, "pnhcpprn" },
 { LS, NULL },
 { CD, "nsjtn" },
 { LS, NULL },
 { CD, ".." },
 { CD, "zlw" },
 { LS, NULL },
 { CD, "bzm" },
 { LS, NULL },
 { CD, ".." },
 { CD, "mgpvzqlf" },
 { LS, NULL },
 { CD, ".." },
 { CD, ".." },
 { CD, ".." },
 { CD, ".." },
 { CD, ".." },
 { CD, ".." },
 { CD, "qqpgw" },
 { LS, NULL },
 { CD, ".." },
 { CD, "sscj" },
 { LS, NULL },
 { CD, "hmz" },
 { LS, NULL },
 { CD, "gzwfqd" },
 { LS, NULL },
 { CD, ".." },
 { CD, "zmvhp" },
 { LS, NULL },
 { CD, "stdlstb" },
 { LS, NULL },
 { CD, ".." },
 { CD, ".." },
 { CD, ".." },
 { CD, "whhbsrs" },
 { LS, NULL },
 { CD, "lqmrbncv" },
 { LS, NULL },
 { CD, ".." },
 { CD, "zjtpvt" },
 { LS, NULL },
 { CD, ".." },
 { CD, ".." },
 { CD, ".." },
 { CD, "vpfdwq" },
 { LS, NULL },
 { CD, "lqmrbncv" },
 { LS, NULL },
 { CD, "zzp" },
 { LS, NULL },
 { CD, "lqm" },
 { LS, NULL },
 { CD, ".." },
 { CD, ".." },
 { CD, ".." },
 { CD, "pnhcpprn" },
 { LS, NULL },
 { CD, "hhhbwl" },
 { LS, NULL },
 { CD, "bswnjsc" },
 { LS, NULL },
 { CD, ".." },
 { CD, ".." },
 { CD, "hmz" },
 { LS, NULL },
 { CD, ".." },
 { CD, "hwj" },
 { LS, NULL },
 { CD, "hczspwn" },
 { LS, NULL },
 { CD, ".." },
 { CD, "phrvq" },
 { LS, NULL },
 { CD, "rtvfnr" },
 { LS, NULL },
 { CD, "fdqdt" },
 { LS, NULL },
 { CD, ".." },
 { CD, "zzp" },
 { LS, NULL },
 { CD, ".." },
 { CD, ".." },
 { CD, "sqvqf" },
 { LS, NULL },
 { CD, "dwpfrjcm" },
 { LS, NULL },
 { CD, ".." },
 { CD, "hmz" },
 { LS, NULL },
 { CD, ".." },
 { CD, ".." },
 { CD, "vfvrjm" },
 { LS, NULL },
 { CD, "hmz" },
 { LS, NULL },
 { CD, ".." },
 { CD, ".." },
 { CD, "zlm" },
 { LS, NULL },
 { CD, "jgzwp" },
 { LS, NULL },
 { CD, ".." },
 { CD, ".." },
 { CD, ".." },
 { CD, ".." },
 { CD, "mtbcvdwq" },
 { LS, NULL },
 { CD, "zqhm" },
 { LS, NULL },
 { CD, ".." },
 { CD, ".." },
 { CD, ".." },
 { CD, "zzp" },
 { LS, NULL },
 { CD, "wlqqd" },
 { LS, NULL },
 { CD, ".." },
 { CD, "zbdpt" },
 { LS, NULL },
 { CD, "jjmfpmnn" },
 { LS, NULL },
 { CD, "djtsbb" },
 { LS, NULL },
 { CD, "cfbnc" },
 { LS, NULL },
 { CD, ".." },
 { CD, "gsnsdc" },
 { LS, NULL },
 { CD, "pnhcpprn" },
 { LS, NULL },
 { CD, ".." },
 { CD, ".." },
 { CD, "jtcc" },
 { LS, NULL },
 { CD, "tdhsnr" },
 { LS, NULL },
 { CD, "mtwrwgd" },
 { LS, NULL },
 { CD, "vpb" },
 { LS, NULL },
 { CD, ".." },
 { CD, ".." },
 { CD, "ndnmj" },
 { LS, NULL },
 { CD, ".." },
 { CD, ".." },
 { CD, ".." },
 { CD, "mmjv" },
 { LS, NULL },
 { CD, "hqqqlfpt" },
 { LS, NULL },
 { CD, "hmz" },
 { LS, NULL },
 { CD, "hmz" },
 { LS, NULL },
 { CD, ".." },
 { CD, "pmpndws" },
 { LS, NULL },
 { CD, "zlw" },
 { LS, NULL },
 { CD, ".." },
 { CD, ".." },
 { CD, ".." },
 { CD, ".." },
 { CD, "lqmrbncv" },
 { LS, NULL },
 { CD, "fjjts" },
 { LS, NULL },
 { CD, "nlgqmc" },
 { LS, NULL },
 { CD, "hzzrtpwm" },
 { LS, NULL },
 { CD, ".." },
 { CD, ".." },
 { CD, "vtcfh" },
 { LS, NULL },
 { CD, ".." },
 { CD, ".." },
 { CD, "smhc" },
 { LS, NULL },
 { CD, ".." },
 { CD, ".." },
 { CD, "mhzbbgzq" },
 { LS, NULL },
 { CD, "zlw" },
 { LS, NULL },
 { CD, ".." },
 { CD, ".." },
 { CD, ".." },
 { CD, ".." },
 { CD, "htzzs" },
 { LS, NULL },
 { CD, ".." },
 { CD, "tmr" },
 { LS, NULL },
 { CD, ".." },
 { CD, "tpdrmpz" },
 { LS, NULL },
 { CD, "zzp" },
 { LS, NULL },
 { CD, "wrsj" },
 { LS, NULL },
 { CD, "ffjtv" },
 { LS, NULL },
 { CD, ".." },
 { CD, "hmz" },
 { LS, NULL },
 { CD, "sjt" },
 { LS, NULL },
 { CD, ".." },
 { CD, ".." },
 { CD, "qstdzsh" },
 { LS, NULL },
 { CD, "glb" },
 { LS, NULL },
 { CD, ".." },
 { CD, "nzljfz" },
 { LS, NULL },
 { CD, ".." },
 { CD, ".." },
 { CD, ".." },
 { CD, ".." },
 { CD, ".." },
 { CD, "wqzq" },
 { LS, NULL },
 { CD, "fjjrcs" },
 { LS, NULL },
 { CD, "mhg" },
 { LS, NULL },
 { CD, ".." },
 { CD, ".." },
 { CD, "gtrsmwmm" },
 { LS, NULL },
 { CD, ".." },
 { CD, "wdlpr" },
 { LS, NULL },
 { CD, ".." },
 { CD, ".." },
 { CD, "zlw" },
 { LS, NULL },
 { CD, ".." },
 { CD, ".." },
 { CD, "lqmrbncv" },
 { LS, NULL },
 { CD, "lqmrbncv" },
 { LS, NULL },
 { CD, ".." },
 { CD, ".." },
 { CD, "mqg" },
 { LS, NULL },
 { CD, ".." },
 { CD, "nmg" },
 { LS, NULL },
 { CD, "zlw" },
 { LS, NULL },
 { CD, ".." },
 { CD, ".." },
 { CD, "tgqrcfmt" },
 { LS, NULL },
 { CD, ".." },
 { CD, "zzp" },
 { LS, NULL },
 { CD, ".." },
 { CD, ".." },
 { CD, ".." },
 { CD, ".." },
 { CD, "zzp" },
 { LS, NULL },
};

#define NR_CMD 595

static const entry_t entries[] = {

 { 1, D, "bfbjzfd", 0 },
 { 1, D, "mbc", 0 },
 { 1, D, "psqmv", 0 },
 { 1, D, "qqpgw", 0 },
 { 1, F, "rrqzqwl.frp", 59022 },
 { 1, D, "sscj", 0 },
 { 1, D, "vpfdwq", 0 },
 { 1, D, "zzp", 0 },
 { 2, F, "bmzjjgzc.dcr", 125000 },
 { 2, D, "brmgzjp", 0 },
 { 2, F, "hgm", 165351 },
 { 2, D, "rhrqttg", 0 },
 { 2, D, "zfdc", 0 },
 { 3, F, "zzp.wrm", 298676 },
 { 4, D, "hmz", 0 },
 { 4, D, "hpcrbfq", 0 },
 { 5, F, "lqcg", 297949 },
 { 6, D, "ghmfgn", 0 },
 { 6, D, "pnhcpprn", 0 },
 { 6, D, "wgvqhw", 0 },
 { 7, D, "rrfg", 0 },
 { 7, D, "tggwct", 0 },
 { 8, F, "svzjf", 240584 },
 { 9, D, "lqmrbncv", 0 },
 { 10, F, "zlw.tsd", 268356 },
 { 11, F, "sjth.rhr", 138460 },
 { 12, F, "zphv.mwp", 144558 },
 { 13, F, "fgj.fhz", 173854 },
 { 13, F, "vwrmp.rzc", 233205 },
 { 14, F, "jfl", 93070 },
 { 14, F, "jpr.wlb", 95270 },
 { 14, F, "rmrtw", 30324 },
 { 14, F, "zphv.mwp", 243981 },
 { 15, D, "cjzpb", 0 },
 { 15, F, "ctb.bmm", 169953 },
 { 15, F, "gsmdbsp.sjz", 151614 },
 { 15, F, "hmz.qqt", 245528 },
 { 15, D, "jdvsccc", 0 },
 { 15, F, "nfbbqvvs.fdn", 46723 },
 { 15, D, "tbcz", 0 },
 { 16, F, "lqmrbncv.jpf", 156179 },
 { 17, F, "lqmrbncv", 240937 },
 { 17, D, "pnhcpprn", 0 },
 { 17, F, "qpjtdqfg.rwm", 279509 },
 { 17, F, "vwrmp.rzc", 265236 },
 { 17, D, "zwjqnf", 0 },
 { 17, F, "zzp.smp", 148420 },
 { 17, F, "zzp.zhh", 281537 },
 { 18, F, "zphv.mwp", 123983 },
 { 19, F, "gsmdbsp.sjz", 244132 },
 { 19, D, "stbgzg", 0 },
 { 20, F, "cbzw", 9605 },
 { 21, D, "dwpc", 0 },
 { 21, D, "gdhpqjd", 0 },
 { 21, D, "lwmjgnh", 0 },
 { 21, D, "zlw", 0 },
 { 21, D, "zps", 0 },
 { 21, D, "zssntdj", 0 },
 { 21, D, "zzp", 0 },
 { 22, F, "jmjtjrnt.zsb", 225827 },
 { 22, F, "zphv.mwp", 30125 },
 { 23, D, "lqmrbncv", 0 },
 { 24, F, "nwhbvps", 167746 },
 { 25, F, "bwdlz.sjf", 190409 },
 { 25, D, "jbrcnsm", 0 },
 { 25, D, "pnhcpprn", 0 },
 { 25, D, "zbprw", 0 },
 { 25, F, "zjvgm.tqb", 51030 },
 { 26, D, "fhtzf", 0 },
 { 26, D, "zzp", 0 },
 { 27, D, "hmz", 0 },
 { 28, F, "fbbpbpdm.rrn", 194260 },
 { 28, F, "pcqhzfh.gwv", 259497 },
 { 29, D, "dmqjmgsp", 0 },
 { 29, D, "hmz", 0 },
 { 29, F, "zzp.zvb", 222531 },
 { 30, F, "mdgrqss", 118387 },
 { 30, F, "zphv.mwp", 34746 },
 { 31, D, "ljg", 0 },
 { 31, D, "tpnpp", 0 },
 { 31, F, "trzfnvc", 250664 },
 { 31, D, "vmj", 0 },
 { 32, F, "bnwg.spg", 262125 },
 { 32, D, "nrqs", 0 },
 { 33, F, "gmvnbthn.shd", 259010 },
 { 34, F, "wqljsz.zzj", 292722 },
 { 35, F, "thf.jhp", 94772 },
 { 36, D, "bvdhw", 0 },
 { 36, F, "gsmdbsp.sjz", 145794 },
 { 36, D, "gtlvqfwv", 0 },
 { 36, D, "mzwcp", 0 },
 { 36, F, "nqdjpgpm.zmd", 30226 },
 { 36, D, "pvmbp", 0 },
 { 36, D, "qtc", 0 },
 { 36, D, "snwrdp", 0 },
 { 36, D, "tcmp", 0 },
 { 36, F, "wjzlh.mbz", 272593 },
 { 36, D, "zjhcdbg", 0 },
 { 36, D, "zzp", 0 },
 { 37, F, "zzp.jbp", 258434 },
 { 38, F, "fzg.tvc", 21710 },
 { 38, F, "vwrmp.rzc", 25429 },
 { 39, F, "lqmrbncv", 271460 },
 { 39, F, "zphv.mwp", 256282 },
 { 40, F, "jmbh.csg", 137453 },
 { 40, F, "ppbgtcr.rrl", 9818 },
 { 40, D, "zlw", 0 },
 { 41, F, "pgwdrp.lnd", 232130 },
 { 41, D, "rgvscq", 0 },
 { 41, D, "zrns", 0 },
 { 42, F, "gsmdbsp.sjz", 107168 },
 { 42, F, "pnhcpprn.lrt", 261303 },
 { 43, F, "jcsnz", 156386 },
 { 43, D, "schnzjrv", 0 },
 { 43, D, "zhfqhlvh", 0 },
 { 43, F, "zphv.mwp", 106788 },
 { 44, D, "zfhmw", 0 },
 { 45, D, "dfd", 0 },
 { 46, F, "rvqtmdb", 103262 },
 { 47, F, "pnhcpprn.vzc", 267785 },
 { 47, F, "zlw", 297909 },
 { 48, D, "cndr", 0 },
 { 48, D, "lqmrbncv", 0 },
 { 48, F, "rrqzqwl.frp", 201719 },
 { 49, F, "hmz.rqz", 218298 },
 { 49, F, "mzqtrz.jsb", 104450 },
 { 50, D, "bzlvtw", 0 },
 { 50, F, "gsmdbsp.sjz", 61437 },
 { 50, D, "hmz", 0 },
 { 50, F, "mqjzq.fvd", 129583 },
 { 50, F, "rrqzqwl.frp", 232347 },
 { 50, F, "tjd.hfr", 121479 },
 { 50, F, "zphv.mwp", 247144 },
 { 51, F, "gscrll.ttf", 256488 },
 { 51, F, "gsmdbsp.sjz", 301325 },
 { 52, F, "ggb.gmm", 118154 },
 { 53, D, "hmz", 0 },
 { 53, D, "lqmrbncv", 0 },
 { 53, F, "rrqzqwl.frp", 46060 },
 { 53, F, "vwrmp.rzc", 245119 },
 { 53, F, "zlw", 171585 },
 { 53, F, "zzp", 185512 },
 { 54, F, "lmhzqqw", 51192 },
 { 55, D, "cwz", 0 },
 { 56, F, "lfsthrnb.vcm", 218678 },
 { 57, D, "czm", 0 },
 { 57, D, "ghnv", 0 },
 { 57, F, "zzp.sgm", 259550 },
 { 58, D, "jzbn", 0 },
 { 59, D, "mzmf", 0 },
 { 60, F, "zzp", 244258 },
 { 61, F, "rrqzqwl.frp", 42931 },
 { 61, F, "zzp", 168344 },
 { 62, F, "fwz.mjb", 301695 },
 { 62, F, "nfhnb", 72201 },
 { 62, F, "prpwjp", 33600 },
 { 63, D, "bgmrjcr", 0 },
 { 63, D, "prdswch", 0 },
 { 64, F, "gsmdbsp.sjz", 278740 },
 { 65, F, "pnhcpprn.bmn", 4297 },
 { 66, D, "dnmrqs", 0 },
 { 66, D, "fjq", 0 },
 { 66, F, "lqmrbncv.wrt", 251370 },
 { 66, D, "nrmzvg", 0 },
 { 66, D, "pnhcpprn", 0 },
 { 66, F, "rrqzqwl.frp", 67326 },
 { 66, D, "tbnj", 0 },
 { 67, F, "pvhjcsrw.plw", 259873 },
 { 67, F, "rjstdm.hjb", 149720 },
 { 67, D, "trblfgd", 0 },
 { 67, F, "zphv.mwp", 180904 },
 { 68, F, "dgjbwqw.jwh", 143069 },
 { 68, F, "gsmdbsp.sjz", 264572 },
 { 69, D, "rdjngdcz", 0 },
 { 69, F, "wcvdfwrq.wnp", 243915 },
 { 70, D, "wdblhmf", 0 },
 { 71, F, "ctnqhqw.zmb", 54076 },
 { 72, F, "bmfjwnnp", 294196 },
 { 72, F, "pcqhzfh.gwv", 101511 },
 { 72, F, "zphv.mwp", 35978 },
 { 72, F, "zzp.drz", 129984 },
 { 73, D, "hgvsvqtl", 0 },
 { 73, D, "nvmstd", 0 },
 { 73, F, "rrqzqwl.frp", 135796 },
 { 74, F, "mzrqwfl", 159657 },
 { 74, D, "pnhcpprn", 0 },
 { 74, F, "pnhcpprn.nwb", 102064 },
 { 74, D, "zlw", 0 },
 { 75, F, "vwrmp.rzc", 65147 },
 { 76, F, "smrwnbm.rrl", 130115 },
 { 77, D, "bzjbbjr", 0 },
 { 77, F, "ldjvm.lbh", 234589 },
 { 77, F, "pcqhzfh.gwv", 290105 },
 { 77, D, "pnhcpprn", 0 },
 { 77, F, "qblpgd.wwh", 181679 },
 { 77, D, "sjnqdjzd", 0 },
 { 77, F, "vwrmp.rzc", 45384 },
 { 77, D, "zzp", 0 },
 { 78, F, "zlw.qfj", 290256 },
 { 79, F, "pnhcpprn.rvr", 86162 },
 { 80, F, "hhpddvl", 219465 },
 { 81, F, "dcg", 251390 },
 { 81, D, "hmz", 0 },
 { 81, F, "pcqhzfh.gwv", 163193 },
 { 81, F, "tdd.gdm", 241952 },
 { 81, D, "zdwplgb", 0 },
 { 81, F, "zlw.zjw", 72331 },
 { 81, F, "zzp.pdv", 128370 },
 { 82, F, "ndncntz.dpf", 196959 },
 { 82, F, "zzp.pff", 189089 },
 { 83, F, "zlw", 42204 },
 { 84, F, "svhfd", 27280 },
 { 84, F, "vwrmp.rzc", 186526 },
 { 85, F, "pcqhzfh.gwv", 282587 },
 { 86, F, "lqmrbncv.llw", 178180 },
 { 86, F, "rpp.crf", 202379 },
 { 86, F, "vvlgrl.wtd", 208722 },
 { 86, F, "vwrmp.rzc", 257512 },
 { 86, D, "wgvhd", 0 },
 { 86, D, "zlw", 0 },
 { 87, F, "rwtmqzv.crt", 222879 },
 { 88, F, "tgq.drp", 211821 },
 { 89, D, "bgst", 0 },
 { 89, F, "hwtnd.cqr", 84503 },
 { 89, D, "mjj", 0 },
 { 89, D, "nhgp", 0 },
 { 89, D, "pnhcpprn", 0 },
 { 89, D, "zlw", 0 },
 { 90, F, "lqmrbncv", 184029 },
 { 90, F, "tntvjzd.cjr", 167501 },
 { 91, D, "nnqhcjd", 0 },
 { 92, F, "vwrmp.rzc", 291365 },
 { 93, F, "hmz.ncq", 199554 },
 { 94, D, "hmz", 0 },
 { 94, D, "lnz", 0 },
 { 95, F, "vwrmp.rzc", 13943 },
 { 96, F, "lqmrbncv.jlc", 131441 },
 { 97, D, "cnssf", 0 },
 { 97, D, "hdqb", 0 },
 { 97, D, "ljplj", 0 },
 { 97, D, "lqmrbncv", 0 },
 { 97, F, "pcqhzfh.gwv", 187051 },
 { 98, F, "jbpvr.wpn", 191226 },
 { 99, D, "rswtmqp", 0 },
 { 100, F, "zzp", 48087 },
 { 101, D, "czmjzd", 0 },
 { 101, D, "pnhcpprn", 0 },
 { 102, F, "vwrmp.rzc", 195882 },
 { 102, F, "wst.mfl", 289013 },
 { 103, F, "fmtbrzwj", 108176 },
 { 104, F, "bzlbgvd.rlq", 17821 },
 { 104, F, "jbbrbp.wbg", 40881 },
 { 104, F, "rrqzqwl.frp", 66245 },
 { 105, D, "brwc", 0 },
 { 105, D, "cgptm", 0 },
 { 105, F, "lqmrbncv", 109548 },
 { 105, D, "pnhcpprn", 0 },
 { 105, F, "smmhjggp.hjg", 126920 },
 { 105, F, "srbpw", 262364 },
 { 105, F, "wqqffn.fhz", 197385 },
 { 106, F, "bffrfpqc", 87802 },
 { 107, D, "lqmrbncv", 0 },
 { 108, D, "nspmbfq", 0 },
 { 108, D, "nzrcvwzf", 0 },
 { 109, F, "szhbblh.frw", 270004 },
 { 110, F, "tjwt", 69278 },
 { 110, F, "tzhq.zzq", 150708 },
 { 111, D, "nsjtn", 0 },
 { 111, F, "vwrmp.rzc", 158565 },
 { 111, D, "zlw", 0 },
 { 112, F, "vvbp", 78943 },
 { 113, D, "bzm", 0 },
 { 113, D, "mgpvzqlf", 0 },
 { 114, F, "qqbvshtw.mnp", 142352 },
 { 115, F, "zphv.mwp", 248943 },
 { 116, F, "gsmdbsp.sjz", 21091 },
 { 117, D, "hmz", 0 },
 { 117, F, "prgdqt", 294941 },
 { 117, F, "qrhrv.vjd", 139104 },
 { 117, F, "rrqzqwl.frp", 228958 },
 { 117, D, "whhbsrs", 0 },
 { 117, F, "zphv.mwp", 11069 },
 { 117, F, "zzp", 286845 },
 { 118, F, "fvjp.qzq", 110085 },
 { 118, D, "gzwfqd", 0 },
 { 118, F, "pnhcpprn.zlz", 104041 },
 { 118, F, "tjvhzdrj", 236776 },
 { 118, F, "vwrmp.rzc", 241516 },
 { 118, D, "zmvhp", 0 },
 { 118, F, "zphv.mwp", 106304 },
 { 119, F, "bcjn", 142395 },
 { 119, F, "gpgq", 139565 },
 { 120, F, "glbcr.cnr", 12354 },
 { 120, F, "hmz.vsw", 115791 },
 { 120, F, "pnhcpprn.nnm", 53725 },
 { 120, D, "stdlstb", 0 },
 { 121, F, "jltstzz", 14732 },
 { 122, D, "lqmrbncv", 0 },
 { 122, F, "lvr", 75836 },
 { 122, D, "zjtpvt", 0 },
 { 122, F, "zphv.mwp", 263963 },
 { 123, F, "jslww", 272847 },
 { 123, F, "pcqhzfh.gwv", 128309 },
 { 123, F, "vwrmp.rzc", 58964 },
 { 124, F, "zphv.mwp", 245195 },
 { 125, F, "gsmdbsp.sjz", 166531 },
 { 125, D, "lqmrbncv", 0 },
 { 125, F, "nntncwh", 95329 },
 { 125, F, "pcqhzfh.gwv", 27020 },
 { 125, D, "pnhcpprn", 0 },
 { 125, F, "ttpdwl.dgm", 279032 },
 { 125, F, "vwrmp.rzc", 2499 },
 { 125, D, "zzp", 0 },
 { 126, D, "zzp", 0 },
 { 127, D, "lqm", 0 },
 { 127, F, "pnhcpprn.ljp", 290776 },
 { 128, F, "jhb", 221570 },
 { 129, D, "hhhbwl", 0 },
 { 129, D, "hmz", 0 },
 { 129, D, "hwj", 0 },
 { 129, F, "lqmrbncv.fgl", 55329 },
 { 129, D, "mtbcvdwq", 0 },
 { 129, F, "zlw", 106653 },
 { 130, D, "bswnjsc", 0 },
 { 130, F, "hmz", 232525 },
 { 130, F, "pnhcpprn.mdm", 2087 },
 { 130, F, "zzp", 246118 },
 { 131, F, "pcqhzfh.gwv", 53676 },
 { 132, F, "pnhcpprn.brj", 271083 },
 { 132, F, "zphv.mwp", 105660 },
 { 133, D, "hczspwn", 0 },
 { 133, F, "lqmrbncv", 222799 },
 { 133, D, "phrvq", 0 },
 { 134, F, "lqmrbncv.mwm", 53018 },
 { 135, F, "crjbtfn.sqp", 126253 },
 { 135, F, "pnhcpprn.rwg", 65577 },
 { 135, D, "rtvfnr", 0 },
 { 135, D, "sqvqf", 0 },
 { 135, D, "vfvrjm", 0 },
 { 135, F, "vjvq", 3480 },
 { 135, D, "zlm", 0 },
 { 136, D, "fdqdt", 0 },
 { 136, D, "zzp", 0 },
 { 137, F, "zzp", 265656 },
 { 138, F, "zphv.mwp", 238729 },
 { 139, D, "dwpfrjcm", 0 },
 { 139, D, "hmz", 0 },
 { 140, F, "vwrmp.rzc", 133324 },
 { 141, F, "wcgnq.ggd", 104746 },
 { 141, F, "zphv.mwp", 209360 },
 { 142, D, "hmz", 0 },
 { 142, F, "rvwffc", 221983 },
 { 142, F, "zlw.dhn", 230779 },
 { 142, F, "zpfmr", 232043 },
 { 143, F, "rrq.sdn", 38064 },
 { 144, D, "jgzwp", 0 },
 { 145, F, "lqmrbncv", 287272 },
 { 145, F, "qvcmwpg", 30088 },
 { 145, F, "znf.jbq", 266066 },
 { 146, F, "gsmdbsp.sjz", 234145 },
 { 146, D, "zqhm", 0 },
 { 147, F, "dnqdjh.fjd", 270079 },
 { 148, F, "pnhcpprn.vzq", 284975 },
 { 148, F, "rcm.ntz", 150735 },
 { 148, D, "wlqqd", 0 },
 { 148, D, "zbdpt", 0 },
 { 149, F, "jms", 163718 },
 { 149, F, "ltfsb.bbc", 289870 },
 { 149, F, "zvf", 261093 },
 { 149, F, "zzp", 288629 },
 { 150, F, "gsmdbsp.sjz", 271137 },
 { 150, D, "jjmfpmnn", 0 },
 { 150, D, "lqmrbncv", 0 },
 { 150, F, "mfpvr.vbg", 115632 },
 { 150, D, "mqg", 0 },
 { 150, D, "nmg", 0 },
 { 150, F, "plgqqf", 157663 },
 { 150, D, "tgqrcfmt", 0 },
 { 150, D, "zzp", 0 },
 { 151, D, "djtsbb", 0 },
 { 151, F, "hmz.wlh", 119203 },
 { 151, D, "htzzs", 0 },
 { 151, F, "pcqhzfh.gwv", 151275 },
 { 151, D, "tmr", 0 },
 { 151, D, "tpdrmpz", 0 },
 { 151, D, "wqzq", 0 },
 { 151, D, "zlw", 0 },
 { 151, F, "zzp.tpm", 275792 },
 { 152, D, "cfbnc", 0 },
 { 152, D, "gsnsdc", 0 },
 { 152, D, "jtcc", 0 },
 { 152, D, "mmjv", 0 },
 { 152, F, "zfbqs.lfp", 39430 },
 { 153, F, "hmz.gzt", 91862 },
 { 153, F, "rrqzqwl.frp", 36788 },
 { 154, D, "pnhcpprn", 0 },
 { 155, F, "bfs.hhj", 99325 },
 { 156, F, "ldpvgl.wsc", 4288 },
 { 156, F, "lqmrbncv.dnh", 199095 },
 { 156, F, "lqmrbncv.rsp", 18988 },
 { 156, D, "tdhsnr", 0 },
 { 157, D, "mtwrwgd", 0 },
 { 157, D, "ndnmj", 0 },
 { 158, D, "vpb", 0 },
 { 159, F, "bnnglntn.czw", 96743 },
 { 159, F, "zlw", 29316 },
 { 160, F, "hmz.dbh", 224172 },
 { 161, F, "gfv", 92219 },
 { 161, D, "hqqqlfpt", 0 },
 { 161, D, "lqmrbncv", 0 },
 { 161, D, "mhzbbgzq", 0 },
 { 161, F, "rrqzqwl.frp", 83949 },
 { 161, F, "vwrmp.rzc", 100668 },
 { 161, F, "zphv.mwp", 17966 },
 { 162, D, "hmz", 0 },
 { 163, D, "hmz", 0 },
 { 163, D, "pmpndws", 0 },
 { 163, F, "sbrvvpvf", 164308 },
 { 164, F, "pnhcpprn", 20375 },
 { 164, F, "twc.tmq", 140460 },
 { 165, D, "zlw", 0 },
 { 166, F, "dwmbrd", 267730 },
 { 167, D, "fjjts", 0 },
 { 167, F, "gsmdbsp.sjz", 277257 },
 { 167, D, "smhc", 0 },
 { 168, F, "bhdpb", 219095 },
 { 168, D, "nlgqmc", 0 },
 { 168, D, "vtcfh", 0 },
 { 169, D, "hzzrtpwm", 0 },
 { 170, F, "hfvdw", 151067 },
 { 171, F, "cczlmj.dsb", 57426 },
 { 172, F, "pnhcpprn", 6007 },
 { 173, D, "zlw", 0 },
 { 173, F, "zzp.qrv", 274198 },
 { 174, F, "cshrcj", 189860 },
 { 175, F, "hmz.tfw", 249670 },
 { 176, F, "lqmrbncv.svw", 293208 },
 { 177, F, "gsmdbsp.sjz", 106737 },
 { 177, D, "zzp", 0 },
 { 178, F, "gsmdbsp.sjz", 48813 },
 { 178, D, "wrsj", 0 },
 { 179, D, "ffjtv", 0 },
 { 179, D, "hmz", 0 },
 { 179, D, "qstdzsh", 0 },
 { 180, F, "zlw.rts", 4111 },
 { 181, D, "sjt", 0 },
 { 182, F, "pvfbz", 269004 },
 { 182, F, "rrqzqwl.frp", 297312 },
 { 182, F, "zphv.mwp", 270486 },
 { 183, D, "glb", 0 },
 { 183, D, "nzljfz", 0 },
 { 183, F, "qdstwvw", 73551 },
 { 183, F, "sgnbngld.cfj", 77703 },
 { 183, F, "vwrmp.rzc", 16097 },
 { 184, F, "pcqhzfh.gwv", 154850 },
 { 185, F, "tfwwj.wsf", 158622 },
 { 186, D, "fjjrcs", 0 },
 { 186, D, "gtrsmwmm", 0 },
 { 186, F, "lqmrbncv.dng", 119618 },
 { 186, F, "pnhcpprn", 263259 },
 { 186, D, "wdlpr", 0 },
 { 186, F, "zphv.mwp", 195318 },
 { 186, F, "zzp.jpm", 34727 },
 { 187, D, "mhg", 0 },
 { 188, F, "nns.nnr", 27680 },
 { 188, F, "zhwpw", 29177 },
 { 188, F, "zphv.mwp", 74154 },
 { 189, F, "pnhcpprn.jnf", 181463 },
 { 190, F, "dznclb.frm", 65151 },
 { 190, F, "gsmdbsp.sjz", 267043 },
 { 190, F, "lqmrbncv.vnd", 1114 },
 { 191, F, "hfvmfrtr.gqt", 222177 },
 { 191, F, "vlzvst.zps", 207956 },
 { 191, F, "whnvbpm.jdr", 111131 },
 { 192, D, "lqmrbncv", 0 },
 { 192, F, "lqmrbncv.glf", 231082 },
 { 192, F, "pcqhzfh.gwv", 220876 },
 { 192, F, "qvrcq.rwt", 122980 },
 { 192, F, "wcll", 197294 },
 { 193, F, "rrqzqwl.frp", 203618 },
 { 193, F, "vwrmp.rzc", 66116 },
 { 193, F, "zlw.fbt", 109306 },
 { 193, F, "zlw.qvz", 73751 },
 { 194, F, "gsmdbsp.sjz", 213353 },
 { 194, F, "lqmrbncv.cqd", 240884 },
 { 194, F, "lqmrbncv.rrw", 249290 },
 { 194, F, "rrqzqwl.frp", 229731 },
 { 195, D, "zlw", 0 },
 { 196, F, "grhstbr", 214686 },
 { 197, F, "zlw.jzl", 102076 },
 { 198, F, "lqmrbncv.frd", 231301 },
 { 199, F, "vwrmp.rzc", 197095 },
};

#define NR_ENTRY 492
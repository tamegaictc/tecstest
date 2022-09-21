/*
 * This file was automatically generated by tecsgen.
 * This file is not intended to be edited.
 */
#include "tJSMN_tecsgen.h"
#include "tJSMN_factory.h"

/* entry port descriptor type #_EDT_# */
/* eJSMN */
struct tag_tJSMN_eJSMN_DES {
    const struct tag_sJSMN_VMT *vmt;
    tJSMN_IDX  idx;
};

/* entry port skelton function #_EPSF_# */
/* eJSMN */
ER             tJSMN_eJSMN_json_open_skel( const struct tag_sJSMN_VDES *epd)
{
    struct tag_tJSMN_eJSMN_DES *lepd
        = (struct tag_tJSMN_eJSMN_DES *)epd;
    return tJSMN_eJSMN_json_open( lepd->idx );
}
ER             tJSMN_eJSMN_json_parse_path_skel( const struct tag_sJSMN_VDES *epd, char_t* c_path, char_t* e_path, char_t* f_path, int target_num, int btr)
{
    struct tag_tJSMN_eJSMN_DES *lepd
        = (struct tag_tJSMN_eJSMN_DES *)epd;
    return tJSMN_eJSMN_json_parse_path( lepd->idx, c_path, e_path, f_path, target_num, btr );
}
ER             tJSMN_eJSMN_json_parse_arg_skel( const struct tag_sJSMN_VDES *epd, struct tecsunit_obj* arguments, struct tecsunit_obj* exp_val, int* arg_num, int target_num, int btr)
{
    struct tag_tJSMN_eJSMN_DES *lepd
        = (struct tag_tJSMN_eJSMN_DES *)epd;
    return tJSMN_eJSMN_json_parse_arg( lepd->idx, arguments, exp_val, arg_num, target_num, btr );
}

/* entry port skelton function table #_EPSFT_# */
/* eJSMN */
const struct tag_sJSMN_VMT tJSMN_eJSMN_MT_ = {
    tJSMN_eJSMN_json_open_skel,
    tJSMN_eJSMN_json_parse_path_skel,
    tJSMN_eJSMN_json_parse_arg_skel,
};

/* entry port descriptor referenced by call port (differ from actual definition) #_CPEPD_# */

/* call port array #_CPA_# */

/* array of attr/var #_AVAI_# */
char_t tJSMN_JSMN_CB_json_str_INIT[1024];
char_t tJSMN_JSMN_CB_tmp_str_INIT[128];
char_t tJSMN_JSMN_CB_target_path_INIT[128];
/* cell INIB #_INIB_# */
tJSMN_INIB tJSMN_INIB_tab[] = {
    /* cell: tJSMN_CB_tab[0]:  JSMN id=1 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        1024,                                    /* LEN */
        128,                                     /* TMP_LEN */
        "region",                                /* key_region */
        "cell",                                  /* key_cell */
        "entry",                                 /* key_entry */
        "function",                              /* key_function */
        "argument",                              /* key_arg */
        "exp_val",                               /* key_exp */
        "pre_cond",                              /* key_pre_cond */
        "post_cond",                             /* key_post_cond */
        tJSMN_JSMN_CB_json_str_INIT,             /* json_str */
        tJSMN_JSMN_CB_tmp_str_INIT,              /* tmp_str */
        tJSMN_JSMN_CB_target_path_INIT,          /* target_path */
    },
};

/* cell CB #_CB_# */
struct tag_tJSMN_CB tJSMN_CB_tab[] = {
    /* cell: tJSMN_CB_tab[0]:  JSMN id=1 */
    {
        &tJSMN_INIB_tab[0],                      /* _inib */
        /* entry port #_EP_# */ 
        /* var */ 
        0,                                       /* counter */
    },
};

/* entry port descriptor #_EPD_# */
extern const struct tag_tJSMN_eJSMN_DES rTEMP_JSMN_eJSMN_des;
const struct tag_tJSMN_eJSMN_DES rTEMP_JSMN_eJSMN_des = {
    &tJSMN_eJSMN_MT_,
    &tJSMN_CB_tab[0],      /* CB 3 */
};


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100027690(L2CValue *param_1,L2CFighterCommon *param_2)

{
  L2CValue *this;
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  float fVar7;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  this = &param_2->globalTable;
  pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x20);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT1_FLAG_SPECIAL_HI);
  lib::L2CValue::operator&(pLVar5,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((bVar1 & 1U) == 0) {
LAB_71000277e8:
    pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x20);
    lib::L2CValue::L2CValue(aLStack80,FIGHTER_PAD_CMD_CAT1_FLAG_SPECIAL_S);
    lib::L2CValue::operator&(pLVar5,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_SPECIAL_S);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      bVar2 = app::lua_bind::WorkModule__is_enable_transition_term_impl
                        (param_2->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
      bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((bVar1 & 1U) != 0) {
        pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x39);
        lib::L2CValue::L2CValue(aLStack128,pLVar5);
        lua2cpp::L2CFighterCommon::sub_transition_term_id_cont_disguise(param_2,(L2CValue)0x80);
        bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::~L2CValue(aLStack128);
        if ((bVar1 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BUDDY_SPECIAL_N_CANCEL_TYPE_SPECIAL_S);
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BUDDY_STATUS_SPECIAL_N_WORK_INT_CANCEL_TYPE);
          iVar3 = lib::L2CValue::as_integer(aLStack80);
          iVar4 = lib::L2CValue::as_integer(aLStack96);
          app::lua_bind::WorkModule__set_int_impl(param_2->moduleAccessor,iVar3,iVar4);
          lib::L2CValue::~L2CValue(aLStack96);
          lib::L2CValue::~L2CValue(aLStack80);
          pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x1a);
          lib::L2CValue::L2CValue(aLStack80,0.0);
          uVar6 = lib::L2CValue::operator<(aLStack80,pLVar5);
          lib::L2CValue::~L2CValue(aLStack80);
          if ((uVar6 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack80,-1.0);
            lib::L2CValue::L2CValue
                      (aLStack96,_FIGHTER_BUDDY_STATUS_SPECIAL_N_WORK_FLOAT_SPECIAL_S_LR);
            fVar7 = (float)lib::L2CValue::as_number(aLStack80);
            iVar3 = lib::L2CValue::as_integer(aLStack96);
            app::lua_bind::WorkModule__set_float_impl(param_2->moduleAccessor,fVar7,iVar3);
          }
          else {
            lib::L2CValue::L2CValue(aLStack80,1.0);
            lib::L2CValue::L2CValue
                      (aLStack96,_FIGHTER_BUDDY_STATUS_SPECIAL_N_WORK_FLOAT_SPECIAL_S_LR);
            fVar7 = (float)lib::L2CValue::as_number(aLStack80);
            iVar3 = lib::L2CValue::as_integer(aLStack96);
            app::lua_bind::WorkModule__set_float_impl(param_2->moduleAccessor,fVar7,iVar3);
          }
          goto LAB_7100027b0c;
        }
      }
    }
    pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x20);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT1_FLAG_SPECIAL_LW);
    lib::L2CValue::operator&(pLVar5,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_SPECIAL_LW);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      bVar2 = app::lua_bind::WorkModule__is_enable_transition_term_impl
                        (param_2->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
      bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((bVar1 & 1U) != 0) {
        pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x3b);
        lib::L2CValue::L2CValue(aLStack144,pLVar5);
        lua2cpp::L2CFighterCommon::sub_transition_term_id_cont_disguise(param_2,(L2CValue)0x70);
        bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::~L2CValue(aLStack144);
        if ((bVar1 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BUDDY_SPECIAL_N_CANCEL_TYPE_SPECIAL_LW);
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BUDDY_STATUS_SPECIAL_N_WORK_INT_CANCEL_TYPE);
          iVar3 = lib::L2CValue::as_integer(aLStack80);
          iVar4 = lib::L2CValue::as_integer(aLStack96);
          app::lua_bind::WorkModule__set_int_impl(param_2->moduleAccessor,iVar3,iVar4);
          goto LAB_7100027b0c;
        }
      }
    }
    bVar1 = false;
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_SPECIAL_HI);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    bVar2 = app::lua_bind::WorkModule__is_enable_transition_term_impl(param_2->moduleAccessor,iVar3)
    ;
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((bVar1 & 1U) == 0) goto LAB_71000277e8;
    pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x3a);
    lib::L2CValue::L2CValue(aLStack112,pLVar5);
    lua2cpp::L2CFighterCommon::sub_transition_term_id_cont_disguise(param_2,(L2CValue)0x90);
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((bVar1 & 1U) == 0) goto LAB_71000277e8;
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BUDDY_SPECIAL_N_CANCEL_TYPE_SPECIAL_HI);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BUDDY_STATUS_SPECIAL_N_WORK_INT_CANCEL_TYPE);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__set_int_impl(param_2->moduleAccessor,iVar3,iVar4);
LAB_7100027b0c:
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack80);
    bVar1 = true;
  }
  lib::L2CValue::L2CValue(param_1,bVar1);
  return;
}


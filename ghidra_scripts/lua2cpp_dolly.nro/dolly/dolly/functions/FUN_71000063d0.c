
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000063d0(L2CValue *param_1,L2CFighterCommon *param_2)

{
  bool bVar1;
  L2CValue *pLVar2;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  pLVar2 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_2->globalTable,0x23);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT4_FLAG_SPECIAL_HI2_COMMAND);
  lib::L2CValue::operator&(pLVar2,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((bVar1 & 1U) != 0) {
    pLVar2 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_2->globalTable,0x3a);
    lib::L2CValue::L2CValue(aLStack112,pLVar2);
    lua2cpp::L2CFighterCommon::sub_transition_term_id_cont_disguise(param_2,(L2CValue)0x90);
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_DOLLY_STATUS_KIND_SPECIAL_HI_COMMAND);
      lib::L2CValue::L2CValue(aLStack144,true);
      lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x80,(L2CValue)0x70);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::L2CValue(param_1,true);
      return;
    }
  }
  lib::L2CValue::L2CValue(param_1,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100020310(L2CValue *param_1,L2CFighterCommon *param_2,L2CValue *param_3)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(param_1,0);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_TRANSITION_TERM_ID_FINAL);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  bVar1 = app::lua_bind::WorkModule__is_enable_transition_term_impl(param_2->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_TRANSITION_TERM_ID_FINAL);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__enable_transition_term_impl(param_2->moduleAccessor,iVar2);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_SITUATION_KIND_GROUND);
  uVar3 = lib::L2CValue::operator==(param_3,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar3 & 1) == 0) {
    lua2cpp::L2CFighterCommon::sub_transition_group_check_air_special(param_2);
    lib::L2CValue::operator=(param_1,aLStack64);
  }
  else {
    lua2cpp::L2CFighterCommon::sub_transition_group_check_ground_special(param_2);
    lib::L2CValue::operator=(param_1,aLStack64);
  }
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,false);
  uVar3 = lib::L2CValue::operator==(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_TRANSITION_TERM_ID_FINAL);
    iVar2 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__unable_transition_term_impl(param_2->moduleAccessor,iVar2);
    lib::L2CValue::~L2CValue(aLStack64);
  }
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}


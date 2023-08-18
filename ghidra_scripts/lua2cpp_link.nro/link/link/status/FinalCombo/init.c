
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterLink::status::FinalCombo_init(L2CFighterLink *this,L2CValue *return_value)

{
  int iVar1;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_LINK_FINAL_MSG_MOT_PLAY);
  lib::L2CValue::L2CValue(aLStack80,0x54f934137);
  FUN_7100008e20(this,aLStack64,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_LINK_STATUS_WORK_ID_FLAG_FINAL_RAISE_ONOFF);
  iVar1 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}


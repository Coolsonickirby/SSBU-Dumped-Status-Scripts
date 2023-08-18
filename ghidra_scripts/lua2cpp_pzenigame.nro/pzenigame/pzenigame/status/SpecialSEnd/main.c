
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPzenigame::status::SpecialSEnd_main(L2CFighterPzenigame *this,L2CValue *return_value)

{
  int iVar1;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,true);
  lib::L2CValue::L2CValue(aLStack80,0xdb8bd3614);
  lib::L2CValue::L2CValue(aLStack96,0x1158d0953d);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_TYPE_PZENIGAME_SPECIAL_S_END);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_KINETIC_TYPE_PZENIGAME_SPECIAL_AIR_S_END);
  FUN_7100008380(this,aLStack64,aLStack80,aLStack96,aLStack112,aLStack128);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_PZENIGAME_STATUS_SPECIAL_S_FLAG_CONTINUE);
  iVar1 = lib::L2CValue::as_integer(aLStack144);
  app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack144,SpecialSEnd_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x70);
  lib::L2CValue::_L2CValue(aLStack144);
  return;
}


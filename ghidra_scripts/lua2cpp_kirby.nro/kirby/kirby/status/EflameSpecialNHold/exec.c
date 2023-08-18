
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::EflameSpecialNHold_exec(L2CFighterKirby *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_EFLAME_STATUS_SPECIAL_N_WORK_INT_VOICE_PLAY_FRAME);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  bVar1 = app::lua_bind::WorkModule__count_down_int_impl(this->moduleAccessor,iVar2,0);
  lib::L2CValue::L2CValue(aLStack48,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}


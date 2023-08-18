
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterDaisy::status::AttackS4_exit(L2CFighterDaisy *this,L2CValue *return_value)

{
  int iVar1;
  int iVar2;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lua2cpp::L2CFighterCommon::sub_attack_s4_uniq_process_exit(this);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PEACH_SMASH_ITEM_PAN);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PEACH_INSTANCE_WORK_INT_SMASH_ITEM);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}


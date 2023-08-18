
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterGekkouga::status::AttackAir_main(L2CFighterGekkouga *this,L2CValue *return_value)

{
  int iVar1;
  int iVar2;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,0);
  lib::L2CValue::L2CValue
            (aLStack80,_FIGHTER_GEKKOUGA_INSTANCE_WORK_ID_INT_ATTACK_AIR_LW_BOUND_COUNTER);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lua2cpp::L2CFighterCommon::sub_attack_air(this);
  lib::L2CValue::L2CValue(aLStack64,AttackAir_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xc0);
  lib::L2CValue::_L2CValue(aLStack64);
  return;
}


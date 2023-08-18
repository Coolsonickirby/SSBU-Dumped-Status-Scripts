
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKoopa::status::AttackAir_main(L2CFighterKoopa *this,L2CValue *return_value)

{
  int iVar1;
  ulong uVar2;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  iVar1 = app::lua_bind::ControlModule__get_attack_air_kind_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,iVar1);
  lib::L2CValue::L2CValue(aLStack64,FIGHTER_COMMAND_ATTACK_AIR_KIND_N);
  uVar2 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_COMMAND_ATTACK_AIR_KIND_LW);
    uVar2 = lib::L2CValue::operator__(aLStack80,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar2 & 1) == 0) goto LAB_710000c430;
  }
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_COMMAND_ATTACK_AIR_KIND_F);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::ControlModule__set_attack_air_kind_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack64);
LAB_710000c430:
  lua2cpp::L2CFighterCommon::sub_attack_air(this);
  lib::L2CValue::L2CValue(aLStack64,AttackAir_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xc0);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}


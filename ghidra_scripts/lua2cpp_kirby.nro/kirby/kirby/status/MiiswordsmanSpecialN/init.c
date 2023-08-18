
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::MiiswordsmanSpecialN_init(L2CFighterKirby *this,L2CValue *return_value)

{
  int iVar1;
  ulong uVar2;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  iVar1 = app::lua_bind::StatusModule__situation_kind_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,iVar1);
  lib::L2CValue::L2CValue(aLStack64,SITUATION_KIND_AIR);
  uVar2 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KINETIC_TYPE_MOTION_IGNORE_NORMAL);
    iVar1 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar1);
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KINETIC_TYPE_MIISWORDSMAN_SPECIAL_AIR_N1);
    iVar1 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar1);
  }
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}


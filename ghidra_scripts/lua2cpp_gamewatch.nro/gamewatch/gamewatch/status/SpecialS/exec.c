
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterGamewatch::status::SpecialS_exec(L2CFighterGamewatch *this,L2CValue *return_value)

{
  int iVar1;
  ulong uVar2;
  float fVar3;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_GAMEWATCH_STATUS_SPECIAL_S_WORK_FLOAT_DAMAGE);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  fVar3 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack96,fVar3);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0.0);
  uVar2 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar2 & 1) == 0) {
    fVar3 = (float)app::lua_bind::FighterManager__one_on_one_ratio_impl
                             (LUA_SCRIPT_LINE_MAP_CORRECTION);
    lib::L2CValue::L2CValue(aLStack112,fVar3);
    lib::L2CValue::operator_(aLStack112,aLStack96);
    fVar3 = (float)lib::L2CValue::as_number(aLStack80);
    app::lua_bind::DamageModule__add_damage_impl(this->moduleAccessor,fVar3,0);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack80,0.0);
    lib::L2CValue::operator_(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_GAMEWATCH_STATUS_SPECIAL_S_WORK_FLOAT_DAMAGE);
  fVar3 = (float)lib::L2CValue::as_number(aLStack96);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar3,iVar1);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKamui::status::SpecialSWall_end(L2CFighterKamui *this,L2CValue *return_value)

{
  L2CValue *this_00;
  int iVar1;
  L2CValue *pLVar2;
  ulong uVar3;
  L2CValue aLStack80 [16];
  
  this_00 = &this->globalTable;
  pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KAMUI_STATUS_KIND_SPECIAL_S_WALL_END);
  uVar3 = lib::L2CValue::operator__(pLVar2,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar3 & 1) == 0) {
    pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KAMUI_STATUS_KIND_SPECIAL_S_WALL_ATTACK_F);
    uVar3 = lib::L2CValue::operator__(pLVar2,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar3 & 1) == 0) {
      pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KAMUI_STATUS_KIND_SPECIAL_S_WALL_ATTACK_B);
      uVar3 = lib::L2CValue::operator__(pLVar2,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar3 & 1) == 0) {
        pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KAMUI_STATUS_KIND_SPECIAL_S_WALL_JUMP);
        uVar3 = lib::L2CValue::operator__(pLVar2,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar3 & 1) == 0) {
          pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_FINAL_VISUAL_ATTACK_OTHER);
          uVar3 = lib::L2CValue::operator__(pLVar2,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar3 & 1) == 0) {
            FUN_7100018070(this);
          }
        }
      }
    }
  }
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_DAMAGE);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::KineticModule__enable_energy_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_ENV_WIND);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::KineticModule__enable_energy_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_JOSTLE);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::KineticModule__enable_energy_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}


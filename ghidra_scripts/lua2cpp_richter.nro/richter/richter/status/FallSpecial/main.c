
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterRichter::status::FallSpecial_main(L2CFighterRichter *this,L2CValue *return_value)

{
  int iVar1;
  L2CValue *this_00;
  ulong uVar2;
  void *pvVar3;
  ulong uVar4;
  FighterKineticEnergyController *pFVar5;
  float fVar6;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,10);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_SPECIAL_HI);
  uVar2 = lib::L2CValue::operator__(this_00,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar2 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
    iVar1 = lib::L2CValue::as_integer(aLStack96);
    pvVar3 = (void *)app::lua_bind::KineticModule__get_energy_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue(aLStack80,pvVar3);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack112,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack128,0x10ea0ebc2e);
    uVar2 = lib::L2CValue::as_integer(aLStack112);
    uVar4 = lib::L2CValue::as_integer(aLStack128);
    fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar2,uVar4)
    ;
    lib::L2CValue::L2CValue(aLStack96,fVar6);
    fVar6 = (float)lib::L2CValue::as_number(aLStack96);
    pFVar5 = (FighterKineticEnergyController *)lib::L2CValue::as_pointer(aLStack80);
    app::lua_bind::FighterKineticEnergyController__set_accel_x_mul_impl(pFVar5,fVar6);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lua2cpp::L2CFighterCommon::status_fall_special(this);
  return;
}


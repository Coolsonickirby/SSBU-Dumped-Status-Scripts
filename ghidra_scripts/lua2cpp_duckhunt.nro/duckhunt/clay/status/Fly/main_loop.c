
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponDuckhuntClay::status::Fly_main_loop(L2CWeaponDuckhuntClay *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  float fVar6;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  undefined auStack144 [32];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack112,_WEAPON_DUCKHUNT_CLAY_INSTANCE_WORK_ID_FLAG_IS_FLOOR_HIT);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar3 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,0xaae2714fc);
    lib::L2CValue::L2CValue(aLStack112,0xf9b827443);
    uVar3 = lib::L2CValue::as_integer(aLStack80);
    uVar4 = lib::L2CValue::as_integer(aLStack112);
    fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar3,uVar4)
    ;
    lib::L2CValue::L2CValue(aLStack96,fVar6);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0xaae2714fc);
    lib::L2CValue::L2CValue((L2CValue *)(auStack144 + 0x10),0x15db29af3d);
    uVar3 = lib::L2CValue::as_integer(aLStack80);
    uVar4 = lib::L2CValue::as_integer((L2CValue *)(auStack144 + 0x10));
    fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar3,uVar4)
    ;
    lib::L2CValue::L2CValue(aLStack112,fVar6);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack144 + 0x10));
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue((L2CValue *)(auStack144 + 0x10),0.0);
    lib::L2CValue::L2CValue(aLStack80,0.0);
    uVar3 = lib::L2CValue::operator_(aLStack80,aLStack112);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack160,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
      pLVar5 = (L2CValue *)lib::L2CValue::as_integer(aLStack160);
      fVar6 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl
                               (this->moduleAccessor,(int)pLVar5);
      lib::L2CValue::L2CValue((L2CValue *)auStack144,fVar6);
      lib::L2CAgent::math_abs((L2CAgent *)auStack144,pLVar5);
      lib::L2CValue::_L2CValue((L2CValue *)auStack144);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::L2CValue(aLStack160,aLStack80);
      lib::L2CValue::L2CValue(aLStack176,0.0);
      lib::L2CValue::L2CValue(aLStack192,aLStack112);
      lua2cpp::L2CFighterBase::clamp(this,(L2CValue)0x60,(L2CValue)0x50,(L2CValue)0x40);
      lib::L2CValue::operator_(aLStack80,(L2CValue *)auStack144);
      lib::L2CValue::_L2CValue((L2CValue *)auStack144);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::operator_(aLStack80,aLStack112);
      lib::L2CValue::operator_((L2CValue *)(auStack144 + 0x10),(L2CValue *)auStack144);
      lib::L2CValue::_L2CValue((L2CValue *)auStack144);
      lib::L2CValue::_L2CValue(aLStack80);
    }
    fVar6 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue((L2CValue *)auStack144,fVar6);
    lib::L2CValue::operator_((L2CValue *)(auStack144 + 0x10),(L2CValue *)auStack144);
    lib::L2CValue::operator_((L2CValue *)(auStack144 + 0x10),aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue((L2CValue *)auStack144);
    lib::L2CValue::operator_(aLStack96,(L2CValue *)(auStack144 + 0x10));
    lib::L2CValue::L2CValue
              ((L2CValue *)auStack144,_WEAPON_DUCKHUNT_CLAY_INSTANCE_WORK_ID_FLOAT_ROT_ANGLE_AXIS);
    fVar6 = (float)lib::L2CValue::as_number(aLStack80);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)auStack144);
    app::lua_bind::WorkModule__add_float_impl(this->moduleAccessor,fVar6,iVar2);
    lib::L2CValue::_L2CValue((L2CValue *)auStack144);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack144 + 0x10));
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}


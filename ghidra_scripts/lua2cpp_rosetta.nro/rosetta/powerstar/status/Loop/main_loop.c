
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponRosettaPowerstar::status::Loop_main_loop
          (L2CWeaponRosettaPowerstar *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  float fVar5;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  bVar1 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar3 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack96,iVar2);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0);
    uVar3 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_WEAPON_ROSETTA_POWERSTAR_STATUS_KIND_END);
      lib::L2CValue::L2CValue(aLStack112,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x90);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue((L2CValue *)return_value,1);
      lib::L2CValue::_L2CValue(aLStack96);
      return;
    }
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_ROSETTA_POWERSTAR_INSTANCE_WORK_ID_FLOAT_ADD_SCALE);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    fVar5 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack112,fVar5);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0.0);
    uVar3 = lib::L2CValue::operator_(aLStack80,aLStack112);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar3 & 1) != 0) {
      fVar5 = (float)app::lua_bind::PostureModule__base_scale_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack128,fVar5);
      lib::L2CValue::operator_(aLStack128,aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::L2CValue(aLStack144,0xf994e6f6f);
      lib::L2CValue::L2CValue(aLStack160,0x9833fd8c4);
      uVar3 = lib::L2CValue::as_integer(aLStack144);
      uVar4 = lib::L2CValue::as_integer(aLStack160);
      fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar3,uVar4);
      lib::L2CValue::L2CValue(aLStack128,fVar5);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      uVar3 = lib::L2CValue::operator__(aLStack128,aLStack80);
      if ((uVar3 & 1) != 0) {
        lib::L2CValue::operator_(aLStack80,aLStack128);
        lib::L2CValue::L2CValue(aLStack144,0.0);
        lib::L2CValue::L2CValue
                  (aLStack160,_WEAPON_ROSETTA_POWERSTAR_INSTANCE_WORK_ID_FLOAT_ADD_SCALE);
        fVar5 = (float)lib::L2CValue::as_number(aLStack144);
        iVar2 = lib::L2CValue::as_integer(aLStack160);
        app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar5,iVar2);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack144);
      }
      fVar5 = (float)lib::L2CValue::as_number(aLStack80);
      app::lua_bind::PostureModule__set_scale_impl(this->moduleAccessor,fVar5,false);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack80);
    }
    lib::L2CValue::L2CValue(aLStack80,aLStack96);
    FUN_710000f5b0(this,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

